//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBApplicationRestrictionObserver-Protocol.h"

@class NSMutableArray, NSString, SBAppSwitcherDefaults, SBApplicationController, SBIconController;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver>
{
    NSMutableArray *_recents;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_isApplicationSupported:(id)arg1;
- (void)_installedApplicationsDidChange:(id)arg1;
- (void)_iconVisibilityDidChange:(id)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)_filterHiddenAppsFromRecents;
- (id)_changeDescriptionForFilteringHiddenAppsFromAppLayouts:(id)arg1;
- (_Bool)_isDisplayItemRestrictedHiddenOrUnsupported:(id)arg1;
- (id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)arg1;
- (id)_recentDisplayItemsFromLegacyPrefs;
- (id)_recentsFromPrefs;
- (void)_saveRecents;
- (id)_legacyAppLayoutsForDisplayItems:(id)arg1 layoutRolesMapping:(id)arg2;
- (id)_legacyAppLayoutForItem:(id)arg1 layoutRole:(long long)arg2;
- (void)remove:(id)arg1;
- (void)addToFront:(id)arg1;
- (id)_changeDescriptionForFilteringAppLayouts:(id)arg1 withDisplayItemTest:(CDUnknownBlockType)arg2;
- (void)_setRecents:(id)arg1 withChangeDescription:(id)arg2;
- (id)recents;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

