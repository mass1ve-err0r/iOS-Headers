//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class CLKUIShader, CLKUITexture, MISSING_TYPE;

@interface CLKUIQuad2D : CLKUIQuad
{
    float _alpha;
    float _rotation;
    float _dialRadius;
    CLKUITexture *_primaryTexture;
    CLKUITexture *_secondaryTexture;
    CLKUIShader *_shader;
    MISSING_TYPE *_sampleCenter;
    MISSING_TYPE *_sampleRadius;
}

+ (id)quad2DWithShader:(id)arg1;
@property(nonatomic) float dialRadius; // @synthesize dialRadius=_dialRadius;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) MISSING_TYPE *sampleRadius; // @synthesize sampleRadius=_sampleRadius;
@property(nonatomic) MISSING_TYPE *sampleCenter; // @synthesize sampleCenter=_sampleCenter;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) CLKUIShader *shader; // @synthesize shader=_shader;
@property(retain, nonatomic) CLKUITexture *secondaryTexture; // @synthesize secondaryTexture=_secondaryTexture;
@property(retain, nonatomic) CLKUITexture *primaryTexture; // @synthesize primaryTexture=_primaryTexture;
- (void).cxx_destruct;
- (id)initWithShader:(id)arg1;

@end

