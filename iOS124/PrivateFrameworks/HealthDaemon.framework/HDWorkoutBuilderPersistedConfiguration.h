//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDDeviceEntity, HDSourceEntity, HKQuantity, HKWorkoutConfiguration, NSString, NSUUID;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying>
{
    NSUUID *_builderIdentifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    HDSourceEntity *_sourceEntity;
    NSString *_sourceVersion;
    HDDeviceEntity *_deviceEntity;
    unsigned long long _goalType;
    HKQuantity *_goal;
}

@property(copy, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(retain, nonatomic) HDDeviceEntity *deviceEntity; // @synthesize deviceEntity=_deviceEntity;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
@property(copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(copy, nonatomic) NSUUID *builderIdentifier; // @synthesize builderIdentifier=_builderIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

