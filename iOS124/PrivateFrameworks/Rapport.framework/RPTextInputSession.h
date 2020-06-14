//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RTIInputSystemPayloadDelegate-Protocol.h>

@class NSString, RTIInputSystemSourceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _started;
    id <RPMessageable> _messenger;
    RTIInputSystemSourceSession *_rtiSession;
    CDUnknownBlockType _rtiUpdatedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType rtiUpdatedHandler; // @synthesize rtiUpdatedHandler=_rtiUpdatedHandler;
@property(readonly, nonatomic) RTIInputSystemSourceSession *rtiSession; // @synthesize rtiSession=_rtiSession;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void).cxx_destruct;
- (void)handleTextActionPayload:(id)arg1;
- (void)_handleTextInputChange:(id)arg1 started:(_Bool)arg2;
- (void)_handleTextInputStopped:(id)arg1;
- (void)_handleTextInputStarted:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

