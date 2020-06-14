//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXIDCRemoteController.h>

#import <AXHearingSupport/AXHARemoteControllerProtocol-Protocol.h>

@class AXDispatchTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AXHARemoteController : AXIDCRemoteController <AXHARemoteControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_receivedPacketQueue;
    _Bool didValidateHIID;
    AXDispatchTimer *_communicationTimer;
}

@property(retain, nonatomic) AXDispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) _Bool didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendDataChunk;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (_Bool)outputStreamReady;
- (void)didCommunicate;
- (void)validatePairedAid;
- (void)closeConnectionWithError:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

