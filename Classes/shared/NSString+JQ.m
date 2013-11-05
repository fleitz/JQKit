//
//  NSString+JQ.m
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import "NSString+JQ.h"

@implementation NSString (JQ)
- (NSString *)jq:(NSString *)jq withOptions:(JV_OPTIONS)flags{
   return [[NSString alloc] initWithData:[[self dataUsingEncoding:NSUTF8StringEncoding] jq:jq withOptions:flags] encoding:NSUTF8StringEncoding];
}

- (NSString *)jq:(NSString *)jq{
    return [self jq:jq withOptions:0];
}


@end
