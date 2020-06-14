//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand
{
    CAMVideoCaptureRequest *__request;
}

@property(readonly, nonatomic) CAMVideoCaptureRequest *_request; // @synthesize _request=__request;
- (void).cxx_destruct;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

