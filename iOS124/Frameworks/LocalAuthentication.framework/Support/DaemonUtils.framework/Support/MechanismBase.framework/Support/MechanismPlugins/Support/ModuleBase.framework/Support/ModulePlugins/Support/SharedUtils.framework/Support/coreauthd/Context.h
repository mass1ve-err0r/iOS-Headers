//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAContextExternalizationObserverProt-Protocol.h"
#import "LAContextServerSideProt-Protocol.h"

@class ContextPlugin, NSData, NSMutableDictionary;
@protocol OS_os_transaction;

@interface Context : NSObject <LAContextServerSideProt, LAContextExternalizationObserverProt>
{
    NSMutableDictionary *_serverProperties;
    ContextPlugin *_plugin;
    _Bool _wasExternalized;
    int _processId;
    unsigned int _userId;
    int _auditSessionId;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)managedContextWithExternalizedContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 invalidationBlock:(CDUnknownBlockType)arg5 reply:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool wasExternalized; // @synthesize wasExternalized=_wasExternalized;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)externalizationConsumed;
- (_Bool)canExternalizeContext:(int)arg1 userId:(unsigned int)arg2 auditSessionId:(int)arg3;
- (void)contextWasExternalized:(id)arg1;
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_updateOptionsWithServerProperties:(id)arg1;
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (_Bool)_hasProtectedOptions:(id)arg1;
- (id)initWithPlugin:(id)arg1 auditSessionId:(int)arg2 userId:(unsigned int)arg3;

@end

