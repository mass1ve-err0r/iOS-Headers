//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarRoundedCornerView.h>

#import <UIKitCore/_UIStatusBarPersistentAnimation-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityView : _UIStatusBarRoundedCornerView <_UIStatusBarPersistentAnimation>
{
    _Bool _pulsing;
    CALayer *_pulseLayer;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property(retain, nonatomic) CALayer *pulseLayer; // @synthesize pulseLayer=_pulseLayer;
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resumePersistentAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

