//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject
{
    NSXPCListener *_accountStoreConnectionListener;
    NSXPCListener *_oauthSignerConnectionListener;
    NSXPCListener *_authenticationDialogConnectionListener;
    NSString *_storePath;
}

+ (id)testServer;
- (void).cxx_destruct;
- (id)_pseudoUniqueDatabasePath;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
- (void)stopTestServer;
- (void)startTestServer;

@end

