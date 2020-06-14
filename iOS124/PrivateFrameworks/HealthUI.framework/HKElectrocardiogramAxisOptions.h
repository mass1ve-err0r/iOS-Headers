//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface HKElectrocardiogramAxisOptions : NSObject
{
    _Bool _scaleMetricsAutomatically;
    UIFont *_axisLabelFont;
    UIColor *_lineColor;
    double _lineWidth;
    double _axisLineToLabelSpacing;
    double _topBaselineMargin;
    double _bottomBaselineMargin;
}

@property(readonly, nonatomic) double bottomBaselineMargin; // @synthesize bottomBaselineMargin=_bottomBaselineMargin;
@property(readonly, nonatomic) double topBaselineMargin; // @synthesize topBaselineMargin=_topBaselineMargin;
@property(readonly, nonatomic) double axisLineToLabelSpacing; // @synthesize axisLineToLabelSpacing=_axisLineToLabelSpacing;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(readonly, nonatomic) _Bool scaleMetricsAutomatically; // @synthesize scaleMetricsAutomatically=_scaleMetricsAutomatically;
@property(readonly, nonatomic) UIFont *axisLabelFont; // @synthesize axisLabelFont=_axisLabelFont;
- (void).cxx_destruct;
- (id)initWithAxisLabelFont:(id)arg1 scaleMetricsAutomatically:(_Bool)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 axisLineToLabelSpacing:(double)arg5 topBaselineMargin:(double)arg6 bottomBaselineMargin:(double)arg7;

@end

