//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSXPCListenerDelegate-Protocol.h>
#import <VideoSubscriberAccount/VSServiceConnectionHandlerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface VSServiceListener : NSObject <VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate>
{
    NSArray *_entitlementNames;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSMutableSet *_connectionHandlers;
}

@property(retain, nonatomic) NSMutableSet *connectionHandlers; // @synthesize connectionHandlers=_connectionHandlers;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(copy, nonatomic) NSArray *entitlementNames; // @synthesize entitlementNames=_entitlementNames;
- (void).cxx_destruct;
- (void)connectionHandlerDidFinish:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeConnectionHandler:(id)arg1;
- (void)_addConnectionHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

