//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

+ (id)layerWithSessionWithNoConnection:(id)arg1;
+ (id)layerWithSession:(id)arg1;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (_Bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(_Bool)arg2 exceptionReason:(id *)arg3;
- (_Bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id *)arg2;
- (void)_updateDepthDataDeliverySupported;
- (void)_updatePreviewTransforms;
- (void)_updateCaptureDeviceTransform;
- (void)_setSensorAndEstimatedPreviewSizes;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)_input;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)connectionMediaTypes;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (unsigned int)imageQueueSlot;
- (void)setUnoptimizedFilterRenderingEnabled:(_Bool)arg1;
- (_Bool)isUnoptimizedFilterRenderingEnabled;
- (void)setVideoPreviewFilters:(id)arg1;
- (id)videoPreviewFilters;
- (void)setFilterRenderingEnabled:(_Bool)arg1;
- (_Bool)isFilterRenderingEnabled;
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;
- (_Bool)isDepthDataDeliveryEnabled;
- (_Bool)isDepthDataDeliverySupported;
- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;
- (_Bool)isChromaNoiseReductionEnabled;
- (_Bool)isChromaNoiseReductionSupported;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isPaused;
@property(nonatomic, getter=isMirrored) _Bool mirrored;
- (_Bool)_isMirrored;
@property(nonatomic) _Bool automaticallyAdjustsMirroring;
- (_Bool)_automaticallyAdjustsMirroring;
@property(readonly, nonatomic, getter=isMirroringSupported) _Bool mirroringSupported;
@property(nonatomic) long long orientation;
- (long long)_orientation;
@property(readonly, nonatomic, getter=isOrientationSupported) _Bool orientationSupported;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
@property(retain, nonatomic) AVCaptureSession *session;
@property(readonly, nonatomic) AVCaptureConnection *connection;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (double)previewRotationDegrees;
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;
- (void)centerSublayer:(long long)arg1;

@end

