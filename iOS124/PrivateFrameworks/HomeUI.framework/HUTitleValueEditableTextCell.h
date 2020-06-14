//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIFont, UILabel, UITextField;
@protocol HUResizableCellDelegate;

@interface HUTitleValueEditableTextCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>
{
    _Bool _disabled;
    _Bool _hideTitle;
    UITextField *_valueTextField;
    HFItem *_item;
    NSString *_titleText;
    UIFont *_titleFont;
    long long _compressionResistancePolicy;
    UILabel *_titleLabel;
    NSArray *_titleLabelConstraints;
    NSArray *_valueTextFieldConstraints;
    NSLayoutConstraint *_labelsSpacingConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelsSpacingConstraint; // @synthesize labelsSpacingConstraint=_labelsSpacingConstraint;
@property(retain, nonatomic) NSArray *valueTextFieldConstraints; // @synthesize valueTextFieldConstraints=_valueTextFieldConstraints;
@property(retain, nonatomic) NSArray *titleLabelConstraints; // @synthesize titleLabelConstraints=_titleLabelConstraints;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long compressionResistancePolicy; // @synthesize compressionResistancePolicy=_compressionResistancePolicy;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) UITextField *valueTextField; // @synthesize valueTextField=_valueTextField;
- (void).cxx_destruct;
- (void)_updateCompressionResistance;
- (void)_updateTitle;
- (void)_addValueTextField;
- (void)_addTitleLabel;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

