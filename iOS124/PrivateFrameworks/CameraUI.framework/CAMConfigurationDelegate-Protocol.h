//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureGraphConfiguration, CUCaptureController;

@protocol CAMConfigurationDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didChangeToGraphConfiguration:(CAMCaptureGraphConfiguration *)arg2 forDesiredConfiguration:(CAMCaptureGraphConfiguration *)arg3 requestID:(int)arg4;
@end

