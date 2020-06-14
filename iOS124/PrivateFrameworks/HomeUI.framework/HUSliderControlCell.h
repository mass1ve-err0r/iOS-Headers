//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell
{
    HUSimpleSliderControlView *_sliderView;
    NSArray *_sliderConstraints;
}

@property(copy, nonatomic) NSArray *sliderConstraints; // @synthesize sliderConstraints=_sliderConstraints;
@property(retain, nonatomic) HUSimpleSliderControlView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateSliderConstraints;
- (id)allControlViews;

@end

