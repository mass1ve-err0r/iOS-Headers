//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVTelephonyInterfaceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVTelephonyInterface : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __CTServerConnection *_connection;
}

- (void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned int)arg3;
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;
- (void)handleVocoderNotificationWithInfo:(id)arg1;
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;
@property id <AVTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;
- (_Bool)registerForNotifications;
- (void)dealloc;
- (id)init;

@end

