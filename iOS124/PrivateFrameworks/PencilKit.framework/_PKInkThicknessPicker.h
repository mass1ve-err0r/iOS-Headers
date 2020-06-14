//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString;

@interface _PKInkThicknessPicker : UIControl
{
    NSString *_inkIdentifier;
    double _weight;
    NSArray *_thicknessButtons;
}

+ (struct CGRect)_buttonFrameForButtonIndex:(long long)arg1;
+ (double)_nearestButtonWeightForWeight:(double)arg1;
+ (double)_weightForButtonFrame:(struct CGRect)arg1;
+ (struct CGRect)_buttonFrameForWeight:(double)arg1;
+ (double)_weightForButtonIndex:(long long)arg1;
+ (long long)_nearestButtonIndexForWeight:(double)arg1;
@property(retain, nonatomic) NSArray *thicknessButtons; // @synthesize thicknessButtons=_thicknessButtons;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *inkIdentifier; // @synthesize inkIdentifier=_inkIdentifier;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInkIdentifier:(id)arg1;

@end

