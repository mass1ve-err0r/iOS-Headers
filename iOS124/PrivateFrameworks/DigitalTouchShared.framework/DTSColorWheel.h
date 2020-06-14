//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol DTSColorWheelDelegate;

@interface DTSColorWheel : UIView
{
    id <DTSColorWheelDelegate> _delegate;
    double _colorWheelRadius;
    double _gradientWidth;
    double _pickerDiameter;
    double _hueRotation;
    double _pickerRotation;
    UIView *_pickerCircle;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *pickerCircle; // @synthesize pickerCircle=_pickerCircle;
@property(nonatomic) double pickerRotation; // @synthesize pickerRotation=_pickerRotation;
@property(nonatomic) double hueRotation; // @synthesize hueRotation=_hueRotation;
@property(nonatomic) double pickerDiameter; // @synthesize pickerDiameter=_pickerDiameter;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double colorWheelRadius; // @synthesize colorWheelRadius=_colorWheelRadius;
@property(nonatomic) __weak id <DTSColorWheelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pickerViewHighlightedColor;
- (void)doneButtonTapped:(id)arg1;
- (void)updatePickerPositionForPoint:(struct CGPoint)arg1;
- (void)createDoneButtonWithFrame:(struct CGRect)arg1;
- (void)finishedTouches;
- (void)beganTouches:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

