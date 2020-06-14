//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface LSApplicationRestrictionsManager : NSObject
{
    NSSet *_removedSystemApplicationIdentifiers;
}

+ (id)activeRestrictionIdentifiers;
+ (id)sharedInstance;
@property(copy, nonatomic) NSSet *removedSystemApplicationIdentifiers; // @synthesize removedSystemApplicationIdentifiers=_removedSystemApplicationIdentifiers;
@property(readonly, getter=isSystemAppDeletionEnabled) _Bool systemAppDeletionEnabled;
- (id)identifierForRemovedAppPrompt:(id)arg1;
@property(readonly, getter=isAdTrackingEnabled) _Bool adTrackingEnabled; // @dynamic adTrackingEnabled;
- (void)beginListeningForChanges;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;
- (_Bool)isApplicationRestricted:(id)arg1 checkFeatureRestrictions:(_Bool)arg2;
- (_Bool)isAppExtensionRestricted:(id)arg1;
- (_Bool)isApplicationRestricted:(id)arg1 checkFlags:(unsigned long long)arg2;
- (_Bool)isApplicationRestricted:(id)arg1;
- (void)effectiveSettingsChanged;
- (_Bool)setApplication:(id)arg1 removed:(_Bool)arg2;
- (_Bool)isRatingAllowed:(id)arg1;
@property(readonly) NSSet *whitelistedBundleIDs;
@property(readonly) NSSet *blacklistedBundleIDs;
@property(readonly, getter=isWhitelistEnabled) _Bool whitelistEnabled;
@property(readonly, getter=isOpenInRestrictionInEffect) _Bool openInRestrictionInEffect;
@property(readonly) NSNumber *maximumRating;
@property(readonly) NSSet *restrictedBundleIDs;
- (_Bool)cleanRemovedSystemApplicationsList;

@end

