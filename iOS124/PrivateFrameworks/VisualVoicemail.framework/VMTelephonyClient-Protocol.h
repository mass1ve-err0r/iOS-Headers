//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol VMTelephonySubscription;

@protocol VMTelephonyClient <NSObject>
@property(readonly, copy, nonatomic) NSArray *subscriptions;
- (NSString *)isoCountryCodeForSubscription:(id <VMTelephonySubscription>)arg1;
- (NSString *)abbreviatedLabelForSubscription:(id <VMTelephonySubscription>)arg1;
@end

