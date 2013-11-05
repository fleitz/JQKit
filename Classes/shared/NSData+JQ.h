//
//  NSData+JQ.h
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, JV_OPTIONS){
    SLURP = 1,
    RAW_INPUT = 2,
    PROVIDE_NULL = 4,
    
    RAW_OUTPUT = 8,
    COMPACT_OUTPUT = 16,
    ASCII_OUTPUT = 32,
    COLOUR_OUTPUT = 64,
    NO_COLOUR_OUTPUT = 128,
    
    FROM_FILE = 256,
    
    /* debugging only */
    DUMP_DISASM = 2048,
};


@interface NSData (JQ)
- (NSData*) jq:(NSString*)jq withOptions:(JV_OPTIONS)flags;
- (NSData*) jq:(NSString*)jq;
@end
