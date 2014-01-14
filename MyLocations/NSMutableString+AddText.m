//
//  NSMutableString+AddText.m
//  MyLocations
//
//  Created by John Hopkins on 14/01/2014.
//  Copyright (c) 2014 cocoacoda. All rights reserved.
//

#import "NSMutableString+AddText.h"

@implementation NSMutableString (AddText)

- (void)addText:(NSString *)text withSeparator:(NSString *)separator
{
    if (text != nil) {
        if ([self length] > 0) {
            [self appendString:separator];
        }
        [self appendString:text];
    }
}
@end
