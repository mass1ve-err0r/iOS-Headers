//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNAnnoucementStrategy-Protocol.h>

@class MNAnnouncementPlan, MNGuidanceEventManager, NSArray;

__attribute__((visibility("hidden")))
@interface MNAnnouncementStrategyDelayCompressDrop : NSObject <MNAnnoucementStrategy>
{
    MNGuidanceEventManager *_manager;
    NSArray *_events;
    double _distance;
    double _speed;
    MNAnnouncementPlan *_plan;
}

@property(retain, nonatomic) MNAnnouncementPlan *plan; // @synthesize plan=_plan;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) __weak MNGuidanceEventManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)nextEvent;
- (void)_dropToResolveConflict:(id)arg1;
- (_Bool)_compressToResolveConflict:(id)arg1;
- (double)_canDelayEvent:(id)arg1;
- (_Bool)_delayToResolveConflict:(id)arg1;
- (double)_canAdvanceEvent:(id)arg1;
- (_Bool)_advanceToResolveConflict:(id)arg1;
- (void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
- (id)initWithManager:(id)arg1;

@end

