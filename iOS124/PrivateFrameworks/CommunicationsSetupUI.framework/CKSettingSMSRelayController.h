//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <CommunicationsSetupUI/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate>
{
    IDSService *_relayService;
}

+ (_Bool)shouldShowSMSRelaySettings;
+ (unsigned long long)numberOfActiveDevices;
+ (_Bool)deviceIsAuthorized:(id)arg1;
+ (id)authorizedSMSRelayDevices;
@property(retain, nonatomic) IDSService *relayService; // @synthesize relayService=_relayService;
- (void).cxx_destruct;
- (void)setDeviceActive:(id)arg1 specifier:(id)arg2;
- (id)getDeviceActive:(id)arg1;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

