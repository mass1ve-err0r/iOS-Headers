//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface MFStringAccumulator : NSObject
{
    NSMutableString *_mutable;
    NSString *_immutable;
}

- (id)string;
- (void)appendString:(id)arg1;
- (void)dealloc;

@end

