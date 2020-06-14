//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import <MapsSupport/MSPHistoryEntryRoute-Protocol.h>

@class NSString;
@protocol MSPRouteInformationSource;

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute>
{
    id <MSPRouteInformationSource> _routeInformationSource;
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
@property(copy, nonatomic) id <MSPRouteInformationSource> routeInformationSource; // @synthesize routeInformationSource=_routeInformationSource;
- (void).cxx_destruct;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
@property(nonatomic, getter=navigationWasInterrupted) _Bool navigationInterrupted;
- (id)routeHandle;
- (long long)transportType;
- (id)endWaypoint;
- (id)startWaypoint;
- (id)_routeRequestStorage;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

