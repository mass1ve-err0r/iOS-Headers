//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBAccessoryIcon, BBAction, BBAttachmentMetadata, BBColor, BBContent, BBSectionIcon, BBSound, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimeZone;

@interface BBBulletin : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasCriticalIcon;
    _Bool _hasEventDate;
    _Bool _dateIsAllDay;
    _Bool _clearable;
    _Bool _turnsOnDisplay;
    _Bool _wantsFullscreenPresentation;
    _Bool _ignoresQuietMode;
    _Bool _ignoresDowntime;
    _Bool _expiresOnPublisherDeath;
    _Bool _usesExternalSync;
    _Bool _loading;
    _Bool _preventAutomaticRemovalFromLockScreen;
    NSString *_sectionID;
    NSSet *_subsectionIDs;
    NSString *_publisherRecordID;
    NSString *_publisherBulletinID;
    NSString *_dismissalID;
    NSString *_categoryID;
    NSString *_threadID;
    NSArray *_peopleIDs;
    long long _addressBookRecordID;
    long long _sectionSubtype;
    NSArray *_intentIDs;
    unsigned long long _counter;
    BBContent *_content;
    BBContent *_modalAlertContent;
    BBContent *_starkBannerContent;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    BBSectionIcon *_icon;
    NSDate *_date;
    NSDate *_endDate;
    NSDate *_recencyDate;
    long long _dateFormatStyle;
    NSTimeZone *_timeZone;
    BBAccessoryIcon *_accessoryIconMask;
    BBSound *_sound;
    BBAttachmentMetadata *_primaryAttachment;
    NSArray *_additionalAttachments;
    NSString *_unlockActionLabelOverride;
    NSMutableDictionary *_actions;
    NSMutableDictionary *_supplementaryActionsByLayout;
    NSArray *_buttons;
    NSDictionary *_context;
    NSDate *_expirationDate;
    unsigned long long _expirationEvents;
    NSSet *_alertSuppressionContexts;
    NSString *_bulletinID;
    NSDate *_lastInterruptDate;
    NSDate *_publicationDate;
    NSString *_bulletinVersionID;
    NSString *_parentSectionID;
    NSString *_universalSectionID;
    long long _contentPreviewSetting;
    long long _lockScreenPriority;
    long long _backgroundStyle;
    NSString *_header;
    unsigned long long realertCount_deprecated;
    NSSet *alertSuppressionAppIDs_deprecated;
}

+ (_Bool)supportsSecureCoding;
+ (id)bulletinReferenceDateFromDate:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;
+ (void)vetSortDescriptor:(id)arg1;
+ (id)_observerAssociationSet;
+ (id)_lifeAssertionAssociationSet;
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated; // @synthesize alertSuppressionAppIDs_deprecated;
@property(nonatomic) unsigned long long realertCount_deprecated; // @synthesize realertCount_deprecated;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long lockScreenPriority; // @synthesize lockScreenPriority=_lockScreenPriority;
@property(nonatomic) _Bool preventAutomaticRemovalFromLockScreen; // @synthesize preventAutomaticRemovalFromLockScreen=_preventAutomaticRemovalFromLockScreen;
@property(nonatomic) long long contentPreviewSetting; // @synthesize contentPreviewSetting=_contentPreviewSetting;
@property(copy, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(copy, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool usesExternalSync; // @synthesize usesExternalSync=_usesExternalSync;
@property(copy, nonatomic) NSString *bulletinVersionID; // @synthesize bulletinVersionID=_bulletinVersionID;
@property(retain, nonatomic) NSDate *publicationDate; // @synthesize publicationDate=_publicationDate;
@property(retain, nonatomic) NSDate *lastInterruptDate; // @synthesize lastInterruptDate=_lastInterruptDate;
@property(copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
@property(copy, nonatomic) NSSet *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property(nonatomic) unsigned long long expirationEvents; // @synthesize expirationEvents=_expirationEvents;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) _Bool expiresOnPublisherDeath; // @synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSMutableDictionary *supplementaryActionsByLayout; // @synthesize supplementaryActionsByLayout=_supplementaryActionsByLayout;
@property(retain, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool ignoresDowntime; // @synthesize ignoresDowntime=_ignoresDowntime;
@property(nonatomic) _Bool ignoresQuietMode; // @synthesize ignoresQuietMode=_ignoresQuietMode;
@property(nonatomic) _Bool wantsFullscreenPresentation; // @synthesize wantsFullscreenPresentation=_wantsFullscreenPresentation;
@property(copy, nonatomic) NSString *unlockActionLabelOverride; // @synthesize unlockActionLabelOverride=_unlockActionLabelOverride;
@property(copy, nonatomic) NSArray *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(copy, nonatomic) BBAttachmentMetadata *primaryAttachment; // @synthesize primaryAttachment=_primaryAttachment;
@property(nonatomic) _Bool turnsOnDisplay; // @synthesize turnsOnDisplay=_turnsOnDisplay;
@property(retain, nonatomic) BBSound *sound; // @synthesize sound=_sound;
@property(nonatomic) _Bool clearable; // @synthesize clearable=_clearable;
@property(retain, nonatomic) BBAccessoryIcon *accessoryIconMask; // @synthesize accessoryIconMask=_accessoryIconMask;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool dateIsAllDay; // @synthesize dateIsAllDay=_dateIsAllDay;
@property(nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property(retain, nonatomic) NSDate *recencyDate; // @synthesize recencyDate=_recencyDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool hasEventDate; // @synthesize hasEventDate=_hasEventDate;
@property(nonatomic) _Bool hasCriticalIcon; // @synthesize hasCriticalIcon=_hasCriticalIcon;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(retain, nonatomic) BBContent *starkBannerContent; // @synthesize starkBannerContent=_starkBannerContent;
@property(retain, nonatomic) BBContent *modalAlertContent; // @synthesize modalAlertContent=_modalAlertContent;
@property(retain, nonatomic) BBContent *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long counter; // @synthesize counter=_counter;
@property(copy, nonatomic) NSArray *intentIDs; // @synthesize intentIDs=_intentIDs;
@property(nonatomic) long long sectionSubtype; // @synthesize sectionSubtype=_sectionSubtype;
@property(nonatomic) long long addressBookRecordID; // @synthesize addressBookRecordID=_addressBookRecordID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(copy, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_publisherRecordID;
@property(copy, nonatomic) NSSet *subsectionIDs; // @synthesize subsectionIDs=_subsectionIDs;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)safeDescription;
- (id)description;
- (id)_safeDescription:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool hasPrivateContent; // @dynamic hasPrivateContent;
- (void)setShowsMessagePreview:(_Bool)arg1;
- (_Bool)showsMessagePreview;
@property(readonly, copy, nonatomic) NSString *publisherMatchID;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)actionForResponse:(id)arg1;
- (CDUnknownBlockType)responseSendBlock;
- (id)responseForExpireAction;
- (id)responseForRaiseAction;
- (id)responseForSnoozeAction;
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;
- (id)responseForAcknowledgeAction;
- (id)responseForDefaultAction;
- (id)responseForAction:(id)arg1;
- (id)_responseForAction:(id)arg1;
- (id)_allActions;
- (id)_allSupplementaryActions;
- (id)supplementaryActionsForLayout:(long long)arg1;
- (id)supplementaryActions;
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;
- (id)actionWithIdentifier:(id)arg1;
- (void)setSilenceAction:(id)arg1;
- (id)silenceAction;
@property(copy, nonatomic) BBAction *raiseAction;
@property(copy, nonatomic) BBAction *snoozeAction;
@property(copy, nonatomic) BBAction *expireAction;
@property(copy, nonatomic) BBAction *acknowledgeAction;
@property(copy, nonatomic) BBAction *alternateAction;
- (void)setDismissAction:(id)arg1;
- (id)dismissAction;
@property(copy, nonatomic) BBAction *defaultAction;
- (id)_actionKeyForType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (unsigned long long)numberOfAdditionalAttachments;
- (long long)primaryAttachmentType;
@property(copy, nonatomic) NSString *section;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (void)copyAssociationsForBulletin:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)firstValidObserver;
- (void)addLifeAssertion:(id)arg1;
- (id)lifeAssertions;
@property(readonly, nonatomic) _Bool shouldDismissBulletinWhenClosed;
@property(readonly, nonatomic) unsigned long long privacySettings;
@property(readonly, nonatomic) _Bool revealsAdditionalContentOnPresentation;
@property(readonly, nonatomic) _Bool preemptsPresentedAlert;
@property(readonly, nonatomic) _Bool prioritizeAtTopOfLockScreen;
@property(readonly, nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked;
@property(readonly, nonatomic) _Bool allowsAutomaticRemovalFromLockScreen;
- (id)_sectionSubtypeParameters;
- (id)_sectionParameters;
@property(readonly, nonatomic) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property(readonly, nonatomic) NSString *secondaryContentRemoteViewControllerClassName;
@property(readonly, nonatomic) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property(readonly, nonatomic) NSString *bannerAccessoryRemoteViewControllerClassName;
@property(readonly, nonatomic) BBColor *tintColor;
@property(readonly, nonatomic) long long iPodOutAlertType;
@property(readonly, nonatomic) unsigned long long subtypePriority;
@property(readonly, nonatomic) _Bool playsSoundForModify;
@property(readonly, nonatomic) _Bool showsContactPhoto;
@property(readonly, nonatomic) _Bool showsUnreadIndicatorForNoticesFeed;
@property(readonly, nonatomic) _Bool suppressesTitle;
@property(readonly, nonatomic) _Bool preventLock;
@property(readonly, nonatomic) _Bool canBeSilencedByMenuButtonPress;
@property(readonly, nonatomic) _Bool visuallyIndicatesWhenDateIsInFuture;
@property(readonly, nonatomic) _Bool preservesUnlockActionCase;
@property(readonly, nonatomic) _Bool inertWhenLocked;
@property(readonly, nonatomic) unsigned long long realertCount;
@property(readonly, nonatomic) _Bool suppressesMessageForPrivacy;
@property(readonly, nonatomic) _Bool coalescesWhenLocked;
@property(readonly, nonatomic) _Bool suppressesAlertsWhenAppIsActive;
@property(readonly, nonatomic) NSSet *alertSuppressionAppIDs;
@property(readonly, nonatomic) NSString *alternateActionLabel;
@property(readonly, nonatomic) NSString *fullAlternateActionLabel;
@property(readonly, nonatomic) NSString *unlockActionLabel;
@property(readonly, nonatomic) NSString *fullUnlockActionLabel;
@property(readonly, nonatomic) NSString *missedBannerDescriptionFormat;
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) NSString *subtypeSummaryFormat;
@property(readonly, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property(readonly, nonatomic) _Bool showsDateInFloatingLockScreenAlert;
@property(readonly, nonatomic) _Bool orderSectionUsingRecencyDate;
@property(readonly, nonatomic) _Bool usesVariableLayout;
@property(readonly, nonatomic) unsigned long long messageNumberOfLines;
@property(readonly, nonatomic) _Bool showsSubtitle;
@property(readonly, nonatomic) _Bool sectionDisplaysCriticalBulletins;
@property(readonly, nonatomic) BBSectionIcon *sectionIcon;
@property(readonly, nonatomic) NSString *sectionDisplayName;
- (struct CGSize)composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)syncHash;

@end

