//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;
    HDDaemon *_daemon;
}

@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_queue_processWithBundleIdentifier:(id)arg1 didSuspend:(_Bool)arg2;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (void)_logQueryActivationWithServer:(id)arg1;
- (id)_queue_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_queue_unregisterQueryServer:(id)arg1;
- (id)_queue_registerQueryServer:(id)arg1;
- (void)_queryServerDidFinish:(id)arg1;
- (void)_queue_startQueryServer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startQueryServer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
