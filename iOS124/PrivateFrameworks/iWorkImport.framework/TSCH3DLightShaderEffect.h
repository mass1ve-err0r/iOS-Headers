//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

__attribute__((visibility("hidden")))
@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect
{
    unsigned long long mLightCount;
}

+ (id)effectWithLightCount:(unsigned long long)arg1;
+ (void)updatePackageState:(const struct LightingPackageShaderEffectState *)arg1 effectsStates:(id)arg2;
+ (void)createStateInEffectsStates:(id)arg1;
+ (Class)stateClass;
- (void)uploadLightDirectionalWithUploader:(id)arg1 effectsStates:(id)arg2;
- (void)uploadLightPositionablesWithUploader:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithLightCount:(unsigned long long)arg1;

@end

