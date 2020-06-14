//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface CRAlert : NSObject
{
    struct __CFUserNotification *_alert;
    _Bool _alertAutoDismissed;
    NSTimer *_alertDismissTimer;
}

@property(nonatomic) _Bool alertAutoDismissed; // @synthesize alertAutoDismissed=_alertAutoDismissed;
@property(retain, nonatomic) NSTimer *alertDismissTimer; // @synthesize alertDismissTimer=_alertDismissTimer;
- (void).cxx_destruct;
- (_Bool)dismissAlert;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_recordAnalyticsForResponse:(unsigned long long)arg1;
- (id)_alertContents;
- (_Bool)_isDeviceUnlocked;
- (id)iconImagePath;
- (id)alertDeclinedAnalyticsKey;
- (id)alertAcceptedAnalyticsKey;
- (id)alertDeclineButtonTitle;
- (id)alertAcceptButtonTitle;
- (id)alertMessage;
- (id)alertTitle;
- (id)lockscreenMessage;
- (id)lockscreenTitle;
- (_Bool)requiresUnlockedDevice;
- (double)alertDismissal;
- (_Bool)allowInCar;
- (void)_setAlert:(struct __CFUserNotification *)arg1;

@end

