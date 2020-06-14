//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface StoreDownloadQueueResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableOrderedSet *_clusterMappings;
    NSMutableOrderedSet *_downloads;
    NSError *_error;
    NSDictionary *_itemErrors;
    NSData *_keybag;
    NSArray *_rangesToLoad;
    _Bool _shouldCancelPurchaseBatch;
    _Bool _triggeredQueueCheck;
    NSNumber *_userIdentifier;
    NSString *_storeCorrelationID;
    NSString *_clientIdentifier;
}

@property NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(readonly) NSOrderedSet *clusterMappings; // @synthesize clusterMappings=_clusterMappings;
- (void).cxx_destruct;
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;
@property(readonly) NSNumber *userIdentifier;
@property _Bool triggeredQueueCheck;
@property _Bool shouldCancelPurchaseBatch;
@property(retain) NSError *error;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *keybag;
- (id)errorForItemIdentifier:(id)arg1;
@property(readonly) NSOrderedSet *downloads;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;
- (id)init;
- (id)_initStoreDownloadQueueResponse;
- (id)_newManifestWithStoreDownloadQueueResponse:(id)arg1 accountID:(id)arg2 accountName:(id)arg3;
- (void)enumerateActivitiesWithAccountID:(id)arg1 accountName:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)copyJobManifestWithAccountID:(id)arg1 accountName:(id)arg2;

@end

