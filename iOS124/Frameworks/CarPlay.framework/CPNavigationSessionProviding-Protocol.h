//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPManeuver, CPTravelEstimates, NSArray, NSString;

@protocol CPNavigationSessionProviding <NSObject>
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;
- (void)showManeuvers:(NSArray *)arg1 usingDisplayStyles:(NSArray *)arg2;
- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(NSString *)arg2;
@end

