//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsShape;

@protocol SCNPhysicsBodyJSExport <JSExport>
+ (id)bodyWithType:(long long)arg1 shape:(SCNPhysicsShape *)arg2;
+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
@property(nonatomic, getter=isAffectedByGravity) _Bool affectedByGravity;
@property(nonatomic) unsigned long long contactTestBitMask;
@property(nonatomic) unsigned long long collisionBitMask;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) double angularDamping;
@property(nonatomic) double damping;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic) struct SCNVector3 velocity;
@property(nonatomic) _Bool allowsResting;
@property(readonly, nonatomic) _Bool isResting;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
@property(nonatomic) double rollingFriction;
@property(nonatomic) double restitution;
@property(nonatomic) double friction;
@property(nonatomic) double charge;
@property(nonatomic) _Bool usesDefaultMomentOfInertia;
@property(nonatomic) struct SCNVector3 momentOfInertia;
@property(nonatomic) double mass;
@property(nonatomic) long long type;
- (id)copy;
- (void)resetTransform;
- (void)clearAllForces;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(_Bool)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(_Bool)arg3;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(_Bool)arg2;
@end

