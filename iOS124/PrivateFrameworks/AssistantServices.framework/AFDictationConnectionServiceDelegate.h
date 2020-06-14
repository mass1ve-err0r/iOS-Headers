//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictationServiceDelegate-Protocol.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate>
{
    AFDictationConnection *_connection;
}

- (void).cxx_destruct;
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidRecognizePhrases:(id)arg1 usingSpeechModel:(id)arg2 correctionContext:(id)arg3;
- (oneway void)speechDidRecognizePackage:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidBegin;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (id)initWithDictationConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

