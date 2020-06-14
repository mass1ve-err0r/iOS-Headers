//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface ASCompetitionScoreViewConfiguration : NSObject
{
    _Bool _showsScoreTypeHeader;
    _Bool _showsNames;
    _Bool _uppercaseNames;
    _Bool _showsPrimaryScoreUnits;
    _Bool _zeroPadPrimaryScore;
    _Bool _showsAchievementThumbnail;
    _Bool _showsTodaySecondaryScore;
    _Bool _wantsScaledBaselineAlignment;
    UIFont *_headerFont;
    double _headerBaselineOffset;
    UIFont *_nameFont;
    double _nameBaselineOffset;
    long long _primaryScoreSource;
    UIFont *_primaryScoreFont;
    UIFont *_primaryScoreUnitFont;
    double _primaryScoreBaselineOffset;
    double _achievementThumbnailTopMargin;
    long long _achievementThumbnailAlignment;
    long long _achievementThumbnailQuality;
    UIFont *_secondaryScoreFont;
    double _secondaryScoreBaselineOffset;
    long long _alignment;
    long long _division;
    double _sideMargin;
    double _bottomMargin;
    double _minimumMiddleMargin;
    double _opponentScoreViewWidth;
    struct CGSize _achievementThumbnailSize;
}

+ (id)companionTotalWinsStandaloneFriendDetailConfiguration;
+ (id)companionTotalWinsFriendDetailConfiguration;
+ (id)companionFriendListConfiguration;
+ (id)companionTotalScoreFriendDetailConfiguration;
+ (id)gizmoTotalWinsStandaloneConfiguration;
+ (id)gizmoTotalWinsConfiguration;
+ (id)gizmoTodayScoreConfiguration;
+ (id)gizmoTotalScoreFriendDetailConfiguration;
+ (id)gizmoTotalScoreConfiguration;
@property(nonatomic) _Bool wantsScaledBaselineAlignment; // @synthesize wantsScaledBaselineAlignment=_wantsScaledBaselineAlignment;
@property(nonatomic) double opponentScoreViewWidth; // @synthesize opponentScoreViewWidth=_opponentScoreViewWidth;
@property(nonatomic) double minimumMiddleMargin; // @synthesize minimumMiddleMargin=_minimumMiddleMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(nonatomic) long long division; // @synthesize division=_division;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool showsTodaySecondaryScore; // @synthesize showsTodaySecondaryScore=_showsTodaySecondaryScore;
@property(nonatomic) double secondaryScoreBaselineOffset; // @synthesize secondaryScoreBaselineOffset=_secondaryScoreBaselineOffset;
@property(retain, nonatomic) UIFont *secondaryScoreFont; // @synthesize secondaryScoreFont=_secondaryScoreFont;
@property(nonatomic) long long achievementThumbnailQuality; // @synthesize achievementThumbnailQuality=_achievementThumbnailQuality;
@property(nonatomic) long long achievementThumbnailAlignment; // @synthesize achievementThumbnailAlignment=_achievementThumbnailAlignment;
@property(nonatomic) _Bool showsAchievementThumbnail; // @synthesize showsAchievementThumbnail=_showsAchievementThumbnail;
@property(nonatomic) struct CGSize achievementThumbnailSize; // @synthesize achievementThumbnailSize=_achievementThumbnailSize;
@property(nonatomic) double achievementThumbnailTopMargin; // @synthesize achievementThumbnailTopMargin=_achievementThumbnailTopMargin;
@property(nonatomic) _Bool zeroPadPrimaryScore; // @synthesize zeroPadPrimaryScore=_zeroPadPrimaryScore;
@property(nonatomic) _Bool showsPrimaryScoreUnits; // @synthesize showsPrimaryScoreUnits=_showsPrimaryScoreUnits;
@property(nonatomic) double primaryScoreBaselineOffset; // @synthesize primaryScoreBaselineOffset=_primaryScoreBaselineOffset;
@property(retain, nonatomic) UIFont *primaryScoreUnitFont; // @synthesize primaryScoreUnitFont=_primaryScoreUnitFont;
@property(retain, nonatomic) UIFont *primaryScoreFont; // @synthesize primaryScoreFont=_primaryScoreFont;
@property(nonatomic) long long primaryScoreSource; // @synthesize primaryScoreSource=_primaryScoreSource;
@property(nonatomic) _Bool uppercaseNames; // @synthesize uppercaseNames=_uppercaseNames;
@property(nonatomic) _Bool showsNames; // @synthesize showsNames=_showsNames;
@property(nonatomic) double nameBaselineOffset; // @synthesize nameBaselineOffset=_nameBaselineOffset;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(nonatomic) _Bool showsScoreTypeHeader; // @synthesize showsScoreTypeHeader=_showsScoreTypeHeader;
@property(nonatomic) double headerBaselineOffset; // @synthesize headerBaselineOffset=_headerBaselineOffset;
@property(retain, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (void).cxx_destruct;

@end

