//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARSessionObserving-Protocol.h"
#import "CRCarPlayNavigationOwnersService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CARRouteGuidanceiAPSession, CARSessionStatus, NSMutableOrderedSet, NSString;

@interface CRCarPlayNavigationOwnersServiceAgent : NSObject <CARSessionObserving, NSXPCListenerDelegate, CRCarPlayNavigationOwnersService>
{
    _Bool _cachedDoWeOwnNavigation;
    CARSessionStatus *_sessionStatus;
    NSMutableOrderedSet *_owners;
    CARRouteGuidanceiAPSession *_iAPRouteGuidanceSession;
    unsigned long long _maximumConcurrentNavigationOwners;
}

@property(nonatomic) unsigned long long maximumConcurrentNavigationOwners; // @synthesize maximumConcurrentNavigationOwners=_maximumConcurrentNavigationOwners;
@property(nonatomic) _Bool cachedDoWeOwnNavigation; // @synthesize cachedDoWeOwnNavigation=_cachedDoWeOwnNavigation;
@property(retain, nonatomic) CARRouteGuidanceiAPSession *iAPRouteGuidanceSession; // @synthesize iAPRouteGuidanceSession=_iAPRouteGuidanceSession;
@property(retain, nonatomic) NSMutableOrderedSet *owners; // @synthesize owners=_owners;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void).cxx_destruct;
- (_Bool)_navigationOwnerExistsForIdentifier:(id)arg1;
- (void)fetchNavigationOwnerWithReply:(CDUnknownBlockType)arg1;
- (void)_updateRouteGuidanceToLastIdentifier;
- (void)removeNavigationOwnerWithIdentifier:(id)arg1;
- (void)addNavigationOwnerWithIdentifier:(id)arg1;
- (void)_navigationOwnershipChangedFromCar:(id)arg1;
- (void)_updateNavigationStateForRemoval;
- (void)_updateOwnershipToiOS;
- (_Bool)_doWeHaveOwners;
- (void)_removeOwnersForConnection:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

