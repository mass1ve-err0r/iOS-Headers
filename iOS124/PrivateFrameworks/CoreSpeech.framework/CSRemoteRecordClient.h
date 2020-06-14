//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteRecordClientDelegate, OS_dispatch_queue;

@interface CSRemoteRecordClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteRecordClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CSRemoteRecordClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasPendingTwoShotBeep;
- (id)voiceTriggerEventInfo;
- (_Bool)isRecording;
- (_Bool)didPlayEndpointBeep;
- (_Bool)stopRecording:(id *)arg1;
- (_Bool)startRecordingWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)isConnected;
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

