//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDMediaRemoteClientDelegate-Protocol.h"
#import "MRDPhoneCallControllerDelegate-Protocol.h"
#import "MRDVirtualAudioInputServerDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class FBSDisplayLayoutMonitor, MRDAVRoutingDataSource, MRDAVRoutingServer, MRDBackgroundTasks, MRDBrowsableContentServer, MRDExternalDeviceRemoteServer, MRDMediaRemoteClient, MRDNowPlayingServer, MRDRemoteControlServer, MRDTransactionServer, MRDVirtualAudioInputServer, MRDVolumeController, NSArray, NSMutableDictionary, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, MRDVirtualAudioInputServerDelegate, MRDPhoneCallControllerDelegate, MRDDiagnosticCollecting>
{
    NSObject<OS_xpc_object> *_listenerConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    MRDAVRoutingDataSource *_localRoutingDataSource;
    MRDNowPlayingServer *_nowPlayingServer;
    MRDVolumeController *_volumeController;
    MRDRemoteControlServer *_remoteControlServer;
    MRDBrowsableContentServer *_browsableContentServer;
    MRDExternalDeviceRemoteServer *_externalDeviceServer;
    MRDAVRoutingServer *_routingServer;
    MRDVirtualAudioInputServer *_virtualAudioInputServer;
    MRDTransactionServer *_transactionServer;
    MRDBackgroundTasks *_tasks;
    NSMutableDictionary *_activeClients;
    _Bool _shouldSendCommandsDuringPhoneCall;
    NSArray *_availableOrigins;
}

+ (id)server;
@property(readonly, nonatomic) _Bool shouldSendCommandsDuringPhoneCall; // @synthesize shouldSendCommandsDuringPhoneCall=_shouldSendCommandsDuringPhoneCall;
@property(readonly, nonatomic) MRDTransactionServer *transactionServer; // @synthesize transactionServer=_transactionServer;
@property(readonly, nonatomic) MRDAVRoutingServer *routingServer; // @synthesize routingServer=_routingServer;
@property(readonly, nonatomic) MRDRemoteControlServer *remoteControlServer; // @synthesize remoteControlServer=_remoteControlServer;
@property(readonly, nonatomic) MRDNowPlayingServer *nowPlayingServer; // @synthesize nowPlayingServer=_nowPlayingServer;
@property(readonly, nonatomic) NSArray *availableOrigins; // @synthesize availableOrigins=_availableOrigins;
- (void).cxx_destruct;
- (void)_restoreNowPlayingClientState;
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOrigin:(id)arg2;
- (_Bool)_internalMediaRemoteNotificationIsLegal:(id)arg1;
- (void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2;
- (void)collectDiagnostic:(id)arg1;
- (void)virtualAudioInputServer:(id)arg1 didUpdateRecordingState:(unsigned int)arg2 forDevice:(id)arg3;
- (void)mediaRemoteClientInvalidated:(id)arg1;
- (void)_handleCollectClientDiagnosticsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleCollectDiagnosticMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetSupportsSystemPairingMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handlePing:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetMediaAppIsInstalledMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleAdjustSystemVolumeByStepMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2;
- (void)_collectDiagnosticFromClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (void)_clientDidOpenConnection:(id)arg1;
@property(readonly, nonatomic) RPCompanionLinkClient *sharedCompanionLinkClient;
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *sharedDisplayMonitor;
@property(readonly, nonatomic) MRDMediaRemoteClient *daemonClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *frontmostClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemMediaClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *localNowPlayingClient;
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 predicate:(CDUnknownBlockType)arg3;
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2;
- (void)postClientNotificationNamed:(id)arg1 forPlayerPath:(id)arg2 userInfo:(id)arg3 predicate:(CDUnknownBlockType)arg4;
- (void)postClientNotificationNamed:(id)arg1 forPlayerPath:(id)arg2 userInfo:(id)arg3;
- (void)postClientNotificationNamed:(id)arg1 forPlayerPath:(id)arg2 predicate:(CDUnknownBlockType)arg3;
- (void)postClientNotificationNamed:(id)arg1 forPlayerPath:(id)arg2;
- (void)postClientNotificationNamed:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)postClientNotificationNamed:(id)arg1;
- (unsigned int)resolveContextualCommandForCurrentNowPlaying:(unsigned int)arg1;
- (id)clientForPlayerPath:(id)arg1;
- (id)canBeNowPlayingClients;
- (id)allClients;
- (id)mostRecentPlayingClient;
- (id)mostRecentCanBeNowPlayingClient;
- (id)clientWithRegisteredCustomOrigin:(id)arg1;
- (id)clientForBundleIdentifier:(id)arg1;
- (id)clientForPID:(int)arg1;
- (void)_saveClientsList;
- (void)removeClientForPID:(int)arg1;
- (void)addClient:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)initializeServer;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

