//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView
{
    NSMutableArray *_factoidViews;
    UILayoutGuide *_insetMetricGuide;
    UILayoutGuide *_leftMetricGuide;
    UILayoutGuide *_rightMetricGuide;
    unsigned long long _columnCount;
    NSArray *_items;
    NSMutableArray *_labelConstraints;
}

@property(retain, nonatomic) NSMutableArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)refreshContent:(_Bool)arg1;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (void)refreshColumnCount;
- (void)layoutSubviews;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

