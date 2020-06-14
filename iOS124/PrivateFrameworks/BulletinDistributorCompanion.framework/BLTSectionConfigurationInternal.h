//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject
{
    NSDictionary *_configurations;
}

- (void).cxx_destruct;
- (id)_loadConfigurations;
- (_Bool)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg1;
- (id)additionalBridgeSectionIDsForSectionID:(id)arg1;
- (id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg1;
- (unsigned long long)legacyMapLocationForSectionID:(id)arg1;
- (_Bool)applyWhitelistToChildSections:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfNotificationTuning:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg1;
- (_Bool)shouldSectionIDAlwaysAlert:(id)arg1;
- (_Bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1;
- (_Bool)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(long long)arg2 category:(id)arg3;
- (_Bool)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(long long)arg2;
- (id)init;

@end

