/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSynchronizedStreamsGroup : NSObject {
    bool  _atomicMasterSlaveReconfigurationSupported;
    NSMutableDictionary * _baseZoomFactorsByPortType;
    BWFigVideoCaptureStream * _cameraControlsStatisticsMasterStream;
    NSDictionary * _cameraPoseMatricesByPortType;
    NSDictionary * _cameraViewMatricesByPortType;
    NSMutableDictionary * _clientBaseZoomFactorsByPortType;
    NSDictionary * _currentMasterConfiguration;
    bool  _masterConfigurationSupported;
    int  _maximumNumberOfEnabledSlaveTimeMachines;
    int  _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    NSArray * _portTypes;
    bool  _readOnly;
    bool  _sensorToOutputSkippingEnabled;
    bool  _statsMasterHasBeenSet;
    NSArray * _streams;
    struct OpaqueFigCaptureStream { } * _synchronizationMaster;
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } * _synchronizedStreamsGroup;
    NSDictionary * _synchronizedStreamsGroupSupportedProperties;
}

@property (nonatomic, copy) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, readonly) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;
@property (nonatomic, readonly) NSDictionary *clientBaseZoomFactorsByPortType;
@property (nonatomic, readonly) bool maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (nonatomic, readonly) bool minimumMasterToSlaveFrameRateRatioSupported;
@property (nonatomic, readonly) NSArray *portTypes;
@property (nonatomic, readonly) struct OpaqueFigCaptureSynchronizedStreamsGroup { }*syncGroup;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream { }*synchronizationMaster;

+ (void)initialize;
+ (int)resetAllSynchronizedStreamsGroupsForDevice:(struct OpaqueFigCaptureDevice { }*)arg1;

- (int)_computeBaseZoomFactors;
- (int)_getSynchronizationMasterFromStreams:(id)arg1;
- (int)_getViewAndPoseMatrices;
- (id)_slaveConfigurationForStream:(id)arg1;
- (void)_updateClientBaseZoomFactors;
- (id)_worldPortType;
- (id)baseZoomFactorsByPortType;
- (id)cameraControlsStatisticsMasterStream;
- (id)cameraPoseMatrixForPortType:(id)arg1;
- (id)cameraViewMatrixForPortType:(id)arg1;
- (id)clientBaseZoomFactorsByPortType;
- (void)dealloc;
- (id)initWithStreams:(id)arg1 device:(struct OpaqueFigCaptureDevice { }*)arg2 readOnly:(bool)arg3 baseZoomFactorOverrides:(id)arg4;
- (bool)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (bool)minimumMasterToSlaveFrameRateRatioSupported;
- (id)portTypes;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (int)setCameraControlsStatisticsMasterStream:(id)arg1;
- (int)setMasterStream:(id)arg1 allStreams:(id)arg2;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)arg1;
- (bool)supportsProperty:(struct __CFString { }*)arg1;
- (struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)syncGroup;
- (struct OpaqueFigCaptureStream { }*)synchronizationMaster;

@end