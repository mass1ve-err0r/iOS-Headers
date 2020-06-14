//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController
{
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}

- (void).cxx_destruct;
- (void)roamingOptionsDidChange;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getEUInternetStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getVoiceRoamingStatus:(id)arg1;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)reloadRoamingStatus;
- (void)newCarrierNotification;
- (id)specifiers;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(_Bool)arg1;
- (id)cdmaRoamingSpecifiers;
- (id)dataRoamingSpecifiers;
- (void)dealloc;
- (id)init;

@end

