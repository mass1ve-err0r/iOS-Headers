//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUMuteAudioNode : NURenderNode
{
}

- (_Bool)requiresAudioMix;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithInput:(id)arg1;

@end

