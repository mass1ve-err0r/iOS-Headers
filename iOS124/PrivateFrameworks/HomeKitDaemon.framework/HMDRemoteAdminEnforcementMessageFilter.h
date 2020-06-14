//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMessageFilter.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAdminEnforcementMessageFilter, HMDHome, NSString;

@interface HMDRemoteAdminEnforcementMessageFilter : HMDMessageFilter <HMFLogging>
{
    HMDAdminEnforcementMessageFilter *_adminEnforcementFilter;
    HMDHome *_home;
}

+ (_Bool)shouldNotCheckMessage:(id)arg1;
+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDAdminEnforcementMessageFilter *adminEnforcementFilter; // @synthesize adminEnforcementFilter=_adminEnforcementFilter;
- (void).cxx_destruct;
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;
- (_Bool)_isTargetingHome:(id)arg1;
- (id)initWithName:(id)arg1 home:(id)arg2;
- (id)logIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

