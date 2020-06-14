//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKDashboardSectionHeaderView.h>

@class NSLayoutConstraint, NSString, UIButton;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView
{
    id _buttonTarget;
    SEL _buttonAction;
    UIButton *_button;
    NSLayoutConstraint *_titleToButtonConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
}

+ (struct CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (struct CGSize)platformSizeForTitle:(id)arg1;
+ (double)widthForTitle:(id)arg1;
@property(nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) NSLayoutConstraint *titleToButtonConstraint; // @synthesize titleToButtonConstraint=_titleToButtonConstraint;
@property(nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) id buttonTarget; // @synthesize buttonTarget=_buttonTarget;
- (void)buttonPressed:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
- (void)awakeFromNib;

@end

