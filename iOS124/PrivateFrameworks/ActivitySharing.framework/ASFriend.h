//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCompetition, ASContact, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString, NSTimeZone, NSUUID, _HKFitnessFriendActivitySnapshot;

@interface ASFriend : NSObject <NSCopying>
{
    NSNumber *_currentCacheIndex;
    ASContact *_contact;
    NSArray *_competitions;
    NSDictionary *_snapshots;
    NSDictionary *_friendAchievements;
    NSDictionary *_friendWorkouts;
}

+ (id)friendWithCodableFriend:(id)arg1;
@property(retain, nonatomic) NSDictionary *friendWorkouts; // @synthesize friendWorkouts=_friendWorkouts;
@property(retain, nonatomic) NSDictionary *friendAchievements; // @synthesize friendAchievements=_friendAchievements;
@property(retain, nonatomic) NSDictionary *snapshots; // @synthesize snapshots=_snapshots;
@property(retain, nonatomic) NSArray *competitions; // @synthesize competitions=_competitions;
@property(retain, nonatomic) ASContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSDateComponents *currentDateComponents;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) _Bool supportsCompetitions;
- (struct _HKFitnessFriendActivitySnapshot *)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;
- (struct _HKFitnessFriendActivitySnapshot *)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property(readonly, nonatomic) NSNumber *currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property(readonly, nonatomic) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property(readonly, nonatomic) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property(readonly, nonatomic) unsigned long long numberOfCompetitionWinsByMe;
@property(readonly, nonatomic) unsigned long long numberOfCompetitionWinsAgainstMe;
@property(readonly, nonatomic) _Bool hasCompetitionHistory;
@property(readonly, nonatomic) _Bool isEligibleToReceiveCompetitionRequest;
@property(readonly, nonatomic) _Bool hasCompletedFirstDayOfCurrentCompetition;
@property(readonly, nonatomic) _Bool hasCompletedCompetition;
@property(readonly, nonatomic) ASCompetition *competitionPendingAcceptance;
@property(readonly, nonatomic) ASCompetition *currentCompetition;
@property(readonly, nonatomic) ASCompetition *currentOrMostRecentCompetition;
@property(readonly, nonatomic) ASCompetition *mostRecentlyCompletedCompetition;
@property(readonly, nonatomic) NSArray *completedCompetitions;
@property(readonly, nonatomic) _Bool isCompetitionActive;
@property(readonly, nonatomic) _Bool ignoredCompetitionRequestFromMe;
@property(readonly, nonatomic) _Bool hasPendingCompetitionRequestFromMe;
@property(readonly, nonatomic) _Bool hasCompetitionRequestFromMe;
@property(readonly, nonatomic) _Bool isAwaitingCompetitionResponseFromMe;
@property(readonly, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property(readonly, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property(readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
- (_Bool)isHidingActivityDataFromMeForDate:(id)arg1;
@property(readonly, nonatomic) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property(readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property(readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property(readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property(readonly, nonatomic) _Bool inviteRequestToMeWasAccepted;
@property(readonly, nonatomic) _Bool hasInviteRequestFromMe;
@property(readonly, nonatomic) _Bool sentInviteRequestToMe;
@property(readonly, nonatomic) _Bool isAwaitingInviteResponseFromMe;
@property(readonly, nonatomic) _Bool isMuted;
- (_Bool)isActivityDataVisibleToMeForDate:(id)arg1;
@property(readonly, nonatomic) _Bool isFriendshipCurrentlyActive;
@property(readonly, nonatomic) _Bool isCurrentlyHidingActivityDataFromMe;
@property(readonly, nonatomic) _Bool isMyActivityDataCurrentlyHidden;
@property(readonly, nonatomic) _Bool canSeeMyActivityData;
@property(readonly, nonatomic) _Bool isActivityDataCurrentlyVisibleToMe;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isMe) _Bool me;
@property(readonly, nonatomic) NSUUID *UUID;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 competitions:(id)arg5;
- (id)codableFriendIncludingCloudKitFields:(_Bool)arg1;
- (id)as_competitionLearnMoreReceivedNotificationMessageWithWheelchairUse:(long long)arg1;
- (id)as_competitionLearnMoreSendConfirmationMessageWithWheelchairUse:(long long)arg1;
- (id)as_competitionLearnMoreFullDescription;
- (id)as_competitionLearnMoreDetailMessage;
- (id)as_competitionLearnMoreIntroduction;
- (id)as_competitionLearnMoreDetailAction;
- (id)as_competitionLearnMorePopupAction;
- (id)as_competitionLearnMoreTitle;
- (id)_competitionStartMessage:(id)arg1 replacingNameAndDatePlaceholdersForCompetitionStartDate:(id)arg2;
- (id)as_competitionAcceptConfirmationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptConfirmationTitle;
- (id)as_competitionAcceptedNotificationMessageForCompetition:(id)arg1;
- (id)as_competitionAcceptedNotificationTitle;
- (id)as_competitionAcceptErrorMessage;
- (id)as_competitionReceivedHidingAcceptAction;
- (id)as_competitionReceivedNotificationAcceptAction;
- (id)as_competitionReceivedHidingWarningMessage;
- (id)as_competitionReceivedNotificationMessage;
- (id)as_competitionReceivedNotificationTitle;
- (id)as_competitionSendErrorMessage;
- (id)as_competitionSendConfirmationSendAction;
- (id)as_competitionSendConfirmationMessage;
- (id)as_competitionSendConfirmationTitle;
- (id)as_opponentCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_myCompetitionScoreStringWithContext:(id)arg1 color:(id)arg2;
- (id)as_competitionStageString;
- (id)as_competitionRequestDurationRemainingString;
- (id)as_competitionStatusBreadcrumbString;
- (id)as_invitedDurationString;
- (id)as_simpleHiddenFromString;
- (id)as_simpleSharingDurationString;
- (id)as_detailedSharingDurationString;
- (id)as_friendListNameStringWithDotPrefix:(id)arg1 keyColor:(id)arg2;

@end

