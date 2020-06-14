//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@protocol SBPowerDownAlertViewDelegate;

@interface _SBInternalPowerDownView : SBUIPowerDownView
{
    _Bool _canAlterScreenBrightness;
    id <SBPowerDownAlertViewDelegate> _powerDownDelegate;
    _Bool _hiddenLockScreenForeground;
}

@property(nonatomic) _Bool canAlterScreenBrightness; // @synthesize canAlterScreenBrightness=_canAlterScreenBrightness;
- (void).cxx_destruct;
- (void)resetScreenBrightness;
@property(retain, nonatomic) id <SBPowerDownAlertViewDelegate> powerDownDelegate; // @synthesize powerDownDelegate=_powerDownDelegate;
- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_powerDownSliderDidBeginSlide;

@end

