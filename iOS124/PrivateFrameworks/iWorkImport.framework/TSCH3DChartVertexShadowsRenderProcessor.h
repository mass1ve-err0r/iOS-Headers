//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCH3DChartVertexShadowsRenderProcessor : TSCH3DRetargetRenderProcessor
{
    NSArray *mShadowsEffects;
}

- (void)submit:(id)arg1;
- (long long)texture:(id)arg1 resource:(id)arg2 attributes:(const struct TextureAttributes *)arg3;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)dealloc;
- (id)init;
- (id)p_effects;

@end

