//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, NSString;

@protocol CAMBurstRequest <NSObject>
- (CAMCaptureRequest *)captureRequest;
- (unsigned long long)maximumBurstLength;
- (NSString *)burstIdentifier;
@end

