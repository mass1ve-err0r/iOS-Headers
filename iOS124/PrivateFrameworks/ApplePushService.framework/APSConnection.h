//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface APSConnection : NSObject
{
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned long long _messageSize;
    unsigned long long _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    _Bool _portNameIsBundleId;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    _Bool _enableCriticalReliability;
    _Bool _enableStatusNotifications;
    _Bool _isConnected;
    _Bool _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned long long _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    NSString *_processName;
    _Bool _isShutdown;
}

+ (void)notifySafeToSendFilter;
+ (void)_setTokenState;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)invalidateDeviceIdentity;
+ (void)requestCourierConnection;
+ (id)geoRegion;
+ (double)serverTime;
+ (void)_blockingXPCCallWithArgumentBlock:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)_flushIdentityCache;
+ (struct __SecIdentity *)copyIdentity;
+ (void)_safelyCancelAndReleaseConnection:(id)arg1;
+ (void)_safelyCancelAndReleaseAfterBarrierConnection:(id)arg1;
+ (_Bool)isValidEnvironment:(id)arg1;
@property(readonly, nonatomic) _Bool isShutdown; // @synthesize isShutdown=_isShutdown;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)confirmReceiptForMessage:(id)arg1;
- (void)requestKeepAlive;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)sendFakeMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)_sendOutgoingMessage:(id)arg1 fake:(_Bool)arg2;
- (_Bool)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 checkpointTraceData:(id)arg2 error:(id)arg3;
- (void)_deliverConnectionStatusFromDealloc:(_Bool)arg1;
- (void)_deliverConnectionStatusChange:(_Bool)arg1;
- (void)_deliverPublicToken:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_dispatch_async_to_ivarQueue:(CDUnknownBlockType)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)setEnableStatusNotifications:(_Bool)arg1;
- (void)_setEnableStatusNotifications:(_Bool)arg1 sendToDaemon:(_Bool)arg2;
- (void)setEnableCriticalReliability:(_Bool)arg1;
- (void)_setEnableCriticalReliability:(_Bool)arg1 sendToDaemon:(_Bool)arg2;
- (_Bool)isConnected;
@property(nonatomic) _Bool usesAppLaunchStats;
- (void)_setUsesAppLaunchStats:(_Bool)arg1 sendToDaemon:(_Bool)arg2;
@property(nonatomic) unsigned long long largeMessageSize;
@property(nonatomic) unsigned long long messageSize;
@property(readonly, retain, nonatomic) NSData *publicToken;
- (void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1;
- (id)opportunisticTopics;
- (id)ignoredTopics;
- (id)enabledTopics;
- (void)setIgnoredTopics:(id)arg1;
- (void)setOpportunisticTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(_Bool)arg4;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(_Bool)arg4;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_disconnectFromDealloc;
- (void)_disconnect;
- (void)_disconnectOnIvarQueue;
- (void)_cancelConnection;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_handleEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <APSConnectionDelegate> delegate;
- (void)dealloc;
- (void)_shutdownFromDealloc;
- (void)shutdown;
- (void)_shutdownOnIvarQueue;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 launchBundleIdOnDemand:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;

@end

