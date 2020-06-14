//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUtils/NSObject-Protocol.h>

@class FMFDevice, FMFFriendshipRequest, FMFHandle, FMFLocation, NSArray, NSError, NSSet, NSString;

@protocol FMFSessionDelegate <NSObject>

@optional
- (void)didUpdateFences:(NSSet *)arg1;
- (void)didUpdateFavoriteHandles:(NSArray *)arg1;
- (void)didReceiveServerError:(NSError *)arg1;
- (void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (void)didFailToHandleMappingPacket:(NSString *)arg1 error:(NSError *)arg2;
- (void)mappingPacketProcessingCompleted:(NSString *)arg1;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)didStopAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStartAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStopSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didStartSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (void)connectionError:(NSError *)arg1;
- (void)didFailToFetchLocationForHandle:(FMFHandle *)arg1 withError:(NSError *)arg2;
- (void)didReceiveLocation:(FMFLocation *)arg1;
@end

