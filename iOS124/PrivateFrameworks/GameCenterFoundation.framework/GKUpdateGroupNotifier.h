//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)updateError:(id)arg1;
- (void)setGroup:(id)arg1;
- (id)group;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)init;

@end

