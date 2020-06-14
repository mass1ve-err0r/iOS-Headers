//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsNetworkRequester-Protocol.h>

@class NSString;

@interface MapsSuggestionsNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>
{
}

- (_Bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
