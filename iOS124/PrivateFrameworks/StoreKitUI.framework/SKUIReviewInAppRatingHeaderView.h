//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIStarRatingControl, UIImageView, UILabel;

@interface SKUIReviewInAppRatingHeaderView : UIView
{
    _Bool _completed;
    NSString *_title;
    NSString *_message;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    SKUIStarRatingControl *_ratingView;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) SKUIStarRatingControl *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
- (void).cxx_destruct;
- (id)_messageLabelFont;
- (id)_titleLabelFont;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCompletedWithRating:(long long)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;

@end

