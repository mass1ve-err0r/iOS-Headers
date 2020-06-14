//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(_Bool)arg2;

@end

