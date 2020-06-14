//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode
{
    NSString *_filterName;
}

@property(readonly) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
- (_Bool)requiresVideoComposition;
- (void)nu_updateDigest:(id)arg1;
- (id)descriptionSubClassHook;
- (unsigned long long)hash;
- (_Bool)isEqualToRenderNode:(id)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (_Bool)isGeometryNode;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

