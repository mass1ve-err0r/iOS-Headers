//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKColorPickerCrosshairViewDelegate-Protocol.h>
#import <PencilKit/_PKColorPickerImplementation-Protocol.h>

@class NSArray, NSString, UIColor;
@protocol _PKColorPickerImplementationDelegate;

@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation>
{
    UIColor *selectedColor;
    id <_PKColorPickerImplementationDelegate> _colorPickerDelegate;
    NSArray *_colorMatrix;
    NSArray *_colorButtons;
}

+ (id)defaultColorMatrix;
+ (id)_representableColorForColor:(id)arg1;
@property(retain, nonatomic) NSArray *colorButtons; // @synthesize colorButtons=_colorButtons;
@property(retain, nonatomic) NSArray *colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(nonatomic) __weak id <_PKColorPickerImplementationDelegate> colorPickerDelegate; // @synthesize colorPickerDelegate=_colorPickerDelegate;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor;
- (void).cxx_destruct;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1;
- (void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(struct CGPoint)arg2;
- (id)colorForColorPickerCrosshairView:(id)arg1 frame:(struct CGRect)arg2;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(id)arg1;
- (struct CGRect)frameForColorPickerCrosshairView:(id)arg1;
- (id)representableColorForColor:(id)arg1;
- (void)layoutSubviews;
- (id)_boundedPointForPoint:(id)arg1;
- (id)_pointForColor:(id)arg1;
- (id)_colorForPoint:(id)arg1;
- (id)_pointForCGPoint:(struct CGPoint)arg1;
- (struct CGRect)_frameForViewWithPoint:(id)arg1;
- (id)_pointFromButton:(id)arg1;
- (void)didTapColorButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

