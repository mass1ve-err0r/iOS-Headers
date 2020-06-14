//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQDaemonOffer, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICQDaemonAlert : NSObject
{
    NSLock *_alertLock;
    long long _alertState;
    struct __CFUserNotification *_cfAlert;
    NSObject<OS_dispatch_semaphore> *_alertSema;
    NSObject<OS_dispatch_queue> *_alertQueue;
    _Bool _showOnlyInSpringboard;
    _Bool _handleActionsBeforeCallingCompletionHandler;
    ICQDaemonOffer *_daemonOffer;
}

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (_Bool)shouldShowForDaemonOffer:(id)arg1;
@property(nonatomic) _Bool handleActionsBeforeCallingCompletionHandler; // @synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler;
@property(nonatomic) _Bool showOnlyInSpringboard; // @synthesize showOnlyInSpringboard=_showOnlyInSpringboard;
@property(readonly, nonatomic) ICQDaemonOffer *daemonOffer; // @synthesize daemonOffer=_daemonOffer;
- (void).cxx_destruct;
- (void)dismissAlert;
- (_Bool)showAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLink:(id)arg1;
- (void)dealloc;
- (id)initWithDaemonOffer:(id)arg1;
- (id)init;

@end

