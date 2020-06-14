//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, NSArray, NSDate, NSMutableArray, NSURL;
@protocol CPLEngineTransportSendFeedbackTask, OS_dispatch_queue;

@interface CPLEngineFeedbackManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    _Bool _opened;
    _Bool _closed;
    _Bool _deactivated;
    CPLEngineLibrary *_engineLibrary;
}

@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
- (void).cxx_destruct;
- (void)reportMiscInformation:(id)arg1;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;
- (void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2;
- (void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;
- (void)reportMessages:(id)arg1;
- (void)reportMessage:(id)arg1;
- (void)sendFeedbackToServerIfNecessary;
- (void)_sendFeedbackToServerIfNecessary;
- (void)_reallySendFeedbackToServer;
- (void)_appendMessages:(id)arg1;
- (void)_appendMessage:(id)arg1;
- (void)_load;
- (void)_save;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;

@end

