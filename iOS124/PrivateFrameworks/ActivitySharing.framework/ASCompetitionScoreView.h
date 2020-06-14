//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ASCompetitionParticipantScoreView, ASCompetitionScoreViewConfiguration, NSNumber, UIImageView, UILabel;

@interface ASCompetitionScoreView : UIView
{
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    NSNumber *_previousLayoutWidth;
    _Bool _isRTLLayout;
}

+ (double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2;
- (void).cxx_destruct;
- (void)setFriend:(id)arg1 competition:(id)arg2;
@property(readonly, nonatomic) double lastBaselineY;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

