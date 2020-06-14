//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class FMFSession, NSString;

__attribute__((visibility("hidden")))
@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol>
{
    FMFSession *_session;
}

@property(nonatomic) __weak FMFSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)abPreferencesDidChange;
- (oneway void)abDidChange;
- (oneway void)didUpdateFences:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;
- (oneway void)modelDidLoad;
- (id)initWithFMFSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

