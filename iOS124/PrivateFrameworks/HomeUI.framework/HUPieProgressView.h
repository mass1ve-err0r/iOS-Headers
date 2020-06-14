//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;
@protocol HUPieProgressViewDelegate;

@interface HUPieProgressView : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _isAnimating;
    id <HUPieProgressViewDelegate> _delegate;
    long long _style;
    double _indeterminateMaxProgress;
    double _indeterminateExpectedDuration;
    double _progressLineWidth;
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_progressLayer;
}

@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(nonatomic) double indeterminateExpectedDuration; // @synthesize indeterminateExpectedDuration=_indeterminateExpectedDuration;
@property(nonatomic) double indeterminateMaxProgress; // @synthesize indeterminateMaxProgress=_indeterminateMaxProgress;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <HUPieProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fadeOut;
- (void)_fadeIn;
- (void)_updateLayerPaths;
- (void)_updateProgressLayerLineWidth;
- (void)_setDefaults;
- (id)_setupProgressLayer;
- (id)_setupOutlineLayer;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double progress;
@property(nonatomic) double outlineLineWidth;
- (void)resetProgress;
- (void)startWithFuture:(id)arg1;

@end

