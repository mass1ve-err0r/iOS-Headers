//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class AVAsset, NSArray, NSDictionary, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface NUVideoSourceNode : NUSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loaded;
    NSURL *_URL;
    AVAsset *_asset;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _cleanAperture;
    long long _orientation;
    NSArray *_metadata;
    NSDictionary *_colorProperties;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

- (void).cxx_destruct;
- (_Bool)requiresAudioMix;
- (_Bool)requiresVideoComposition;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(_Bool)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
@property(readonly) CDStruct_996ac03c cleanAperture;
- (CDStruct_912cb5d2)pixelSize;
- (id)asset:(out id *)arg1;
- (_Bool)load:(out id *)arg1;
- (_Bool)_load:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

