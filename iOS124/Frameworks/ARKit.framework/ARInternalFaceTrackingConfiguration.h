//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@interface ARInternalFaceTrackingConfiguration : ARConfiguration
{
    _Bool _useAlternativeResources;
}

+ (id)supportedVideoFormats;
+ (_Bool)isSupported;
+ (id)new;
@property(nonatomic) _Bool useAlternativeResources; // @synthesize useAlternativeResources=_useAlternativeResources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)renderingTechnique;
- (id)techniques;
- (void)setMirroredFrameOutput:(_Bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(_Bool)arg1;
- (id)init;

@end

