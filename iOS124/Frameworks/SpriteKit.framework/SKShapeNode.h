//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSDictionary, SKShader, SKTexture, UIColor;

@interface SKShapeNode : SKNode
{
    struct SKCShapeNode *_skcShapeNode;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)shapeNodeWithSplinePoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
+ (id)shapeNodeWithTriangleA:(struct CGPoint)arg1 B:(struct CGPoint)arg2 C:(struct CGPoint)arg3;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)shapeNodeWithRectOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithRect:(struct CGRect)arg1;
+ (id)shapeNodeWithCircleOfRadius:(double)arg1;
+ (id)shapeNodeWithEllipseOfSize:(struct CGSize)arg1;
+ (id)shapeNodeWithEllipseInRect:(struct CGRect)arg1;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1 centered:(_Bool)arg2;
+ (id)shapeNodeWithPath:(struct CGPath *)arg1;
+ (_Bool)supportsSecureCoding;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double lineLength;
@property(nonatomic) double miterLimit;
@property(nonatomic) int lineJoin;
@property(nonatomic) int lineCap;
@property(retain, nonatomic) UIColor *strokeColor;
@property(retain, nonatomic) UIColor *fillColor;
@property(nonatomic) double lineWidth;
@property(nonatomic, getter=isAntialiased) _Bool antialiased;
@property(nonatomic) long long blendMode;
@property(nonatomic) double renderQualityRatio;
@property(retain, nonatomic) SKShader *strokeShader;
@property(retain, nonatomic) SKTexture *strokeTexture;
@property(retain, nonatomic) SKShader *fillShader;
@property(retain, nonatomic) SKTexture *fillTexture;
@property(nonatomic) double glowWidth;
- (_Bool)containsPoint:(struct CGPoint)arg1;
@property(nonatomic) const struct CGPath *path;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)_initialize;
- (_Bool)isEqualToNode:(id)arg1;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;

// Remaining properties
@property(copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;

@end

