//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken;
@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject
{
    id <GEORouteManagerDelegate> _delegate;
    GEOApplicationAuditToken *_auditToken;
}

+ (void)setShouldRequestServerLatencyInfo:(_Bool)arg1;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <GEORouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchDirectionsForTicket:(id)arg1 routeSet:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addedRoutesToRouteSet:(id)arg1;
- (id)refineErrorFromServerError:(id)arg1 directionsError:(id)arg2;
- (void)handleError:(id)arg1 directionsError:(id)arg2 forTicket:(id)arg3;
- (void)handleResponse:(id)arg1 routeSet:(id)arg2 forTicket:(id)arg3;

@end

