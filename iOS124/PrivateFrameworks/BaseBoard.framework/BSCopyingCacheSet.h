//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject
{
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) unsigned long long count;
- (id)immutableSet;
- (_Bool)containsObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;

@end

