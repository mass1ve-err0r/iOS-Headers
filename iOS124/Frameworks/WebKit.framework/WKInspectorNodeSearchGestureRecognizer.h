//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer
{
    struct RetainPtr<UITouch> _touch;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_processTouches:(id)arg1 state:(long long)arg2;
- (struct CGPoint)locationInView:(id)arg1;

@end

