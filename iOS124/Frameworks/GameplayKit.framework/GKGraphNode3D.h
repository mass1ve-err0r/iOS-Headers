//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKGraphNode.h>

@class MISSING_TYPE;

@interface GKGraphNode3D : GKGraphNode
{
    struct GKCGraphNode3D *_cGraphNode3D;
}

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithPoint: /* Error: Ran out of types for this method. */;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)init;
- (id)initWithPoint: /* Error: Ran out of types for this method. */;
- (void)deleteCGraphNode;
@property(nonatomic) MISSING_TYPE *position;
- (struct GKCGraphNode *)makeCGraphNode;
- (struct GKCGraphNode3D *)cGraphNode3D;

@end

