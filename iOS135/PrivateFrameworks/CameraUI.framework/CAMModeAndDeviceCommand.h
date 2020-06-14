/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {
    NSError * __configurationError;
    CAMCaptureGraphConfiguration * __desiredGraphConfiguration;
    double  __minimumExecutionTime;
    int  __requestID;
    CAMCaptureGraphConfiguration * __resolvedGraphConfiguration;
}

@property (setter=_setConfigurationError:, nonatomic, retain) NSError *_configurationError;
@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;
@property (nonatomic, readonly) double _minimumExecutionTime;
@property (nonatomic, readonly) int _requestID;
@property (setter=_setResolvedGraphConfiguration:, nonatomic, retain) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;

- (void).cxx_destruct;
- (id)_configurationError;
- (id)_desiredGraphConfiguration;
- (id)_desiredInputsWithContext:(id)arg1;
- (id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(bool)arg2;
- (id)_existingInputsWithContext:(id)arg1 without:(id)arg2;
- (id)_existingOutputsWithContext:(id)arg1 without:(id)arg2;
- (bool)_isStillImageMode:(long long)arg1;
- (double)_minimumExecutionTime;
- (void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (int)_requestID;
- (id)_resolvedGraphConfiguration;
- (void)_sanitizeDeviceUsingContext:(id)arg1;
- (void)_setConfigurationError:(id)arg1;
- (void)_setResolvedGraphConfiguration:(id)arg1;
- (bool)_shouldEnableDeferredProcessingForMode:(long long)arg1;
- (bool)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2;
- (id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1;
- (id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2;
- (id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1;
- (bool)_wantsLivePhotoMetadataInVideosForMode:(long long)arg1 device:(long long)arg2;
- (bool)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2;
- (bool)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3;
- (bool)requiresSessionModification;
- (id)sessionModificationLogReason;
- (id)userInfo;

@end