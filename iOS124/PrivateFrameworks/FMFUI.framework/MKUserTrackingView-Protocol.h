//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@protocol MKUserTrackingView <NSObject>
- (_Bool)isCurrentlyRotated;
- (_Bool)canRotateForHeading;
- (_Bool)hasUserLocation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (long long)userTrackingMode;

@optional
- (_Bool)postsMapViewInitialRenderingNotification;
- (_Bool)hasRenderedSomething;
@end

