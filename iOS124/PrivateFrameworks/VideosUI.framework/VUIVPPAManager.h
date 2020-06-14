//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIAccessViewController;

__attribute__((visibility("hidden")))
@interface VUIVPPAManager : NSObject
{
    VUIAccessViewController *_accessViewController;
}

+ (id)_getDeniedChannels;
+ (id)_getConsentedChannels;
+ (id)addUniqueVPPAChannels:(id)arg1 channels:(id)arg2;
+ (_Bool)channelAlreadyExists:(id)arg1 channelID:(id)arg2;
+ (_Bool)_isReminderDue:(id)arg1 reminderInterval:(double)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) VUIAccessViewController *accessViewController; // @synthesize accessViewController=_accessViewController;
- (void).cxx_destruct;
- (id)_rootViewController;
- (id)_getVPPABulkChannels:(long long)arg1;
- (void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isVPPAPromptDueForConfig:(id)arg1;
- (_Bool)_isChannelVPPAPromptEligible:(id)arg1;
- (void)startVPPAConsentFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

