//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PencilKit/_PKColorAlphaSliderDelegate-Protocol.h>

@class NSString, PKInk, UIView, _PKColorAlphaSlider, _PKInkThicknessPicker;
@protocol _PKInkAttributesPickerViewDelegate;

@interface _PKInkAttributesPickerView : UIControl <_PKColorAlphaSliderDelegate>
{
    id <_PKInkAttributesPickerViewDelegate> _delegate;
    PKInk *_ink;
    unsigned long long _displayMode;
    _PKInkThicknessPicker *_thicknessPicker;
    _PKColorAlphaSlider *_colorAlphaSlider;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) _PKColorAlphaSlider *colorAlphaSlider; // @synthesize colorAlphaSlider=_colorAlphaSlider;
@property(retain, nonatomic) _PKInkThicknessPicker *thicknessPicker; // @synthesize thicknessPicker=_thicknessPicker;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) __weak id <_PKInkAttributesPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1;
- (void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1;
- (void)opacityValueChanged:(id)arg1;
- (void)thicknessValueChanged:(id)arg1;
- (void)setInk:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

