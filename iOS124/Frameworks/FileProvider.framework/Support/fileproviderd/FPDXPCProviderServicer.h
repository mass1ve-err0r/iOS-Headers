//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FPDRemoteFileProvider-Protocol.h"
#import "FPDRemoteServiceEndpointCreatingProvider-Protocol.h"

@class FPDExtension, FPDXPCProviderServicerLifetimeExtender, NSString, NSURL;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FPDXPCProviderServicer : NSObject <FPDRemoteFileProvider, FPDRemoteServiceEndpointCreatingProvider>
{
    FPDExtension *__provider;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSURL *_itemURL;
    id _activePresenterObservation;
    FPDXPCProviderServicerLifetimeExtender *_lifetimeExtender;
    _Bool _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSString *_providerIdentifier;
}

@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)resolveItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopAccessingProviderEndpoint;
- (void)_registerLifetimeExtension;
- (void)_unregisterLifetimeExtension;
- (void)startAccessingServiceProviderEndpointWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAccessingProviderEndpointForService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAccessingProviderEndpointForProtocolName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startAccessingProviderEndpointForProtocolName:(id)arg1 service:(id)arg2 itemURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_provider;
- (id)__providerIfExists;
- (_Bool)_clientCanAccessService:(id)arg1 forConnection:(id)arg2;
- (int)pid;
- (void)dealloc;
- (void)invalidate;
- (id)initWithExtensionFileProvider:(id)arg1 itemURL:(id)arg2 pid:(int)arg3;

@end

