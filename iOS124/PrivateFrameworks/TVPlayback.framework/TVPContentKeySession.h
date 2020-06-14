//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/AVContentKeySessionDelegate-Protocol.h>

@class AVContentKeySession, NSArray, NSMutableArray, NSString;
@protocol TVPContentKeyLoading;

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate>
{
    _Bool _offlineKeyGenerationIsForRenewal;
    AVContentKeySession *_contentKeySession;
    NSObject<TVPContentKeyLoading> *_contentKeyLoader;
    CDUnknownBlockType _offlineKeyGenerationCompletionHandler;
    NSArray *_offlineKeyIdentifiersInProgress;
    NSMutableArray *_keyRequestsInProgress;
}

+ (void)initialize;
@property(nonatomic) _Bool offlineKeyGenerationIsForRenewal; // @synthesize offlineKeyGenerationIsForRenewal=_offlineKeyGenerationIsForRenewal;
@property(retain, nonatomic) NSMutableArray *keyRequestsInProgress; // @synthesize keyRequestsInProgress=_keyRequestsInProgress;
@property(retain, nonatomic) NSArray *offlineKeyIdentifiersInProgress; // @synthesize offlineKeyIdentifiersInProgress=_offlineKeyIdentifiersInProgress;
@property(copy, nonatomic) CDUnknownBlockType offlineKeyGenerationCompletionHandler; // @synthesize offlineKeyGenerationCompletionHandler=_offlineKeyGenerationCompletionHandler;
@property(retain, nonatomic) NSObject<TVPContentKeyLoading> *contentKeyLoader; // @synthesize contentKeyLoader=_contentKeyLoader;
@property(retain, nonatomic) AVContentKeySession *contentKeySession; // @synthesize contentKeySession=_contentKeySession;
- (void).cxx_destruct;
- (void)_generateOfflineKeyRequestsForIdentifiers:(id)arg1 isRenewal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadAVContentKeyRequests:(id)arg1 type:(long long)arg2 isRenewal:(_Bool)arg3;
- (void)_finishOfflineKeyGeneration;
- (void)_timeoutOfflineKeyRequestGeneration;
- (void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)finishKeyRequest:(id)arg1;
- (void)fetchOfflineKeysForParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateOfflineKeyRequestsForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makeSecureInvalidationDataForOfflineKeyData:(id)arg1 nonceData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContentKeyLoader:(id)arg1 avAsset:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

