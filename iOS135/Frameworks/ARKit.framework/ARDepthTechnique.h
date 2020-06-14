/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDepthTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    <MTLCommandQueue> * _commandQueue;
    long long  _currentFrameIndex;
    NSMutableArray * _derivatives;
    <MTLDevice> * _device;
    NSMutableArray * _features;
    ADEspressoJasperColorInferenceDescriptor * _inferenceDescriptor;
    struct __CVBuffer { } * _jasperInputBuffer;
    unsigned long long  _layout;
    ADLKTOpticalFlow * _lkt;
    ADLKTTexturesDescriptor * _lktDescriptor;
    NSObject<OS_dispatch_queue> * _lktProcessingQueue;
    struct __CVPixelBufferPool { } * _normalPixelBufferPool;
    struct __CVBuffer { } * _opticalFlowOutputBuffer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _opticalFlowOutputBufferLock;
    struct __CVPixelBufferPool { } * _opticalFlowPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputAlphaPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _outputPixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    ADJasperColorPipeline * _pipeline;
    ADJasperColorPipelineParameters * _pipelineParameters;
    struct __CVBuffer { } * _previousDepthBuffer;
    long long  _prioritization;
    NSMutableArray * _pyramids;
    ARImageRotationTechnique * _rotationTechnique;
    struct __CVPixelBufferPool { } * _scaledConfidenceOutputPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledDepthOutputPixelBufferPool;
    long long  _storedFramesCount;
    bool  _useTemporalSmoothing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (nonatomic) struct __CVBuffer { }*opticalFlowOutputBuffer;
@property (nonatomic, readonly) ADJasperColorPipelineParameters *pipelineParameters;
@property (nonatomic, readonly) long long prioritization;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allocateLKTBuffers;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (struct __CVBuffer { }*)_executeLKTWithFrame:(struct __CVBuffer { }*)arg1;
- (void)_initLKT;
- (id)_rotatedPixelBufferImageData:(struct __CVBuffer { }*)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)dealloc;
- (id)init;
- (id)initWithPrioritization:(long long)arg1 temporalSmoothing:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)networkModeDidChange:(id)arg1 toMode:(id)arg2;
- (id)networkModesForOrientation:(long long)arg1;
- (struct __CVBuffer { }*)opticalFlowOutputBuffer;
- (id)pipelineParameters;
- (int)prepareBindInputBuffer:(unsigned long long)arg1 withName:(id)arg2;
- (long long)prioritization;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setOpticalFlowOutputBuffer:(struct __CVBuffer { }*)arg1;

@end