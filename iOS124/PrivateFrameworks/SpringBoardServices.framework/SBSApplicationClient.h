//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSApplicationClient : SBSServiceFacilityClient
{
}

+ (id)serviceFacilityIdentifier;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCarApplicationInformationForBundleIdentifier:(id)arg1 inVehicle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetIconStateForVehicleId:(id)arg1;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleId:(id)arg3;
- (void)fetchIconStateForVehicleId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

