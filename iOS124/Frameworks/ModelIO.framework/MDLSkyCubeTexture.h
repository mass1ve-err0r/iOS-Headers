//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@class MISSING_TYPE;

@interface MDLSkyCubeTexture : MDLTexture
{
    float _turbidity;
    float _sunElevation;
    float _sunAzimuth;
    float _upperAtmosphereScattering;
    float _groundAlbedo;
    float _gamma;
    float _exposure;
    float _brightness;
    float _contrast;
    float _saturation;
    MISSING_TYPE *_highDynamicRangeCompression;
    float _highDynamicRangeCompressionLimit;
    struct CGColor *_groundColor;
    struct SkyDescriptor *_sky;
    float _horizonElevation;
}

@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
@property(nonatomic) float gamma; // @synthesize gamma=_gamma;
@property(nonatomic) float horizonElevation; // @synthesize horizonElevation=_horizonElevation;
@property(nonatomic) MISSING_TYPE *highDynamicRangeCompression; // @synthesize highDynamicRangeCompression=_highDynamicRangeCompression;
@property(nonatomic) float saturation; // @synthesize saturation=_saturation;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(nonatomic) float groundAlbedo; // @synthesize groundAlbedo=_groundAlbedo;
@property(nonatomic) float upperAtmosphereScattering; // @synthesize upperAtmosphereScattering=_upperAtmosphereScattering;
@property(nonatomic) float sunAzimuth; // @synthesize sunAzimuth=_sunAzimuth;
@property(nonatomic) float sunElevation; // @synthesize sunElevation=_sunElevation;
@property(nonatomic) float turbidity; // @synthesize turbidity=_turbidity;
- (void)updateTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 upperAtmosphereScattering:(float)arg6 groundAlbedo: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 sunAzimuth:(float)arg6 upperAtmosphereScattering:(float)arg7 groundAlbedo: /* Error: Ran out of types for this method. */;
@property(nonatomic) struct CGColor *groundColor;

@end

