//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconCell.h>

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface HUTitleDescriptionCell : HUIconCell
{
    _Bool _hideTitle;
    _Bool _hideDescription;
    _Bool _hideDescriptionIcon;
    _Bool _adjustsTextColorWhenDisabled;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSString *_titleText;
    UIFont *_titleFont;
    NSString *_descriptionText;
    UIFont *_descriptionFont;
    UIImage *_descriptionIcon;
    double _textAlpha;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
    UIImageView *_descriptionIconView;
}

@property(readonly, nonatomic) UIImageView *descriptionIconView; // @synthesize descriptionIconView=_descriptionIconView;
@property(retain, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property(retain, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;
@property(nonatomic) _Bool adjustsTextColorWhenDisabled; // @synthesize adjustsTextColorWhenDisabled=_adjustsTextColorWhenDisabled;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(nonatomic) _Bool hideDescriptionIcon; // @synthesize hideDescriptionIcon=_hideDescriptionIcon;
@property(retain, nonatomic) UIImage *descriptionIcon; // @synthesize descriptionIcon=_descriptionIcon;
@property(nonatomic) _Bool hideDescription; // @synthesize hideDescription=_hideDescription;
@property(retain, nonatomic) UIFont *descriptionFont; // @synthesize descriptionFont=_descriptionFont;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)_addDescriptionIconView;
- (void)_addDescriptionLabel;
- (void)_addTitleLabel;
- (id)labelWithText:(id)arg1 font:(id)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateHorizontalLabelConstraints;
- (void)updateVerticalLabelConstraints;
- (void)updateConstraints;
- (void)setDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

