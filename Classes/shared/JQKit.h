//
//  JQKit.h
//  JQKit
//
//  Created by Fred Leitz on 11/4/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#ifndef JQKit_JQKit_h
#define JQKit_JQKit_h

void JQParse(const char* jq_program, void (^result)(const char * output, int length));

#ifdef __objc__

#import "NSData+JQ.h"
#import "NSString+JQ.h"

#endif


#endif
