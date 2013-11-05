//
//  NSData+JQ.m
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "NSData+JQ.h"



@implementation NSData (JQ)
- (NSData *)jq:(NSString *)jq_program withOptions:(JV_OPTIONS)flags{
    NSMutableData* outputData = [NSMutableData dataWithCapacity:0];
    JQParse([jq_program UTF8String], [self bytes], [self length], flags, ^(const char *output, const NSUInteger length) {
        [outputData appendBytes:output length:length];
    });
    return outputData;
}

- (NSData *)jq:(NSString *)jq{
    return [self jq:jq withOptions:0];
}
@end
