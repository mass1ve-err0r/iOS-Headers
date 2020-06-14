//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSCalendar, NSMutableArray, PKSpendingSummary, UIFont;

@interface PKSpendingSummaryChartView : UIView
{
    NSMutableArray *_valueLabels;
    NSMutableArray *_legendLabels;
    NSMutableArray *_horizontalAxis;
    NSMutableArray *_bars;
    UIFont *_fontForLabels;
    UIFont *_fontForValues;
    PKSpendingSummary *_summary;
    double _chartMaxAmount;
    double _groupsMaxAmount;
    unsigned long long _axisCount;
    unsigned long long _presentationStyle;
    NSCalendar *_currentCalendar;
    _Bool _isCompactUI;
    _Bool _showLegend;
    _Bool _blurDisabled;
    _Bool _visible;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isBlurDisabled) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) _Bool showLegend; // @synthesize showLegend=_showLegend;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

