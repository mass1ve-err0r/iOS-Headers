//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFULogCatThreadSafeMutableSet : NSObject
{
    NSMutableSet *mObjects;
}

- (id)description;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)immutableSet;
- (id)allObjects;
- (unsigned long long)count;
- (_Bool)containsObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

