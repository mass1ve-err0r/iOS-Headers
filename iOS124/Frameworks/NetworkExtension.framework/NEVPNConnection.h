//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEConfigurationManager, NEVPNManager, NSDate, NSError, NSString;
@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject
{
    _Bool _initialized;
    int _sessionType;
    long long _status;
    NSDate *_connectedDate;
    NEConfigurationManager *_configManager;
    NSString *_configurationName;
    NSObject<OS_dispatch_queue> *_queue;
    void *_session;
    NEVPNManager *_weakmanager;
    NSError *_lastDisconnectError;
}

+ (id)createConnectionForEnabledEnterpriseConfiguration;
+ (id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned int)arg2;
@property(readonly) NSError *lastDisconnectError; // @synthesize lastDisconnectError=_lastDisconnectError;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property __weak NEVPNManager *weakmanager; // @synthesize weakmanager=_weakmanager;
@property(readonly, nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property void *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) NEConfigurationManager *configManager; // @synthesize configManager=_configManager;
@property(readonly) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)resetLastDisconnectError:(id)arg1;
- (void)reload;
@property(readonly) NEVPNManager *manager;
- (void)destroySession;
- (void)createSessionWithConfigurationIdentifier:(id)arg1 forceInfoFetch:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateSessionInfoForce:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopVPNTunnel;
- (_Bool)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;
- (_Bool)startVPNTunnelAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initHeadless;
- (id)initWithType:(int)arg1;

@end

