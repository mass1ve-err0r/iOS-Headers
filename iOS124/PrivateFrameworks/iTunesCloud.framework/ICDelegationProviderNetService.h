//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSNetServiceDelegate-Protocol.h>

@class ICDelegationNetServiceTXTRecord, NSArray, NSMutableArray, NSNetService, NSString;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_netServiceStreamResolutionQueue;
    NSMutableArray *_resolutionCompletionHandlers;
    long long _state;
    ICDelegationNetServiceTXTRecord *_txtRecord;
    NSNetService *_netService;
}

@property(readonly, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
- (void).cxx_destruct;
- (void)_updateTXTRecordProperties;
- (void)_setState:(long long)arg1;
- (void)_resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long securityMode;
@property(readonly, copy, nonatomic) NSString *deviceName;
@property(readonly, copy, nonatomic) NSArray *delegationAccountUUIDs;
- (void)getResolvedStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)dealloc;
- (id)initWithNetService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

