//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

@class VKARCameraController;

__attribute__((visibility("hidden")))
@interface VKARGestureCameraBehavior : VKGestureCameraBehavior
{
    VKARCameraController *_arCameraController;
    Geocentric_d8fde6f2 _startPanPosition;
}

- (id).cxx_construct;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)beginPan:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithARCameraController:(id)arg1;

@end
