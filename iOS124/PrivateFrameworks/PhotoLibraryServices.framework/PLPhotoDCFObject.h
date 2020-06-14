//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoDCFObject : NSObject
{
    NSString *_name;
    int _number;
}

+ (id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int *)arg4 numberRange:(struct _NSRange)arg5 suffix:(id)arg6;
- (void)setWriteIsPending:(_Bool)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (int)number;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 number:(int)arg2;

@end

