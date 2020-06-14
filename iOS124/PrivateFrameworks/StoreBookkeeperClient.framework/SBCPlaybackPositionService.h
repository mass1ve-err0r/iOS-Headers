//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeperClient/SBCXPCService.h>

#import <StoreBookkeeperClient/SBCPlaybackPositionServiceProtocol-Protocol.h>

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>
{
    _Bool _usingPlaybackPositions;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
}

+ (Class)XPCServiceInterfaceClass;
+ (id)serviceForValueDomain:(id)arg1;
+ (id)serviceForSyncDomain:(id)arg1;
+ (id)_serviceForPlaybackPositionDomain:(id)arg1;
@property(readonly) _Bool usingPlaybackPositions; // @synthesize usingPlaybackPositions=_usingPlaybackPositions;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
- (void).cxx_destruct;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (void)validateConnectionConfiguration;
- (void)didConnectToService;
- (id)initWithPlaybackPositionDomain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

