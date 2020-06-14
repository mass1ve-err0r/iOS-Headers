//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSOwnedDataPromise.h"

#import "IXSDataPromiseAwakening-Protocol.h"
#import "IXSDataPromiseDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class IXPlaceholderAttributes, IXPlaceholderSeed, IXSPromisedInMemoryData, IXSPromisedInMemoryDictionary, MIStoreMetadata, NSArray, NSData, NSDictionary, NSString, NSUUID;

@interface IXSPlaceholder : IXSOwnedDataPromise <NSSecureCoding, IXSDataPromiseDelegate, IXSDataPromiseAwakening>
{
    _Bool _sentDidBegin;
    _Bool _configurationComplete;
    NSUUID *_iconPromiseUUID;
    NSUUID *_entitlementsPromiseUUID;
    NSUUID *_metadataPromiseUUID;
    NSUUID *_sinfPromiseUUID;
    NSArray *_plugInPlaceholdersPromiseUUIDs;
    NSUUID *_localizationDictionaryPromiseUUID;
    IXSOwnedDataPromise *_icon;
    IXSOwnedDataPromise *_entitlements;
    NSArray *_plugInPlaceholders;
    IXPlaceholderAttributes *_attributes;
    IXSPromisedInMemoryData *_metadataPromise;
    IXSPromisedInMemoryData *_sinfPromise;
    IXSPromisedInMemoryDictionary *_localizationDictionaryPromise;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IXSPromisedInMemoryDictionary *localizationDictionaryPromise; // @synthesize localizationDictionaryPromise=_localizationDictionaryPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *sinfPromise; // @synthesize sinfPromise=_sinfPromise;
@property(retain, nonatomic) IXSPromisedInMemoryData *metadataPromise; // @synthesize metadataPromise=_metadataPromise;
@property(copy, nonatomic) IXPlaceholderAttributes *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSArray *plugInPlaceholders; // @synthesize plugInPlaceholders=_plugInPlaceholders;
@property(retain, nonatomic) IXSOwnedDataPromise *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) IXSOwnedDataPromise *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool configurationComplete; // @synthesize configurationComplete=_configurationComplete;
@property(nonatomic) _Bool sentDidBegin; // @synthesize sentDidBegin=_sentDidBegin;
@property(retain, nonatomic) NSUUID *localizationDictionaryPromiseUUID; // @synthesize localizationDictionaryPromiseUUID=_localizationDictionaryPromiseUUID;
@property(retain, nonatomic) NSArray *plugInPlaceholdersPromiseUUIDs; // @synthesize plugInPlaceholdersPromiseUUIDs=_plugInPlaceholdersPromiseUUIDs;
@property(retain, nonatomic) NSUUID *sinfPromiseUUID; // @synthesize sinfPromiseUUID=_sinfPromiseUUID;
@property(retain, nonatomic) NSUUID *metadataPromiseUUID; // @synthesize metadataPromiseUUID=_metadataPromiseUUID;
@property(retain, nonatomic) NSUUID *entitlementsPromiseUUID; // @synthesize entitlementsPromiseUUID=_entitlementsPromiseUUID;
@property(retain, nonatomic) NSUUID *iconPromiseUUID; // @synthesize iconPromiseUUID=_iconPromiseUUID;
- (void).cxx_destruct;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;
- (void)promiseDidReset:(id)arg1;
- (void)promiseDidComplete:(id)arg1;
- (void)promiseDidBegin:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)_materialize;
- (void)decommission;
- (void)_decommissionPromise:(id)arg1;
- (id)subPromiseUUIDs;
- (id)_promiseUUIDsForPromise:(id)arg1;
- (unsigned long long)totalBytesNeededOnDisk;
@property(readonly, nonatomic) unsigned long long installType; // @dynamic installType;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)_cancelPromise:(id)arg1 forReason:(id)arg2 client:(unsigned long long)arg3;
- (void)setPercentComplete:(double)arg1;
- (double)percentComplete;
- (void)setComplete:(_Bool)arg1;
- (_Bool)isComplete;
- (void)_materializeIfReady;
- (_Bool)_isReadyToMaterialize;
@property(readonly, nonatomic) NSDictionary *localizationDictionary; // @dynamic localizationDictionary;
@property(readonly, copy, nonatomic) NSData *sinfData; // @dynamic sinfData;
@property(readonly, copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
- (_Bool)awakeFromSerializationWithLookupBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1 error:(id *)arg2;
- (_Bool)_internal_checkInitWithSeed:(id)arg1 error:(id *)arg2;
- (oneway void)_remote_setConfigurationCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getPlugInPlaceholderPromises:(CDUnknownBlockType)arg1;
- (oneway void)_remote_hasPlugInPlaceholderPromises:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setPlugInPlaceholderPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getEntitlementsPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_hasEntitlementsPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setEntitlementsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getLocalizationDictionary:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setLocalizationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getIconPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_hasIconPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setIconPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getAttributesWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getLaunchProhibitedWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setLaunchProhibited:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getSinfDataWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setSinfPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setMetadataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) IXPlaceholderSeed *clientSeed; // @dynamic clientSeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IXPlaceholderSeed *seed; // @dynamic seed;
@property(readonly) Class superclass;

@end

