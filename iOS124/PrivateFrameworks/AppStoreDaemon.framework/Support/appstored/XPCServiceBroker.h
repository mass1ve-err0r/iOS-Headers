//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener, XPCServiceCatalog;
@protocol OS_dispatch_queue;

@interface XPCServiceBroker : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_activeClients;
    XPCServiceCatalog *_catalog;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCListener *_listener;
}

+ (id)newServerWithCatalog:(id)arg1 forMachServiceName:(id)arg2;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithCatalog:(id)arg1 andListener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

