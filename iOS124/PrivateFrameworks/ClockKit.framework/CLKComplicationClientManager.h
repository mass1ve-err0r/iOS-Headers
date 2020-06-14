//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate>
{
    NSMutableDictionary *_clientsByIdentifier;
    NSLock *_clientsByIdentifierLock;
    NSMutableDictionary *_waitForClientRegistriesByIdentifier;
    NSLock *_waitForClientRegistriesByIdentifierLock;
    NSMutableSet *_anonymousClients;
    NSLock *_anonymousClientsLock;
    NSMutableSet *_clientPIDs;
    NSLock *_clientPIDsLock;
    unsigned long long _nextWaitForClientTokenValue;
    NSLock *_nextWaitForClientTokenValueLock;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    CDUnknownBlockType _clientRegistrationHandler;
    CDUnknownBlockType _clientUnregistrationHandler;
}

+ (id)sharedClientManager;
@property(copy, nonatomic) CDUnknownBlockType clientUnregistrationHandler; // @synthesize clientUnregistrationHandler=_clientUnregistrationHandler;
@property(copy, nonatomic) CDUnknownBlockType clientRegistrationHandler; // @synthesize clientRegistrationHandler=_clientRegistrationHandler;
- (void).cxx_destruct;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_removeClient:(id)arg1;
- (void)_addClient:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(struct NSNumber *)arg2;
- (struct NSNumber *)waitForClientWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateClientsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *clientsByIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

