//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFNetServiceBrowserDelegate-Protocol.h>

@class HMFNetService, HMFNetServiceBrowser, HMFUnfairLock, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFNetServiceMonitorDelegate;

@interface _HMFNetServiceMonitor : HMFObject <HMFNetServiceBrowserDelegate, HMFLogging>
{
    HMFUnfairLock *_lock;
    _Bool _reachable;
    HMFNetService *_netService;
    id <_HMFNetServiceMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMFNetServiceBrowser *_netServiceBrowser;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMFNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <_HMFNetServiceMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (id)logIdentifier;
- (void)setReachable:(_Bool)arg1;
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
- (void)setNetService:(id)arg1;
@property(readonly, copy) HMFNetService *netService; // @synthesize netService=_netService;
- (id)initWithNetService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

