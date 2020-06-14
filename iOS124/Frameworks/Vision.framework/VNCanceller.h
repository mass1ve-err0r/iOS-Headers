//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VNCanceller : NSObject
{
    CDUnknownBlockType _signallingBlock;
    struct os_unfair_lock_s _lock;
    _Bool _signalled;
}

- (void).cxx_destruct;
- (_Bool)wasSignalled;
- (void)signalCancellation;
- (_Bool)tryToPerformBlock:(CDUnknownBlockType)arg1 usingSignallingBlock:(CDUnknownBlockType)arg2;
- (void)resetAndPerformBlock:(CDUnknownBlockType)arg1 usingSignallingBlock:(CDUnknownBlockType)arg2;
- (void)releaseSignallingBlock;
- (void)resetWithSignallingBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

