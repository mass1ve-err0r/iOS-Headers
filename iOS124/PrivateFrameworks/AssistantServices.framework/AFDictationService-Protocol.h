//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFDictationOptions, AFSpeechCorrectionInfo, AFSpeechRequestOptions, NSData, NSDictionary, NSError, NSString, NSURL;

@protocol AFDictationService <NSObject>
- (oneway void)requestOfflineDictationSupportForLanguage:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)getInstalledOfflineLanguagesWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)_sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(NSString *)arg2;
- (oneway void)_startDictationWithURL:(NSURL *)arg1 isNarrowBand:(_Bool)arg2 language:(NSString *)arg3 options:(AFDictationOptions *)arg4;
- (oneway void)recordAWDSuccessMetrics;
- (oneway void)recordFailureMetricsForError:(NSError *)arg1;
- (oneway void)endSession;
- (oneway void)preheatWithRecordDeviceIdentifier:(NSString *)arg1;
- (oneway void)preheat;
- (oneway void)sendSpeechCorrectionInfo:(AFSpeechCorrectionInfo *)arg1 forCorrectionContext:(NSDictionary *)arg2;
- (oneway void)updateSpeechOptions:(AFSpeechRequestOptions *)arg1;
- (oneway void)addRecordedSpeechSampleData:(NSData *)arg1;
- (oneway void)startRecordedAudioDictationWithOptions:(AFDictationOptions *)arg1 language:(NSString *)arg2 narrowband:(_Bool)arg3;
- (oneway void)stopSpeechWithOptions:(AFSpeechRequestOptions *)arg1;
- (oneway void)cancelSpeech;
- (oneway void)startDictationWithLanguageCode:(NSString *)arg1 options:(AFDictationOptions *)arg2 speechOptions:(AFSpeechRequestOptions *)arg3;
- (oneway void)startRecordingForPendingDictationWithLanguageCode:(NSString *)arg1 options:(AFDictationOptions *)arg2 speechOptions:(AFSpeechRequestOptions *)arg3 reply:(void (^)(NSXPCListenerEndpoint *))arg4;
- (oneway void)startRequestActivityWithCompletion:(void (^)(void))arg1;
@end

