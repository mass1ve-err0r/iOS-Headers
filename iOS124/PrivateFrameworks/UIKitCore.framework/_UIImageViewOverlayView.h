//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@protocol _UIImageViewOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIImageViewOverlayView : UIView
{
    id <_UIImageViewOverlayViewDelegate> _overlayViewDelegate;
}

@property(nonatomic) __weak id <_UIImageViewOverlayViewDelegate> overlayViewDelegate; // @synthesize overlayViewDelegate=_overlayViewDelegate;
- (void).cxx_destruct;
- (void)setClipsToBounds:(_Bool)arg1;

@end

