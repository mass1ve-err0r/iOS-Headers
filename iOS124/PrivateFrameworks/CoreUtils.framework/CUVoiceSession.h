//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/VSSpeechSynthesizerDelegate-Protocol.h>

@class CUVoiceRequest, NSString, VSSpeechSynthesizer;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate>
{
    CUVoiceRequest *_currentRequest;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _invalidateFlags;
    struct NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    struct LogCategory *_ucat;
    struct NSMutableArray *_voiceRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_processQueuedRequests;
- (void)stopSpeaking;
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

