//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSSecureCoding-Protocol.h>
#import <Pasteboard/NSXPCListenerDelegate-Protocol.h>
#import <Pasteboard/PBItemDataTransferDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;
@protocol PBItemCollectionDataTransferDelegate;

@interface PBItemCollection : NSObject <NSXPCListenerDelegate, PBItemDataTransferDelegate, NSSecureCoding>
{
    _Bool _itemQueue_isDataProvider;
    _Bool _itemQueue_deviceLockedPasteboard;
    NSDate *_creationDate;
    NSXPCListener *_itemQueue_dataConsumersListener;
    NSXPCListenerEndpoint *_itemQueue_remoteDataProviderEndpoint;
    NSXPCConnection *_itemQueue_remoteDataProviderConnection;
    NSArray *_itemQueue_items;
    NSDictionary *_itemQueue_metadata;
    NSDictionary *_itemQueue_privateMetadata;
    NSUUID *_itemQueue_UUID;
    NSString *_itemQueue_originatorBundleID;
    NSString *_itemQueue_originatorTeamID;
    long long _itemQueue_originatorDataOwner;
    long long _itemQueue_remotePasteboardState;
    id <PBItemCollectionDataTransferDelegate> _itemQueue_dataTransferDelegate;
}

+ (id)allowedClassesForSecureCoding;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <PBItemCollectionDataTransferDelegate> itemQueue_dataTransferDelegate; // @synthesize itemQueue_dataTransferDelegate=_itemQueue_dataTransferDelegate;
@property(nonatomic) long long itemQueue_remotePasteboardState; // @synthesize itemQueue_remotePasteboardState=_itemQueue_remotePasteboardState;
@property(nonatomic, getter=itemQueue_isDeviceLockedPasteboard) _Bool itemQueue_deviceLockedPasteboard; // @synthesize itemQueue_deviceLockedPasteboard=_itemQueue_deviceLockedPasteboard;
@property(nonatomic) long long itemQueue_originatorDataOwner; // @synthesize itemQueue_originatorDataOwner=_itemQueue_originatorDataOwner;
@property(copy, nonatomic) NSString *itemQueue_originatorTeamID; // @synthesize itemQueue_originatorTeamID=_itemQueue_originatorTeamID;
@property(copy, nonatomic) NSString *itemQueue_originatorBundleID; // @synthesize itemQueue_originatorBundleID=_itemQueue_originatorBundleID;
@property(nonatomic) _Bool itemQueue_isDataProvider; // @synthesize itemQueue_isDataProvider=_itemQueue_isDataProvider;
@property(retain, nonatomic) NSUUID *itemQueue_UUID; // @synthesize itemQueue_UUID=_itemQueue_UUID;
@property(retain, nonatomic) NSDictionary *itemQueue_privateMetadata; // @synthesize itemQueue_privateMetadata=_itemQueue_privateMetadata;
@property(copy, nonatomic) NSDictionary *itemQueue_metadata; // @synthesize itemQueue_metadata=_itemQueue_metadata;
@property(copy, nonatomic) NSArray *itemQueue_items; // @synthesize itemQueue_items=_itemQueue_items;
@property(retain, nonatomic) NSXPCConnection *itemQueue_remoteDataProviderConnection; // @synthesize itemQueue_remoteDataProviderConnection=_itemQueue_remoteDataProviderConnection;
@property(retain, nonatomic) NSXPCListenerEndpoint *itemQueue_remoteDataProviderEndpoint; // @synthesize itemQueue_remoteDataProviderEndpoint=_itemQueue_remoteDataProviderEndpoint;
@property(retain, nonatomic) NSXPCListener *itemQueue_dataConsumersListener; // @synthesize itemQueue_dataConsumersListener=_itemQueue_dataConsumersListener;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)item:(id)arg1 representationFinishedDataTransfer:(id)arg2;
- (void)item:(id)arg1 representation:(id)arg2 beganDataTransferWithProgress:(id)arg3;
@property(nonatomic) __weak id <PBItemCollectionDataTransferDelegate> dataTransferDelegate; // @dynamic dataTransferDelegate;
- (void)setRemoteDataLoaded;
@property(readonly, nonatomic, getter=isRemoteDataLoaded) _Bool remoteDataLoaded;
- (void)setRemoteMetadataLoaded;
@property(readonly, nonatomic, getter=isRemoteMetadataLoaded) _Bool remoteMetadataLoaded;
@property(nonatomic) _Bool isRemote;
- (void)setUsesServerConnectionToLoadData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)availableRepresentationTypes;
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;
- (_Bool)hasItemWithRepresentationConformingToType:(id)arg1;
- (_Bool)hasItemWithRepresentationOfType:(id)arg1;
- (void)addItems:(id)arg1;
- (id)copyWithDoNothingLoaders;
- (id)copyWithItems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)dealloc;
- (void)shutdown;
- (id)init;
- (CDStruct_6ad76789)establishConnectionToDataProviderCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_remoteDataProviderConnection;
- (void)waitForItemRequestsDeliveryCompletion:(CDUnknownBlockType)arg1;
- (void)setDataProviderEndpoint:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)dataConsumersListener;
@property(nonatomic, getter=isDeviceLockedPasteboard) _Bool deviceLockedPasteboard; // @dynamic deviceLockedPasteboard;
@property(nonatomic) long long originatorDataOwner; // @dynamic originatorDataOwner;
- (void)setOriginatorTeamID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *originatorTeamID; // @dynamic originatorTeamID;
- (void)setOriginatorBundleID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *originatorBundleID; // @dynamic originatorBundleID;
@property(readonly, nonatomic) _Bool isDataProvider; // @dynamic isDataProvider;
@property(readonly, nonatomic) NSXPCListenerEndpoint *dataConsumersEndpoint; // @dynamic dataConsumersEndpoint;
@property(readonly, nonatomic) NSUUID *UUID; // @dynamic UUID;
@property(retain, nonatomic) NSDictionary *privateMetadata; // @dynamic privateMetadata;
@property(copy, nonatomic) NSDictionary *metadata; // @dynamic metadata;
- (void)setUUID:(id)arg1;
- (void)setItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items; // @dynamic items;
@property(nonatomic, getter=isLocalOnly) _Bool localOnly;
@property(retain, nonatomic) NSDate *expirationDate;
@property(nonatomic, getter=isPersistent) _Bool persistent;
@property(readonly, nonatomic) _Bool isGeneralPasteboard;
@property(nonatomic) long long changeCount;
@property(readonly, copy, nonatomic) NSString *persistenceName; // @dynamic persistenceName;
@property(readonly, nonatomic, getter=isSystemPasteboard) _Bool systemPasteboard;
@property(copy, nonatomic) NSString *name;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

