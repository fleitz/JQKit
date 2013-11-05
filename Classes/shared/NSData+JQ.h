//
//  NSData+JQ.h
//  libjq
//
//  Created by Fred Leitz on 10/9/2013.
//  Copyright (c) 2013 Fred Leitz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JQParse.h"


@interface NSData (JQ)
- (NSData*) jq:(NSString*)jq withOptions:(JV_OPTIONS)flags;
- (NSData*) jq:(NSString*)jq;
@end
