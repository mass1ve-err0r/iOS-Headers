//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDAVHostedDiscoverySessionDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class MRDAVHostedRoutingController, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRDAVHostedRoutingService : NSObject <NSXPCListenerDelegate, MRDAVHostedDiscoverySessionDelegate, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCListener *_anonymousListener;
    NSMutableSet *_hostedDiscoverySessions;
    MRDAVHostedRoutingController *_hostedRoutingController;
}

@property(readonly, nonatomic) MRDAVHostedRoutingController *hostedRoutingController; // @synthesize hostedRoutingController=_hostedRoutingController;
- (void).cxx_destruct;
- (void)collectDiagnostic:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)hostedDiscoverySessionDidInvalidate:(id)arg1;
- (id)endpointForOrigin:(id)arg1;
@property(readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

