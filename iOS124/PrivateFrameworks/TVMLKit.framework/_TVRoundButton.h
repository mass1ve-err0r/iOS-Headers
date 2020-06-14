//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVButton.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _TVRoundButton : TVButton
{
    CALayer *_imageMask;
    CDUnknownBlockType _updateFloatingViewFocusStateBlock;
    _Bool _shouldPunchThroughImage;
}

+ (id)_buttonContentWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;
@property(nonatomic) _Bool shouldPunchThroughImage; // @synthesize shouldPunchThroughImage=_shouldPunchThroughImage;
- (void).cxx_destruct;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (void)_updateFloaingViewFocusState:(_Bool)arg1 coordinator:(id)arg2;
- (void)_updateFloatingViewFocusStateIfNeeded;
- (void)setBounds:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (void)_updateImageMask;
- (void)_imageViewDidLoadImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setTextContentView:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;

@end

