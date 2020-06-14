//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;
@protocol _MKUserInteractionGestureRecognizerTouchObserver;

__attribute__((visibility("hidden")))
@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    id <_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;
}

@property(nonatomic) __weak id <_MKUserInteractionGestureRecognizerTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

