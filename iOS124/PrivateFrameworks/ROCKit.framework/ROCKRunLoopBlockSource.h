//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface ROCKRunLoopBlockSource : NSObject
{
    struct os_unfair_lock_s _lock;
    _Atomic unsigned long long _blockCount;
    struct __CFRunLoopSource *_source;
    NSMutableSet *_modes;
    CDUnknownBlockType _queuedBlock;
    NSMutableArray *_queuedBlocks;
}

@property(retain, nonatomic) NSMutableArray *queuedBlocks; // @synthesize queuedBlocks=_queuedBlocks;
@property(copy, nonatomic) CDUnknownBlockType queuedBlock; // @synthesize queuedBlock=_queuedBlock;
@property(retain, nonatomic) NSMutableSet *modes; // @synthesize modes=_modes;
@property(nonatomic) struct __CFRunLoopSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)perform;
- (void)enqueueInRunLoopMode:(const struct __CFString *)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

