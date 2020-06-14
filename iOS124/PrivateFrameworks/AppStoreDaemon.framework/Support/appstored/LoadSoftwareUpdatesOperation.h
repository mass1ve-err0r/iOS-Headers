//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableSet, NSURL, SoftwareUpdateContext;

@interface LoadSoftwareUpdatesOperation : ISOperation
{
    NSArray *_appMetadata;
    NSMutableSet *_offloadedBundleIDs;
    NSMutableSet *_perDeviceBundleIDs;
    NSMutableSet *_profileValidatedBundleIDs;
    CDUnknownBlockType _updatesBlock;
    NSURL *_updateURL;
    SoftwareUpdateContext *_context;
}

@property(retain, nonatomic) SoftwareUpdateContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_prunedUpdate:(id)arg1 withKey:(id)arg2;
- (id)_prunedSizeWithVariantSizes:(id)arg1;
- (id)_prunedSizeWithUpdateSizes:(id)arg1 forInstalledVariant:(id)arg2 versionId:(id)arg3;
- (id)_prunedSizeWithDeviceSizes:(id)arg1;
- (id)_prunedSizeDictionary:(id)arg1 forVariantId:(id)arg2 versionId:(id)arg3;
- (id)_performLookupForAccount:(id)arg1 candiates:(id)arg2 error:(id *)arg3;
- (id)_newRequestPropertiesWithBodyData:(id)arg1 url:(id)arg2;
- (id)_newStoreURLOperation:(id)arg1;
- (id)_newBodyDataWithBodyPlist:(id)arg1 error:(id *)arg2;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (void)_importKeybagSync:(id)arg1;
- (id)_handleResponse:(id)arg1;
- (id)_gzipData:(id)arg1;
- (id)_getUpdateCandidates;
- (id)_getItemsFromDictionary:(id)arg1;
- (id)_getCurrentApps;
- (id)_bestAccountForCandidates:(id)arg1;
- (void)_addGUIDToBody:(id)arg1;
- (void)_addKeybagSyncToBody:(id)arg1 account:(long long)arg2;
- (void)run;
@property(copy) CDUnknownBlockType updatesBlock;
- (id)initWithApplicationMetadata:(id)arg1;

@end

