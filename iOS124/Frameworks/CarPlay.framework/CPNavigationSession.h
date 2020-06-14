//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMapTemplate, CPTrip, NSArray;
@protocol CPNavigationSessionProviding;

@interface CPNavigationSession : NSObject
{
    NSArray *_upcomingManeuvers;
    CPTrip *_trip;
    id <CPNavigationSessionProviding> _provider;
    CPMapTemplate *_mapTemplate;
}

@property(nonatomic) __weak CPMapTemplate *mapTemplate; // @synthesize mapTemplate=_mapTemplate;
@property(retain, nonatomic) id <CPNavigationSessionProviding> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) CPTrip *trip; // @synthesize trip=_trip;
@property(copy, nonatomic) NSArray *upcomingManeuvers; // @synthesize upcomingManeuvers=_upcomingManeuvers;
- (void).cxx_destruct;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
- (id)_currentTripId;
- (id)initWithTrip:(id)arg1 provider:(id)arg2 mapTemplate:(id)arg3;

@end

