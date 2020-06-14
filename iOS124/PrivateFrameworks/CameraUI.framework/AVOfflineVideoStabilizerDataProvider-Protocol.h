//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class AVOfflineVideoStabilizer, NSDictionary;

@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
- (NSDictionary *)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
- (struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(CDStruct_1b6d18a9 *)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
@end

