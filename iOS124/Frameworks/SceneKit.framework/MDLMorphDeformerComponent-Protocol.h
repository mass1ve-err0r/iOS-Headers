//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/MDLComponent-Protocol.h>

@class MDLAnimatedScalarArray, NSArray;

@protocol MDLMorphDeformerComponent <MDLComponent>
@property(readonly, nonatomic) MDLAnimatedScalarArray *weights;
@property(readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property(readonly, nonatomic) NSArray *shapeSetTargetWeights;
@property(readonly, nonatomic) NSArray *targetShapes;
@end

