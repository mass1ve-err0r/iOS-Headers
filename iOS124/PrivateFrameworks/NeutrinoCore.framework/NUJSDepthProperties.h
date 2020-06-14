//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSDepthPropertiesExport-Protocol.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;
@protocol NUDepthProperties;

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>
{
}

@property(readonly) NUJSCGImageMetadata *depthMetaData;
@property(readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property(readonly) id <NUDepthProperties> depthProperties;
- (id)initWithDepthProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

