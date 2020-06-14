//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel, UIVisualEffectView;

@interface HUCameraBadgeView : UIView
{
    unsigned long long _style;
    unsigned long long _size;
    UILabel *_label;
    UIVisualEffectView *_blurEffectView;
    UIVisualEffectView *_vibrancyEffectView;
    NSArray *_staticConstraints;
    NSArray *_labelConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(readonly, nonatomic) UIVisualEffectView *vibrancyEffectView; // @synthesize vibrancyEffectView=_vibrancyEffectView;
@property(readonly, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_applyStyle;
@property(copy, nonatomic) NSString *labelText;
- (void)updateConstraints;
- (id)initWithSize:(unsigned long long)arg1;

@end

