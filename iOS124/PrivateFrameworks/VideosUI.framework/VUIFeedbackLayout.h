//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, TVRatingBadgeLayout, UIColor, VUIFeedbackTableLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFeedbackLayout : TVViewLayout
{
    VUITextLayout *_headerTitleLayout;
    VUITextLayout *_headerSubtitleLayout;
    VUITextLayout *_sourceTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_headerBadgeLayout;
    TVImageLayout *_sourceBadgeLayout;
    VUIFeedbackTableLayout *_reviewTableLayout;
    TVRatingBadgeLayout *_ratingBadgeLayout;
    UIColor *_darkHighlightColor;
    long long _layoutType;
    struct TVCornerRadii _borderRadii;
    struct UIEdgeInsets _headerImagePadding;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) struct UIEdgeInsets headerImagePadding; // @synthesize headerImagePadding=_headerImagePadding;
@property(retain, nonatomic) UIColor *darkHighlightColor; // @synthesize darkHighlightColor=_darkHighlightColor;
@property(nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(readonly, nonatomic) TVRatingBadgeLayout *ratingBadgeLayout; // @synthesize ratingBadgeLayout=_ratingBadgeLayout;
@property(readonly, nonatomic) VUIFeedbackTableLayout *reviewTableLayout; // @synthesize reviewTableLayout=_reviewTableLayout;
@property(readonly, nonatomic) TVImageLayout *sourceBadgeLayout; // @synthesize sourceBadgeLayout=_sourceBadgeLayout;
@property(readonly, nonatomic) TVImageLayout *headerBadgeLayout; // @synthesize headerBadgeLayout=_headerBadgeLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(readonly, nonatomic) VUITextLayout *sourceTextLayout; // @synthesize sourceTextLayout=_sourceTextLayout;
@property(readonly, nonatomic) VUITextLayout *headerSubtitleLayout; // @synthesize headerSubtitleLayout=_headerSubtitleLayout;
@property(readonly, nonatomic) VUITextLayout *headerTitleLayout; // @synthesize headerTitleLayout=_headerTitleLayout;
- (void).cxx_destruct;
- (void)_setupLayout:(long long)arg1;
- (id)initWithLayoutType:(long long)arg1;

@end

