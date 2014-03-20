//
//  JQKit.c
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//
#include "JQParse.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "compile.h"
#include "jv_parse.h"
#include "execute.h"
#include "config.h"  /* Autoconf generated header file */
#include "jv_alloc.h"

void JQParse(const char* jq_program, const char* data, NSUInteger data_length, JV_OPTIONS flags, void (^callback)(const char * output,const NSUInteger length)){
    struct bytecode* bc = jq_compile(jq_program);
    struct jv_parser parser;
    jv_parser_init(&parser);
    jv_parser_set_buf(&parser, data, data_length, 0);
    jv value;
    while (jv_is_valid((value = jv_parser_next(&parser)))) {
        jq_state *jq = NULL;
        jq_init(bc, value, &jq, flags);
        jv result;
        while (jv_is_valid(result = jq_next(jq))) {
            int option = JV_PRINT_PRETTY;
            if (flags & COLOUR_OUTPUT) {
                option = (option | JV_PRINT_COLOUR);
            }
            jv output = jv_dump_string(result, option);
            const char* outputStr = jv_string_value(output);
            int len = jv_string_length_bytes(output);
            callback( outputStr, len);
            jv_free(output);
        }
        jv_free(result);
        jq_teardown(&jq);
    }
    jv_parser_free(&parser);
    bytecode_free(bc);
}
