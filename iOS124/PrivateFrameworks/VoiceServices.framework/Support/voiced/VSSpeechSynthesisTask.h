//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VSSpeechSpeakTask.h"

#import "VSSpeechEagerProtocol-Protocol.h"

@class NSString;

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask <VSSpeechEagerProtocol>
{
    _Bool _readyForEagerTask;
    VSSpeechSpeakTask *_speakTask;
}

@property(nonatomic) _Bool readyForEagerTask; // @synthesize readyForEagerTask=_readyForEagerTask;
@property(retain, nonatomic) VSSpeechSpeakTask *speakTask; // @synthesize speakTask=_speakTask;
- (void).cxx_destruct;
- (void)reportFinish;
- (void)reportSpeechStart;
- (void)reportInstrumentMetrics;
- (void)reportTimingInfo;
- (void)synthesize;
- (void)main;
- (_Bool)isSpeaking;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
