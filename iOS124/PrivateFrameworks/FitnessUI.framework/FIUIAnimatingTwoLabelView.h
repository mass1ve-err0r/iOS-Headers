//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface FIUIAnimatingTwoLabelView : UIView
{
    UILabel *_visibleLabel;
    UILabel *_mainLabel;
    UILabel *_secondaryLabel;
}

@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (void)applyFont:(id)arg1;
- (void)_updateHidden;
- (void)showSecondaryLabelAnimated:(_Bool)arg1;
- (void)showMainLabelAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *visibleLabel;
- (struct CGRect)_frameBelowBounds;
- (struct CGRect)_frameAboveBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mainLabel:(id)arg2 secondaryLabel:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

