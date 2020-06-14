//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitActivityCache : PBCodable <NSCopying>
{
    long long _activeHours;
    long long _briskMinutes;
    long long _cacheIndex;
    long long _endDate;
    long long _energyBurned;
    long long _energyBurnedGoal;
    long long _energyBurnedGoalDate;
    long long _startDate;
    long long _stepCount;
    long long _walkingAndRunningDistance;
    struct {
        unsigned int activeHours:1;
        unsigned int briskMinutes:1;
        unsigned int cacheIndex:1;
        unsigned int endDate:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int startDate:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
    } _has;
}

@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long energyBurnedGoalDate; // @synthesize energyBurnedGoalDate=_energyBurnedGoalDate;
@property(nonatomic) long long walkingAndRunningDistance; // @synthesize walkingAndRunningDistance=_walkingAndRunningDistance;
@property(nonatomic) long long energyBurnedGoal; // @synthesize energyBurnedGoal=_energyBurnedGoal;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
@property(nonatomic) long long activeHours; // @synthesize activeHours=_activeHours;
@property(nonatomic) long long briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) long long energyBurned; // @synthesize energyBurned=_energyBurned;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(nonatomic) _Bool hasEnergyBurnedGoalDate;
@property(nonatomic) _Bool hasWalkingAndRunningDistance;
@property(nonatomic) _Bool hasEnergyBurnedGoal;
@property(nonatomic) _Bool hasStepCount;
@property(nonatomic) _Bool hasActiveHours;
@property(nonatomic) _Bool hasBriskMinutes;
@property(nonatomic) _Bool hasEnergyBurned;
@property(nonatomic) _Bool hasCacheIndex;

@end

