//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HKParagraphTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_paragraphLabel;
    UIButton *_button;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSString *_titleText;
    NSString *_paragraphText;
    NSString *_buttonText;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *paragraphText; // @synthesize paragraphText=_paragraphText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (long long)_buttonHorizontalAlignment;
- (double)_buttonBaselineToBottom;
- (id)_buttonFont;
- (double)_subtitleLabelBaselineToButton;
- (id)_paragraphLabelFont;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_titleLabelTopToBaseline;
- (id)_titleLabelFont;
- (void)_setupUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

