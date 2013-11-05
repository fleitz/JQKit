//
//  NSData+JQ.m
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "NSData+JQ.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "compile.h"
#include "jv.h"
#include "jv_parse.h"
#include "execute.h"
#include "config.h"  /* Autoconf generated header file */
#include "jv_alloc.h"

@implementation NSData (JQ)
- (NSData *)jq:(NSString *)jq_program withOptions:(JV_OPTIONS)flags{
    NSMutableData* outputData = [NSMutableData dataWithCapacity:0];
    struct bytecode* bc = jq_compile([jq_program cStringUsingEncoding:NSUTF8StringEncoding]);
    struct jv_parser parser;
    jv_parser_init(&parser);
    jv_parser_set_buf(&parser, [self bytes], [self length], NO);
    jv value;
    while (jv_is_valid((value = jv_parser_next(&parser)))) {
        jq_state *jq = NULL;
        jq_init(bc, value, &jq, flags);
        jv result;
        while (jv_is_valid(result = jq_next(jq))) {
            jv output = jv_dump_string(result, JV_PRINT_PRETTY);
            const char* outputStr = jv_string_value(output);
            [outputData appendBytes:outputStr length:jv_string_length_bytes(output)];
            jv_free(output);
        }
        jv_free(result);
        jq_teardown(&jq);
    }
    jv_parser_free(&parser);
    bytecode_free(bc);
    return outputData;
}

- (NSData *)jq:(NSString *)jq{
    return [self jq:jq withOptions:0];
}
@end
