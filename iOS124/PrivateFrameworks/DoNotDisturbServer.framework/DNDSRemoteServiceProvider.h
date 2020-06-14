//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDRemoteServiceServerProtocol-Protocol.h>
#import <DoNotDisturbServer/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCListener;
@protocol DNDSRemoteServiceProviderDelegate, OS_dispatch_queue;

@interface DNDSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, DNDRemoteServiceServerProtocol>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_clientConnectionQueue;
    NSMutableDictionary *_clientConnectionDetailsByIdentifier;
    id <DNDSRemoteServiceProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <DNDSRemoteServiceProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_queue_handleModeAssertionInvalidations:(id)arg1;
- (id)_queue_activeModeAssertionWithClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_activeModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_queue_invalidateAllActiveModeAssertionsWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (id)_invalidateAllActiveModeAssertionsWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (id)_queue_invalidateActiveModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 reason:(unsigned long long)arg3 error:(id *)arg4;
- (id)_invalidateActiveModeAssertionForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_queue_takeModeAssertionWithDetails:(id)arg1 clientConnection:(id)arg2 clientIdentifier:(id)arg3 error:(id *)arg4 invalidation:(id *)arg5;
- (id)_takeModeAssertionWithDetails:(id)arg1 clientConnection:(id)arg2 clientIdentifier:(id)arg3 error:(id *)arg4 invalidation:(id *)arg5;
- (_Bool)_queue_registerWantsAssertionUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_registerWantsAssertionUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_queue_registerWantsSettingsUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_registerWantsSettingsUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_queue_registerWantsStateUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_registerWantsStateUpdatesForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (void)_queue_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (void)_unregisterConnectionDetailsForClientConnection:(id)arg1;
- (id)_queue_getConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_queue_registerConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (id)_registerConnectionDetailsForClientConnection:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setScheduleSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getScheduleSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPhoneCallBypassSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBehaviorSettings:(id)arg1 withRequestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getBehaviorSettingsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForStateUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryStateWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateActiveModeAssertionWithRequestDetails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)takeModeAssertionWithDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resolveBehaviorForEventDetails:(id)arg1 requestDetails:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleUpdatedScheduleSettings:(id)arg1;
- (void)handleUpdatedPhoneCallBypassSettings:(id)arg1;
- (void)handleUpdatedBehaviorSettings:(id)arg1;
- (void)handleModeAssertionInvalidations:(id)arg1;
- (void)handleStateUpdate:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

