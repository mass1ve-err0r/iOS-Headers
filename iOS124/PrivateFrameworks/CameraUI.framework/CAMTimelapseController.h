//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonTimelapseClientProtocol-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>

@class CAMFocusResult, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMTimelapseState, CUCaptureController, NSCountedSet, NSDate, NSMutableSet, NSString;
@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol>
{
    _Bool __ignoringTimerCallbacksForTearDown;
    _Bool __ignoringTimerCallbacksWaitingForCaptureResponse;
    _Bool __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
    _Bool __backendRecoveryNeeded;
    _Bool __previewStarted;
    _Bool __focusAndExposureAdjusted;
    id <CAMTimelapseControllerDelegate> _delegate;
    CAMFocusResult *_lastFocusResult;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CUCaptureController *__captureController;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMPersistenceController *__persistenceController;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
}

+ (id)createPlaceholderResultForTimelapseState:(id)arg1;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) _Bool _focusAndExposureAdjusted; // @synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted;
@property(nonatomic, setter=_setPreviewStarted:) _Bool _previewStarted; // @synthesize _previewStarted=__previewStarted;
@property(nonatomic, setter=_setBackendRecoveryNeeded:) _Bool _backendRecoveryNeeded; // @synthesize _backendRecoveryNeeded=__backendRecoveryNeeded;
@property(nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) _Bool _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes; // @synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property(readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // @synthesize _pendingCompletedStates=__pendingCompletedStates;
@property(readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // @synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksWaitingForCaptureResponse; // @synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly, nonatomic) _Bool _ignoringTimerCallbacksForTearDown; // @synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // @synthesize _captureTimer=__captureTimer;
@property(readonly, nonatomic) CAMTimelapseState *_state; // @synthesize _state=__state;
@property(nonatomic) CAMFocusResult *lastFocusResult; // @synthesize lastFocusResult=_lastFocusResult;
@property(nonatomic) __weak id <CAMTimelapseControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)_updateLocationIfNecessary;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_previewStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (id)_createThumbnailImageFromPlaceholderResult:(id)arg1;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_saveStateToDisk:(id)arg1;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)_updateFocusAndExposureForStartCapturing;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (_Bool)_enqueueCaptureRequest;
- (_Bool)_canCapturePhoto;
- (void)_captureTimerFired;
- (void)_teardownCaptureTimer;
- (void)_startCaptureTimer;
@property(readonly, nonatomic) NSDate *captureStartTime;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_restoreCaptureStateFromDisk;
- (void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (_Bool)stopCapturingWithReasons:(long long)arg1;
- (_Bool)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
@property(readonly, nonatomic, getter=isCapturing) _Bool capturing;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(_Bool)arg1;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)restoreConfiguration;
- (void)dealloc;
- (id)init;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 nebulaDaemonProxyManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

