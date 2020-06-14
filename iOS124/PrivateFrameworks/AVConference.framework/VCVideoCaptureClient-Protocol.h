//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, VCVideoRule;

@protocol VCVideoCaptureClient
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (VCVideoRule *)clientCaptureRule;
- (void)avConferencePreviewError:(NSString *)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;

@optional
- (void)avConferenceScreenCaptureError:(NSString *)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
@end

