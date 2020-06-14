//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_completionHandlers;
    APSConnection *_pushConnection;
}

- (void).cxx_destruct;
- (void)_invokeCompletionWithPushToken:(id)arg1;
- (void)_handleTimeout;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)fetchPushTokenWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

