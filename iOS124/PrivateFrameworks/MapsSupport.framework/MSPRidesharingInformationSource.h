//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPRouteInformationSource-Protocol.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource>
{
    GEOComposedWaypoint *_startWaypoint;
    GEOComposedWaypoint *_endWaypoint;
}

@property(readonly, nonatomic, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(readonly, nonatomic, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
- (void).cxx_destruct;
- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;
- (id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
