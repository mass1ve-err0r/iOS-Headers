//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileAccessArbiterXPCInterface-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listenerConnection;
    _Bool _isStopped;
    _Bool _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_accessClaimTransactionsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSMutableDictionary *_reactorTransactionsByID;
    NSFileAccessNode *_rootNode;
    NSXPCConnection *_superarbitrationServer;
    NSObject<OS_dispatch_source> *_debugSignalSource;
}

+ (void)_lostBirdProvider:(id)arg1;
+ (void)_gainedBirdProvider:(id)arg1;
+ (void)ensureProvidersIfNecessaryForClaim:(id)arg1 atLocation:(id)arg2 queue:(id)arg3 thenContinue:(CDUnknownBlockType)arg4;
+ (void)_wakeUpBirdWithUID:(unsigned int)arg1 urls:(id)arg2 queue:(id)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (void)_registerForDebugInfoRequests;
- (void)getDebugInformationIncludingEverything:(_Bool)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleCanceledClient:(id)arg1;
- (void)performBarrierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)provideSubarbiterDebugInfoIncludingEverything:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startArbitratingWithReply:(CDUnknownBlockType)arg1;
- (oneway void)prepareToArbitrateForURLs:(id)arg1;
- (oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2;
- (void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (oneway void)removePresenterWithID:(id)arg1;
- (void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)grantAccessClaim:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_enumerateSubarbitersUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSXPCConnection *superarbitrationConnection;
- (id)rootNode;
- (void)stopArbitrating;
- (void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2;
- (void)_removeReactorForID:(id)arg1;
- (void)_willRemoveReactor:(id)arg1;
- (_Bool)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2;
- (_Bool)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(_Bool)arg3 withLastEventID:(id)arg4;
- (void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)_revokeAccessClaimForID:(id)arg1 fromLocal:(_Bool)arg2;
- (void)_grantAccessClaim:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 isSubarbiter:(_Bool)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

