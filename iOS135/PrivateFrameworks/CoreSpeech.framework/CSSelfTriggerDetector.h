/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSelfTriggerDetector : NSObject <CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSSiriClientBehaviorMonitorDelegate> {
    CSAudioStream * _audioStream;
    CSAsset * _currentAsset;
    CSPolicy * _enablePolicy;
    bool  _isListenPollingStarting;
    bool  _isSiriClientListening;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    NSHashTable * _observers;
    unsigned long long  _outputAudioChannel;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _selfTriggerEnabled;
    CSSpeechManager * _speechManager;
}

@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSPolicy *enablePolicy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListenPollingStarting;
@property (nonatomic) bool isSiriClientListening;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool selfTriggerEnabled;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_handleEnablePolicyEvent:(bool)arg1;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)_startListenWithCompletion:(id /* block */)arg1;
- (void)_stopListening;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (id)currentAsset;
- (id)enablePolicy;
- (id)initWithTargetQueue:(id)arg1;
- (bool)isListenPollingStarting;
- (bool)isSiriClientListening;
- (id)keywordAnalyzer;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordThreshold;
- (id)observers;
- (unsigned long long)outputAudioChannel;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)reset;
- (bool)selfTriggerEnabled;
- (void)setAsset:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setEnablePolicy:(id)arg1;
- (void)setIsListenPollingStarting:(bool)arg1;
- (void)setIsSiriClientListening:(bool)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutputAudioChannel:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelfTriggerEnabled:(bool)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (id)speechManager;
- (void)start;
- (void)unregisterObserver:(id)arg1;

@end