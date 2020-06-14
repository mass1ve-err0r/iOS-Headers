//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNView.h>

#import <ARKit/ARInternalSessionObserver-Protocol.h>
#import <ARKit/_SCNSceneRendererDelegate-Protocol.h>

@class ARPointCloud, ARSession, CIWarpKernel, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSObject, NSString, SCNNode, SCNScene, UIView;
@protocol ARSCNViewDelegate, OS_dispatch_semaphore, SCNCaptureDeviceOutputConsumer;

@interface ARSCNView : SCNView <ARInternalSessionObserver, _SCNSceneRendererDelegate>
{
    ARSession *_session;
    double _lastFrameTimestamp;
    id <SCNCaptureDeviceOutputConsumer> _captureDeviceOutputConsumer;
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSMutableDictionary *_occlusionGeometryNodesByAnchorIdentifier;
    NSObject<OS_dispatch_semaphore> *_nodesSemaphore;
    NSMutableArray *_addedAnchors;
    NSMutableArray *_updatedAnchors;
    NSMutableArray *_removedAnchors;
    NSObject<OS_dispatch_semaphore> *_anchorsSemaphore;
    SCNNode *_worldOriginNode;
    SCNNode *_featurePointNode;
    ARPointCloud *_currentlyVisibleDebugPointerCloud;
    id _originalBackgroundContents;
    unsigned long long _arDebugOptions;
    long long _interfaceOrientation;
    long long _lastInterfaceOrientation;
    struct CGSize _viewportSize;
    double _contentsScale;
    UIView *_rotationSnapshot;
    CIWarpKernel *_warpKernel;
    unsigned long long _warpKernelLensType;
    NSMutableArray *_environmentProbeNodes;
    NSMutableArray *_environmentProbeNodesToRemove;
    _Bool _renderThreadFixed;
    _Bool _automaticallyUpdatesLighting;
    _Bool _providesOcclusionGeometry;
    _Bool _shouldRestrictFrameRate;
    _Bool _drawsCameraImage;
    long long _targetFramesPerSecond;
    long long _developerPreferredFramesPerSecond;
    long long _frameToRemoveRotationSnapshotOn;
    long long _rotationSnapshotState;
}

@property long long rotationSnapshotState; // @synthesize rotationSnapshotState=_rotationSnapshotState;
@property long long frameToRemoveRotationSnapshotOn; // @synthesize frameToRemoveRotationSnapshotOn=_frameToRemoveRotationSnapshotOn;
@property _Bool drawsCameraImage; // @synthesize drawsCameraImage=_drawsCameraImage;
@property long long developerPreferredFramesPerSecond; // @synthesize developerPreferredFramesPerSecond=_developerPreferredFramesPerSecond;
@property long long targetFramesPerSecond; // @synthesize targetFramesPerSecond=_targetFramesPerSecond;
@property _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) _Bool providesOcclusionGeometry; // @synthesize providesOcclusionGeometry=_providesOcclusionGeometry;
@property(nonatomic) _Bool automaticallyUpdatesLighting; // @synthesize automaticallyUpdatesLighting=_automaticallyUpdatesLighting;
- (void).cxx_destruct;
- (struct __CVBuffer *)_warpPixelBuffer:(struct __CVBuffer *)arg1 withCamera:(id)arg2;
- (void)_loadWarpKernalForLensType:(unsigned long long)arg1;
- (void)_updateBackingSize;
- (void)cleanupLingeringRotationState;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (void)didMoveToWindow;
- (void)_updatePreferredFramesPerSecond;
- (void)_updateFramesPerSecondWithTarget:(long long)arg1 shouldRestrictFrameRate:(_Bool)arg2;
@property(nonatomic) long long actualPreferredFramesPerSecond;
- (void)_updateDebugVisualization:(id)arg1;
- (void)_addOcclusionGeometryForAnchor:(id)arg1;
- (void)_removeAnchors:(id)arg1;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2 frame:(id)arg3;
- (void)_updateAnchors:(id)arg1 frame:(id)arg2;
- (void)_addAnchors:(id)arg1;
- (void)_updateProbesWithFrame:(id)arg1;
- (void)_updateLighting:(id)arg1;
- (void)_updateCamera:(id)arg1;
- (void)_forceUpdateCamera;
- (void)_renderCapturedPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_hitTest:(struct CGPoint)arg1 frame:(id)arg2 types:(unsigned long long)arg3;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sessionShouldAttemptRelocalization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (unsigned long long)debugOptions;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setPointOfView:(id)arg1;
@property(retain, nonatomic) SCNScene *scene; // @dynamic scene;
- (MISSING_TYPE *)unprojectPoint:(struct CGPoint)arg1 ontoPlaneWithTransform:(CDStruct_14d5dc5e)arg2;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)occlusionGeometryNodeForAnchor:(id)arg1;
- (id)nodeForAnchor:(id)arg1;
- (id)anchorForNode:(id)arg1;
@property(retain, nonatomic) ARSession *session;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <ARSCNViewDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

