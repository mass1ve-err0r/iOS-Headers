//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@protocol CAMStillImageCapturingVideoDelegate <NSObject>

@optional
- (void)stopShowingLivePhotoIndicator;
- (void)startShowingLivePhotoIndicator;
- (void)didCompleteCapturingVideoForStillImageRequests;
- (void)willStartCapturingVideoForStillImageRequests;
@end
