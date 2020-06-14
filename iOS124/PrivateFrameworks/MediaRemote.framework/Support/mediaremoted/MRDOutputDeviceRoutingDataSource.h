//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDAVRoutingDataSource.h"

@class AVOutputDeviceDiscoverySession, NSMutableArray;

@interface MRDOutputDeviceRoutingDataSource : MRDAVRoutingDataSource
{
    AVOutputDeviceDiscoverySession *_discoverySession;
    NSMutableArray *_activeReconnaissanceSessions;
}

- (void).cxx_destruct;
- (id)_activeSystemContext;
- (_Bool)unpickAirPlayRoutes;
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;
- (id)pickedRouteForCategory:(id)arg1;
- (id)pickedRoute;
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;
- (id)pickableRoutesForCategory:(id)arg1;
- (_Bool)currentRouteSupportsVolumeControl;
- (unsigned int)externalScreenType;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (unsigned int)discoveryMode;
- (id)init;

@end

