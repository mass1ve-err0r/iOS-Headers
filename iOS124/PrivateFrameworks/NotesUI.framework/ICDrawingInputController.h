//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingCommandData;
@protocol ICDrawingInputControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICDrawingInputController : NSObject
{
    vector_930301b0 _drawPoints;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    id <ICDrawingInputControllerDelegate> _delegate;
    ICDrawingCommandData *_currentCommand;
    long long _currentInputType;
    _Bool _ended;
    double _inputScale;
    float _smoothingKernel[7];
    long long _immutableCount;
    vector_930301b0 _updatedDrawPoints;
    _Bool _drawingEndedButNotFinished;
    NSObject<OS_dispatch_semaphore> *_drawingWaitForFinishSemaphore;
    _Bool _isSnappedToRuler;
    _Bool _useRuler;
    _Bool _isSnappedToRulerTopSide;
    _Bool _canSnapToRuler;
    double _eraserIndicatorAlpha;
    double _rulerWidth;
    double _strokeMaxForce;
    double _touchSensitivity;
    struct ICDrawingPixelSmoothingFilter *_pixelSmoothingFilter;
    struct ICDrawingPointReductionFilter *_pointReductionFilter;
    struct ICDrawingStartHookFilter *_startHookFilter;
    struct ICDrawingEndHookFilter *_endHookFilter;
    struct ICDrawingVelocityCalculationFilter *_velocityFilter;
    struct ICDrawingInputSmoother *_inputSmoother;
    struct ICDrawingInputProviderInitial *_inputProvider;
    struct ICDrawingInputToOutputFilter *_inputToOutputFilter;
    struct ICDrawingAzimuthFilter *_azimuthFilter;
    struct ICDrawingEndCapsFilter *_endCapFilter;
    struct ICDrawingRulerExtremaFilter *_rulerExtremaFilter;
    struct ICDrawingEstimatedAltitudeAndAzimuthFilter *_estimatedAltitudeAndAzimuthFilter;
    struct CGPoint _lastPoint;
    struct CGAffineTransform _rulerTransform;
}

+ (void)loadDefaults;
+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) struct ICDrawingEstimatedAltitudeAndAzimuthFilter *estimatedAltitudeAndAzimuthFilter; // @synthesize estimatedAltitudeAndAzimuthFilter=_estimatedAltitudeAndAzimuthFilter;
@property(nonatomic) struct ICDrawingRulerExtremaFilter *rulerExtremaFilter; // @synthesize rulerExtremaFilter=_rulerExtremaFilter;
@property(nonatomic) struct ICDrawingEndCapsFilter *endCapFilter; // @synthesize endCapFilter=_endCapFilter;
@property(nonatomic) struct ICDrawingAzimuthFilter *azimuthFilter; // @synthesize azimuthFilter=_azimuthFilter;
@property(nonatomic) struct ICDrawingInputToOutputFilter *inputToOutputFilter; // @synthesize inputToOutputFilter=_inputToOutputFilter;
@property(nonatomic) struct ICDrawingInputProviderInitial *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(nonatomic) struct ICDrawingInputSmoother *inputSmoother; // @synthesize inputSmoother=_inputSmoother;
@property(nonatomic) struct ICDrawingVelocityCalculationFilter *velocityFilter; // @synthesize velocityFilter=_velocityFilter;
@property(nonatomic) struct ICDrawingEndHookFilter *endHookFilter; // @synthesize endHookFilter=_endHookFilter;
@property(nonatomic) struct ICDrawingStartHookFilter *startHookFilter; // @synthesize startHookFilter=_startHookFilter;
@property(nonatomic) struct ICDrawingPointReductionFilter *pointReductionFilter; // @synthesize pointReductionFilter=_pointReductionFilter;
@property(nonatomic) struct ICDrawingPixelSmoothingFilter *pixelSmoothingFilter; // @synthesize pixelSmoothingFilter=_pixelSmoothingFilter;
@property(nonatomic) double touchSensitivity; // @synthesize touchSensitivity=_touchSensitivity;
@property struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) double strokeMaxForce; // @synthesize strokeMaxForce=_strokeMaxForce;
@property(nonatomic) _Bool canSnapToRuler; // @synthesize canSnapToRuler=_canSnapToRuler;
@property(nonatomic) _Bool isSnappedToRulerTopSide; // @synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide;
@property(nonatomic) double rulerWidth; // @synthesize rulerWidth=_rulerWidth;
@property(nonatomic) _Bool useRuler; // @synthesize useRuler=_useRuler;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property(nonatomic) double eraserIndicatorAlpha; // @synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha;
@property _Bool isSnappedToRuler; // @synthesize isSnappedToRuler=_isSnappedToRuler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEndedWithPreCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)drawingAddPoint:(CDStruct_f17e9403)arg1;
- (void)drawingAddPoints:(vector_930301b0)arg1;
- (void)removePredictedTouches;
- (void)updateImmutableCount;
- (void)drawingUpdateAllPoints;
- (void)drawingUpdatePoint:(CDStruct_f17e9403)arg1;
- (void)handleMarkerStartCapPoint:(CDStruct_47a7c924 *)arg1 forInput:(CDStruct_f17e9403 *)arg2;
- (CDStruct_47a7c924)outputPoint:(CDStruct_f17e9403)arg1 forCommandType:(unsigned int)arg2 baseValues:(CDStruct_47a7c924)arg3;
- (CDStruct_47a7c924)outputCurrentCommandPoint:(CDStruct_f17e9403)arg1;
- (CDStruct_47a7c924)markerOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)pencilOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)eraserOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_47a7c924)penOutputPoint:(CDStruct_f17e9403)arg1 baseValues:(CDStruct_47a7c924)arg2;
- (CDStruct_f17e9403)calculateVelocityForNewPoint:(CDStruct_f17e9403)arg1 previousPoint:(CDStruct_f17e9403)arg2;
- (CDStruct_f17e9403)calculateVelocityForFirstPoint:(CDStruct_f17e9403)arg1;
- (void)reset;
- (unsigned long long)copyInputUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector_930301b0 *)arg2;
- (vector_930301b0 *)getInputUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (vector_d46ea067 *)getUpdatedRangeFromIndex:(inout unsigned long long *)arg1;
- (ICDrawingInputProvider_d48c6870 *)outputFilter;
@property(readonly) _Bool lastPointIsMasked;
- (void)updateRulerSnapping;
- (struct CGPoint)snapPointToRuler:(struct CGPoint)arg1;
- (void)maskToRuler;
- (void)snapToRuler;
- (_Bool)shouldSnapPointToRuler:(struct CGPoint)arg1;
- (double)distanceToRulerCenter:(struct CGPoint)arg1;
- (struct CGPoint)getRulerSnapLineOriginAndTangent:(struct CGPoint *)arg1 andNormal:(struct CGPoint *)arg2;
- (double)rulerOffset;
- (void)snapToRuler:(struct CGAffineTransform)arg1 width:(double)arg2;
- (CDStruct_39925896)parametersforCommandType:(unsigned int)arg1;
- (CDStruct_47a7c924)baseValuesforCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (double)baseRadiusForCommandType:(unsigned int)arg1 inputType:(long long)arg2;
- (void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(CDUnknownBlockType)arg3;
- (void)setInputScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

