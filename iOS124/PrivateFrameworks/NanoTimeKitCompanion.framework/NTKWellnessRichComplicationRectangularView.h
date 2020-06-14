//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, NTKWellnessRichComplicationChartView;

@interface NTKWellnessRichComplicationRectangularView : NTKRichComplicationRectangularBaseView
{
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_moveLabel;
    NTKColoringLabel *_exerciseLabel;
    NTKColoringLabel *_standLabel;
    NTKWellnessRichComplicationChartView *_chartView;
}

@property(retain, nonatomic) NTKWellnessRichComplicationChartView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) NTKColoringLabel *standLabel; // @synthesize standLabel=_standLabel;
@property(retain, nonatomic) NTKColoringLabel *exerciseLabel; // @synthesize exerciseLabel=_exerciseLabel;
@property(retain, nonatomic) NTKColoringLabel *moveLabel; // @synthesize moveLabel=_moveLabel;
@property(retain, nonatomic) NTKColoringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setupViews;
- (id)init;

@end

