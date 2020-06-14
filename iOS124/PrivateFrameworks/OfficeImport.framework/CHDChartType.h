//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart, CHDDataLabel, CHDSeriesCollection, EDCollection;

__attribute__((visibility("hidden")))
@interface CHDChartType : NSObject
{
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    _Bool mVaryColors;
}

+ (_Bool)is3DType;
+ (id)chartTypeWithChart:(id)arg1;
- (id)description;
- (id)defaultTitleWithResources:(id)arg1;
- (int)defaultLabelPosition;
- (_Bool)isHorizontal;
- (void)setVaryColors:(_Bool)arg1;
- (_Bool)isVaryColors;
- (id)contentFormat;
- (void)setDefaultDataLabel:(id)arg1;
- (id)defaultDataLabel;
- (void)setSeriesCollection:(id)arg1;
- (unsigned long long)categoryCount;
- (unsigned long long)seriesCount;
- (id)seriesCollection;
- (id)axisForClass:(Class)arg1;
- (void)switchAxes:(id)arg1;
- (id)axes;
- (_Bool)isPlotedOnSecondaryAxis;
- (id)axisIds;
- (id)chart;
- (void)dealloc;
- (id)initWithChart:(id)arg1;

@end

