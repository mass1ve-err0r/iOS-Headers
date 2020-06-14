//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBCPlaybackPositionServiceProtocol-Protocol.h"
#import "SBCPlaybackPositionServiceProtocol_Internal-Protocol.h"

@class NSString, NSXPCConnection, SBCClientConfiguration, SBDDomainSyncServiceHandler, SBDDomainValueServiceHandler;
@protocol OS_dispatch_queue, SBCPlaybackPositionClientProtocol;

@interface SBDPlaybackPositionService : NSObject <SBCPlaybackPositionServiceProtocol_Internal, SBCPlaybackPositionServiceProtocol>
{
    NSXPCConnection *_XPCConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id <SBCPlaybackPositionClientProtocol> _clientProxy;
    SBDDomainSyncServiceHandler *_syncHandler;
    SBDDomainValueServiceHandler *_valueHandler;
    SBCClientConfiguration *_clientConfiguration;
}

+ (id)serviceForXPCConnection:(id)arg1;
@property(readonly, nonatomic) SBCClientConfiguration *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property(readonly, nonatomic) SBDDomainValueServiceHandler *valueHandler; // @synthesize valueHandler=_valueHandler;
@property(readonly, nonatomic) SBDDomainSyncServiceHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(readonly, nonatomic) id <SBCPlaybackPositionClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void).cxx_destruct;
- (void)_sendValueHandlerMessageWithBlock:(CDUnknownBlockType)arg1;
- (void)_sendSyncHandlerMessageWithBlock:(CDUnknownBlockType)arg1;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)setClientConfiguration:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

