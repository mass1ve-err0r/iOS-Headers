/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFShazamMediaAction : WFAction <SHRecognitionSessionDelegate, WFApplicationStateObserver> {
    AVAudioEngine * _audioEngine;
    bool  _waitingForInterruptionEnd;
}

@property (nonatomic, retain) AVAudioEngine *audioEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingForInterruptionEnd;

- (void).cxx_destruct;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (id)audioEngine;
- (void)audioInterruption:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)finishRunningWithMatch:(id)arg1 error:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFindMatch:(id)arg2;
- (void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;
- (void)setAudioEngine:(id)arg1;
- (void)setWaitingForInterruptionEnd:(bool)arg1;
- (void)startShazamWithRetryCount:(int)arg1;
- (bool)waitingForInterruptionEnd;

@end