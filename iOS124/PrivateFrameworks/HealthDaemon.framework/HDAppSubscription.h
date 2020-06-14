//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKObjectType, NSString;

@interface HDAppSubscription : NSObject
{
    NSString *_bundleIdentifier;
    long long _dataCode;
    unsigned long long _updateFrequency;
    unsigned long long _lastAnchor;
    long long _lastAckTime;
    long long _launchTimeHysteresis;
}

@property(readonly, nonatomic) long long launchTimeHysteresis; // @synthesize launchTimeHysteresis=_launchTimeHysteresis;
@property(readonly, nonatomic) long long lastAckTime; // @synthesize lastAckTime=_lastAckTime;
@property(readonly, nonatomic) unsigned long long lastAnchor; // @synthesize lastAnchor=_lastAnchor;
@property(readonly, nonatomic) unsigned long long updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property(readonly, nonatomic) long long dataCode; // @synthesize dataCode=_dataCode;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)setLaunchTimeHysteresis:(long long)arg1;
- (void)setLastAnchor:(unsigned long long)arg1;
- (void)setLastAckTime:(long long)arg1;
- (void)setUpdateFrequency:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) HKObjectType *objectType;
- (id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2;
- (id)init;

@end

