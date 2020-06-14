//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, NSArray, NSMutableArray, NSSet;

@interface GEORouteSet : NSObject <NSSecureCoding>
{
    NSArray *_waypoints;
    int _mainTransportType;
    NSMutableArray *_pages;
    GEODirectionsRequest *_originalRequest;
    GEODirectionsResponse *_originalResponse;
    GEODirectionsRequest *_lastRerouteRequest;
    GEODirectionsResponse *_lastRerouteResponse;
    NSMutableArray *_routes;
    NSMutableArray *_routesAndContingencies;
    GEOComposedRoute *_preferredRoute;
    NSMutableArray *_advisoryNotices;
    NSMutableArray *_incidentsOffRoute;
    NSSet *_supportedTransportTypesForSubsequentRequests;
    _Bool _lazyLoad;
    long long _selectedRouteIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *incidentsOffRoute; // @synthesize incidentsOffRoute=_incidentsOffRoute;
@property(readonly, nonatomic) GEOComposedRoute *preferredRoute; // @synthesize preferredRoute=_preferredRoute;
@property(readonly, nonatomic) NSArray *routesAndContingencies; // @synthesize routesAndContingencies=_routesAndContingencies;
@property(readonly, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(readonly, nonatomic) GEODirectionsRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) int mainTransportType; // @synthesize mainTransportType=_mainTransportType;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *supportedTransportTypesForSubsequentRequests;
- (id)responseForRoute:(id)arg1;
- (id)requestForRoute:(id)arg1;
- (id)displayHints:(id)arg1;
- (id)alternateStartRoutesLookup:(id)arg1;
- (unsigned long long)indexOfSuggestedRoute:(id)arg1;
- (id)directionsResponseID:(id)arg1;
- (_Bool)isNavigable:(id)arg1;
- (unsigned long long)indexOfRouteInLazyRoutes:(id)arg1;
- (id)partialRouteAtIndex:(unsigned long long)arg1;
- (id)fullRouteAtIndex:(unsigned long long)arg1;
- (id)transitOptions:(id)arg1;
- (id)styleAttributes:(id)arg1;
- (id)routeAttributes:(id)arg1;
- (double)requestTime:(id)arg1;
- (id)_pageForRoute:(id)arg1;
- (void)_prependNewPage:(id)arg1;
- (void)_appendNewPage:(id)arg1;
- (void)_updatePage:(id)arg1;
- (void)addRouteForReroute:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)addRoutesForRequest:(id)arg1 response:(id)arg2;
- (void)_clearRoutes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 transport:(int)arg2 lazyLoad:(_Bool)arg3 selectedRouteIndex:(long long)arg4;

@end

