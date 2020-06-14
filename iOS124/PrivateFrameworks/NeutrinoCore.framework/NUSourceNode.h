//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@protocol NUSourceDerivation;

@interface NUSourceNode : NURenderNode
{
    NURenderNode *_originalNode;
    id <NUSourceDerivation> _sourceDerivation;
}

@property(retain) id <NUSourceDerivation> sourceDerivation; // @synthesize sourceDerivation=_sourceDerivation;
@property __weak NURenderNode *originalNode; // @synthesize originalNode=_originalNode;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_addOrientationNode:(id)arg1 sourceSettings:(id)arg2 error:(out id *)arg3;
- (id)_addScaleNode:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4;
- (id)_addResampleNode:(id)arg1 subsampleNode:(id)arg2;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;
- (long long)normalizeSubsampleFactor:(long long)arg1;
@property(readonly) long long sourceOrientation;
- (_Bool)load:(out id *)arg1;
- (_Bool)isValid:(out id *)arg1;
@property(readonly) CDStruct_912cb5d2 pixelSize;
- (_Bool)isGeometryNode;
- (id)initWithSettings:(id)arg1;

@end

