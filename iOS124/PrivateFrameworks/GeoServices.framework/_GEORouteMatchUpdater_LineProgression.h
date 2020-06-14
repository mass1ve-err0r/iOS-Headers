//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater
{
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate _startRouteCoordinate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2;

@end

