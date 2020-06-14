//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;

@interface HKClinicalAuthorizationBinaryChoiceFooterView : UIView
{
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    NSLayoutConstraint *_secondaryFirstBaselineToPrimaryBottomConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *secondaryFirstBaselineToPrimaryBottomConstraint; // @synthesize secondaryFirstBaselineToPrimaryBottomConstraint=_secondaryFirstBaselineToPrimaryBottomConstraint;
@property(readonly, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

