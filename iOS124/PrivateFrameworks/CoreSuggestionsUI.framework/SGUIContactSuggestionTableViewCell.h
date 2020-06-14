//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, SGRealtimeContact, UIButton, UIImageView, UILabel;
@protocol SGUISuggestionTableViewCellDelegate;

@interface SGUIContactSuggestionTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_ignoreButton;
    UIButton *_addUpdateButton;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interLabelAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    SGRealtimeContact *_realtimeContact;
    id <SGUISuggestionTableViewCellDelegate> _delegate;
}

+ (id)actionButtonTitleForContact:(id)arg1;
+ (double)bottomMarginConstant;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)topMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (id)titleFont;
@property(nonatomic) __weak id <SGUISuggestionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SGRealtimeContact *realtimeContact; // @synthesize realtimeContact=_realtimeContact;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setLabelAndButtonFonts;
- (void)_addUpdateButtonTapped:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

