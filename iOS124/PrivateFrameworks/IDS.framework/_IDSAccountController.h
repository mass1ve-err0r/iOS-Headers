//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSString *_serviceToken;
    NSString *_service;
    NSMutableSet *_cachedAccounts;
    NSMutableSet *_enabledAccounts;
    NSMutableDictionary *_transactionIDToHandlersMap;
    _Bool _accountsLoaded;
    _Bool _isLocalAccountVisible;
}

- (void).cxx_destruct;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;
- (void)accountUpdated:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (void)_updateLocalAccountVisibility;
- (void)_removeAccount:(id)arg1;
- (void)_removeAndDeregisterAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)accountWithUniqueID:(id)arg1;
- (void)_loadCachedAccounts;
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;
- (void)daemonDisconnected;
- (void)_connect;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSSet *enabledAccounts;
@property(readonly, nonatomic) NSSet *internalAccounts;
@property(readonly, nonatomic) NSSet *accounts;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

