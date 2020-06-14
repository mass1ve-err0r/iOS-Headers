//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFQueueDelegate-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesis-Protocol.h>
#import <AssistantUI/AFUISpeechSynthesisElementDelegate-Protocol.h>
#import <AssistantUI/VSSpeechSynthesizerDelegate-Protocol.h>

@class AFQueue, AFSiriClientStateManager, AFVoiceInfo, NSMutableArray, NSMutableDictionary, NSString, VSSpeechSynthesizer;
@protocol AFUISpeechSynthesisDelegate, AFUISpeechSynthesisLocalDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis>
{
    VSSpeechSynthesizer *_synthesizer;
    AFSiriClientStateManager *_siriClientStateManager;
    _Bool _sessionIDIsValid;
    unsigned int _sessionID;
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingElementsQueue;
    NSObject<OS_dispatch_queue> *_pendingElementsQueue;
    NSObject<OS_dispatch_group> *_pendingElementsGroup;
    id <AFUISpeechSynthesisDelegate> _delegate;
    id <AFUISpeechSynthesisLocalDelegate> _localDelegate;
    AFQueue *_elementQueue;
    NSMutableArray *_activeElements;
    NSMutableDictionary *_delayedElements;
}

@property(readonly, nonatomic, getter=_delayedElements) NSMutableDictionary *delayedElements; // @synthesize delayedElements=_delayedElements;
@property(readonly, nonatomic, getter=_activeElements) NSMutableArray *activeElements; // @synthesize activeElements=_activeElements;
@property(readonly, nonatomic, getter=_elementQueue) AFQueue *elementQueue; // @synthesize elementQueue=_elementQueue;
@property(retain, nonatomic) id <AFUISpeechSynthesisDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISpeechSynthesisLocalDelegate> localDelegate; // @synthesize localDelegate=_localDelegate;
- (void).cxx_destruct;
- (void)_setSiriClientStateManager:(id)arg1;
- (void)_setSynthesizer:(id)arg1;
- (void)_processProvisionalElements;
- (id)_filterVoices:(id)arg1 gender:(id)arg2;
- (long long)_genderForString:(id)arg1;
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_activeElementWithSpeechRequest:(id)arg1;
- (id)_activeElementWithPresynthesizedAudioRequest:(id)arg1;
- (void)_processElementQueue;
- (void)_handleText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleAudioData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processDelayedItem:(id)arg1;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(_Bool)arg6 provisionally:(_Bool)arg7 eligibleAfterDuration:(double)arg8 delayed:(_Bool)arg9 preparationIdentifier:(id)arg10 shouldCache:(_Bool)arg11 synthesizesWhileRecording:(_Bool)arg12 completion:(CDUnknownBlockType)arg13 animationIdentifier:(id)arg14 analyticsContext:(id)arg15 speakableContextInfo:(id)arg16;
- (void)enqueuePhaticWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 provisionally:(_Bool)arg3 eligibleAfterDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 language:(id)arg3 gender:(id)arg4 isPhonetic:(_Bool)arg5 provisionally:(_Bool)arg6 eligibleAfterDuration:(double)arg7 delayed:(_Bool)arg8 preparationIdentifier:(id)arg9 completion:(CDUnknownBlockType)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13;
- (_Bool)_startSpeechPreSynthesisOfText:(id)arg1 speakableContext:(id)arg2 error:(id *)arg3;
- (void)presynthesizeDialogStrings:(id)arg1 speakableContext:(id)arg2;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (void)_cancelByCancellingActiveElementsOnly:(_Bool)arg1;
- (void)skipCurrentSynthesis;
- (void)cancel;
- (_Bool)isSynthesisQueueEmpty;
- (_Bool)isSpeaking;
- (void)prewarmIfNeeded;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (id)_siriClientStateManager;
- (id)_synthesizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

