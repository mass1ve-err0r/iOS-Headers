//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppInstallObserverManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_clientToObserverServiceNameMap;
    NSMutableDictionary *_serviceRespondsToMap;
    NSMutableDictionary *_serviceToConnectionMap;
    NSMutableDictionary *_clientToObserverEndpointMap;
    NSMutableDictionary *_listenerRespondsToMap;
    NSHashTable *_clientConnections;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSHashTable *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(readonly, nonatomic) NSMutableDictionary *listenerRespondsToMap; // @synthesize listenerRespondsToMap=_listenerRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverEndpointMap; // @synthesize clientToObserverEndpointMap=_clientToObserverEndpointMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceToConnectionMap; // @synthesize serviceToConnectionMap=_serviceToConnectionMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceRespondsToMap; // @synthesize serviceRespondsToMap=_serviceRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverServiceNameMap; // @synthesize clientToObserverServiceNameMap=_clientToObserverServiceNameMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)promise:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)promiseDidCompleteSuccessfully:(id)arg1;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1;
- (void)coordinatorDidInstallPlaceholder:(id)arg1;
- (void)coordinatorShouldBeginRestoringUserData:(id)arg1;
- (void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinatorShouldPause:(id)arg1;
- (void)coordinatorShouldResume:(id)arg1;
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;
- (void)coordinatorShouldPrioritize:(id)arg1;
- (void)_callHandlerForClientConnections:(CDUnknownBlockType)arg1;
- (void)_messageInterestedServicesForClientIDs:(id)arg1 forMethod:(unsigned long long)arg2 callMethodOnProxy:(CDUnknownBlockType)arg3;
- (void)_onQueue_callRemoteObjectProxyForServiceEndpoint:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;
- (id)_onQueue_connectionForObserverEndpoint:(id)arg1;
- (void)_onQueue_callRemoteObjectProxyForServiceName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;
- (id)_onQueue_connectionForServiceName:(id)arg1;
- (void)unregisterClientConnection:(id)arg1;
- (void)registerClientConnection:(id)arg1;
- (void)registerListenerEndpoint:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)registerMachServiceName:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_saveMapping;
- (id)init;
@property(readonly, nonatomic) NSURL *saveURL; // @dynamic saveURL;

@end

