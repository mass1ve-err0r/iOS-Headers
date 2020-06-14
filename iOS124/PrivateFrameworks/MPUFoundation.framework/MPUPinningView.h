//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface MPUPinningView : UIView
{
    UIView *_containerView;
    CALayer *_effectivePinningSourceLayer;
    UIView *_contentView;
    UIView *_pinningSourceView;
    CALayer *_pinningSourceLayer;
}

@property(retain, nonatomic) CALayer *pinningSourceLayer; // @synthesize pinningSourceLayer=_pinningSourceLayer;
@property(retain, nonatomic) UIView *pinningSourceView; // @synthesize pinningSourceView=_pinningSourceView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)_updateEffectivePinningSourceView;
- (void)_unregisterKVOObserversForLayer:(id)arg1;
- (void)_registerKVOObserversForLayer:(id)arg1;
- (void)_configureMatchMoveAnimation;
- (void)_prepareForDefaultImageSnapshotNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

