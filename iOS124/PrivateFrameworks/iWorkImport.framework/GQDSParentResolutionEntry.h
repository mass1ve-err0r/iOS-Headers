//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDSParentResolutionEntry : NSObject
{
    char *mParentIdentifier;
    GQDSStyle *mStyle;
}

- (const char *)parentIdentifier;
- (id)style;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;

@end

