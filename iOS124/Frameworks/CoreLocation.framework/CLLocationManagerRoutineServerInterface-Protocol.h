//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/NSObject-Protocol.h>

@class CLLocation;

@protocol CLLocationManagerRoutineServerInterface <NSObject>
- (void)stopUpdatingPredictedApplications;
- (void)startUpdatingPredictedApplications;
- (void)fetchPredictedApplicationsAtLocation:(CLLocation *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end

