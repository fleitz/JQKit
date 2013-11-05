//
//  NSString+JQ.m
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "NSString+JQ.h"
#import "JQParse.h"
@implementation NSString (JQ)
- (NSString *)jq:(NSString *)jq withOptions:(JV_OPTIONS)flags{
    const char* data = [self UTF8String];
    const int data_length = strlen(data);
    __block NSString* outputStr;
    JQParse([jq UTF8String], data, data_length, flags, ^(const char *output, const NSUInteger length) {
        outputStr = [[NSString alloc] initWithUTF8String:output];
   });
    return outputStr;
}

- (NSString *)jq:(NSString *)jq{
    return [self jq:jq withOptions:0];
}


@end
