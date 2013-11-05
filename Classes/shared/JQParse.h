//
//  JQParse.h
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#ifndef JQKit_JQParse_h
#define JQKit_JQParse_h

#import <Foundation/Foundation.h>
#include "jv.h"

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

FOUNDATION_EXPORT void JQParse(const char* jq_program, const char* data, NSUInteger data_length, JV_OPTIONS flags, void (^callback)(const char * output,const NSUInteger length));



#endif
