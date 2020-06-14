//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject
{
    id _instanceObject;
    CDUnknownBlockType _setupBlock;
    CDUnknownBlockType _cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_receivedMemoryWarning:(id)arg1;
- (id)instance;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (void)dealloc;
- (id)initWithSetupBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;

@end

