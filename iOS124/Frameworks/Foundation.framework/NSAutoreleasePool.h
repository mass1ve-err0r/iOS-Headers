//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSAutoreleasePool : NSObject
{
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)totalAutoreleasedObjects;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)arg1;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterMark:(unsigned long long)arg1;
+ (unsigned long long)poolCountHighWaterMark;
+ (void)enableFreedObjectCheck:(_Bool)arg1;
+ (void)enableRelease:(_Bool)arg1;
+ (_Bool)autoreleasePoolExists;
+ (unsigned long long)topAutoreleasePoolCount;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (void)showPools;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)addObject:(id)arg1;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)retain;
- (void)addObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (oneway void)release;
- (void)drain;
- (id)init;

@end

