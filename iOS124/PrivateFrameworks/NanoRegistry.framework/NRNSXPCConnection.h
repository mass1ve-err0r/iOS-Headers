//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCConnectionProtocol-Protocol.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier;
- (void)_setQueue:(id)arg1;
- (void)invalidate;
- (void)suspend;
- (void)resume;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) id remoteObjectProxy;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(retain, nonatomic) id exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)valueForEntitlement:(id)arg1;
@property(readonly, retain, nonatomic) NSString *processName;
- (void)runCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

