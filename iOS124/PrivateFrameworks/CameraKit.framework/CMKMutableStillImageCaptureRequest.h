//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKStillImageCaptureRequest.h>

@protocol CMKStillImageCaptureRequestDelegate;

@interface CMKMutableStillImageCaptureRequest : CMKStillImageCaptureRequest
{
}

- (void)setParameter:(id)arg1 forKey:(id)arg2;
@property(nonatomic) __weak id <CMKStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool wantsAudioForCapture; // @dynamic wantsAudioForCapture;
@property(nonatomic) _Bool usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property(nonatomic) int hdrMode; // @dynamic hdrMode;
@property(nonatomic) long long flashMode; // @dynamic flashMode;
@property(nonatomic) long long captureDevice; // @dynamic captureDevice;
@property(nonatomic) long long deviceOrientation; // @dynamic deviceOrientation;
@property(nonatomic, getter=isTransient) _Bool transient; // @dynamic transient;

@end

