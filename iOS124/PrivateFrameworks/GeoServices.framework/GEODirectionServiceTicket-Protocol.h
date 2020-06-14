//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedRoute, GEODirectionsRequest, NSArray, NSDictionary, NSNumber;

@protocol GEODirectionServiceTicket <NSObject>
@property(readonly, nonatomic) _Bool isDoom;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy, nonatomic) NSNumber *requestPriority;
@property(readonly, nonatomic) NSArray *waypoints;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute;
@property(readonly, nonatomic) _Bool isReroute;
@property(readonly, nonatomic) GEODirectionsRequest *request;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEODirectionsResponse *, NSError *, id <GEODirectionsError>))arg1 auditToken:(GEOApplicationAuditToken *)arg2 networkActivity:(void (^)(_Bool))arg3;
@end

