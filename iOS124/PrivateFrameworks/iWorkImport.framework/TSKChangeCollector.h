//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKChangeCollector : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)threadCollector;
+ (id)_singletonAlloc;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (id)peekCollectedChanges;
- (void)endCollectingChangesAndDiscardChanges;
- (id)endCollectingChanges;
- (void)beginCollectingChanges;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

