//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry
{
    unsigned int _isPresentationInstance:1;
    unsigned int _usesCustomScaleFactor:1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    unsigned long long _reflectionCategoryBitMask;
    double _width;
    double _length;
    float _reflectionResolutionScaleFactor;
    unsigned long long _reflectionSampleCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)floor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (void)setReflectionFallOffStart:(double)arg1;
- (double)reflectionFallOffEnd;
- (double)reflectionFallOffStart;
@property(nonatomic) double reflectivity;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (unsigned long long)reflectionSampleCount;
@property(nonatomic) double reflectionResolutionScaleFactor;
@property(nonatomic) double reflectionFalloffStart;
@property(nonatomic) double reflectionFalloffEnd;
@property(nonatomic) double length;
- (double)height;
- (void)setHeight:(double)arg1;
@property(nonatomic) double width;
@property(nonatomic) unsigned long long reflectionCategoryBitMask;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DFloor *)floorRef;
- (void)dealloc;
- (id)initWithFloorGeometryRef:(struct __C3DFloor *)arg1;
- (id)init;
- (void)_syncObjCModel;

@end

