//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        struct SCNMatrix4 frameA;
        SCNPhysicsBody *bodyB;
        struct SCNMatrix4 frameB;
        double maximumAngularLimit1;
        double maximumAngularLimit2;
        double maximumTwistAngle;
    } _definition;
    struct btConeTwistConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

+ (id)jointWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;
+ (id)jointWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
@property(nonatomic) double maximumTwistAngle;
@property(nonatomic) double maximumAngularLimit2;
@property(nonatomic) double maximumAngularLimit1;
@property(nonatomic) struct SCNMatrix4 frameB;
@property(nonatomic) struct SCNMatrix4 frameA;
@property(readonly, nonatomic) SCNPhysicsBody *bodyB;
@property(readonly, nonatomic) SCNPhysicsBody *bodyA;
- (id)initWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;
- (id)initWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
- (void)dealloc;

@end

