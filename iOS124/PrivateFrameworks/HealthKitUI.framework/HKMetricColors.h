//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface HKMetricColors : NSObject
{
    UIColor *_gradientLightColor;
    UIColor *_gradientDarkColor;
    UIColor *_adjustmentButtonBackgroundColor;
    UIColor *_nonGradientTextColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonDisabledTextColor;
    UIColor *_valueDisplayColor;
    NSString *_workoutRingColorIdentifier;
}

+ (id)keyColors;
+ (id)clockColors;
+ (id)heartRateColors;
+ (id)paceColors;
+ (id)elapsedTimeColors;
+ (id)noMetricColors;
+ (id)distanceColors;
+ (id)sedentaryColors;
+ (id)briskColors;
+ (id)energyColors;
+ (struct CGGradient *)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1;
+ (id)systemGrayTextColor;
@property(retain, nonatomic) NSString *workoutRingColorIdentifier; // @synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier;
@property(retain, nonatomic) UIColor *valueDisplayColor; // @synthesize valueDisplayColor=_valueDisplayColor;
@property(retain, nonatomic) UIColor *buttonDisabledTextColor; // @synthesize buttonDisabledTextColor=_buttonDisabledTextColor;
@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *nonGradientTextColor; // @synthesize nonGradientTextColor=_nonGradientTextColor;
@property(retain, nonatomic) UIColor *adjustmentButtonBackgroundColor; // @synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor;
@property(retain, nonatomic) UIColor *gradientDarkColor; // @synthesize gradientDarkColor=_gradientDarkColor;
@property(retain, nonatomic) UIColor *gradientLightColor; // @synthesize gradientLightColor=_gradientLightColor;
- (void).cxx_destruct;

@end

