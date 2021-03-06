/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMDDataStreamBulkSendListener, HMFLogging> {
    HMDHAPAccessory * _accessory;
    bool  _canSendBulkSendSessionOpenRequest;
    bool  _hasRegisteredBulkSendListener;
    id /* block */  _pendingStartSessionCallback;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property bool canSendBulkSendSessionOpenRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasRegisteredBulkSendListener;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ pendingStartSessionCallback;
@property (getter=isSessionOpenInProgress, readonly) bool sessionOpenInProgress;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callPendingStartSessionCallbackWithSession:(id)arg1 error:(id)arg2;
- (void)_registerAsBulkSendListener;
- (void)_startBulkSendSession;
- (id)accessory;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)accessoryDidCloseDataStream:(id)arg1;
- (void)accessoryDidStartListening:(id)arg1;
- (void)callPendingStartSessionCallback:(id)arg1 error:(id)arg2;
- (bool)canSendBulkSendSessionOpenRequest;
- (void)dealloc;
- (void)handleAccessoryDoesSupportBulkSendDataStream:(id)arg1;
- (bool)hasRegisteredBulkSendListener;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (bool)isSessionOpenInProgress;
- (id)logIdentifier;
- (void)openNewSessionWithCompletion:(id /* block */)arg1;
- (id /* block */)pendingStartSessionCallback;
- (void)setCanSendBulkSendSessionOpenRequest:(bool)arg1;
- (void)setHasRegisteredBulkSendListener:(bool)arg1;
- (void)setPendingStartSessionCallback:(id /* block */)arg1;
- (void)shutDown;
- (void)start;
- (id)workQueue;

@end
