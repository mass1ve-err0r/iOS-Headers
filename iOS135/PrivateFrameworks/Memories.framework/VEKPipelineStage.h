/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEKPipelineStage : NSObject {
    bool  _isCancelled;
    NSArray * _outputType;
    VEKProgress * _progress;
}

@property (readonly) NSArray *inputTypes;
@property bool isCancelled;
@property (readonly) NSArray *outputType;
@property (readonly) VEKProgress *progress;

- (void).cxx_destruct;
- (id)inputTypes;
- (bool)isCancelled;
- (id)outputType;
- (id)outputTypes;
- (id)progress;
- (id)runStageWithInput:(id)arg1;
- (void)setIsCancelled:(bool)arg1;

@end
