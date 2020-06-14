//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPKeyStore-Protocol.h>
#import <CoreHAP/HMFDumpState-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_activeControllerIdentifier;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)systemStore;
@property(retain, nonatomic) NSString *activeControllerIdentifier; // @synthesize activeControllerIdentifier=_activeControllerIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (int)_deleteAllPeripheralIdentifiers;
- (_Bool)deleteAllPeripheralIdentifiers:(id *)arg1;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (int)_getPeripheralIdentifier:(id *)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long *)arg3 resumeSessionID:(unsigned long long *)arg4;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned long long *)arg2 resumeSessionID:(unsigned long long *)arg3 error:(id *)arg4;
- (int)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;
- (_Bool)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long *)arg4 resumeSessionID:(unsigned long long)arg5 error:(id *)arg6;
- (int)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4;
- (_Bool)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned long long)arg3 resumeSessionID:(unsigned long long)arg4 error:(id *)arg5;
- (int)_removeKeychainItem:(id)arg1 leaveTombstone:(_Bool)arg2;
- (int)_addKeychainItem:(id)arg1 logDuplicateItemError:(_Bool)arg2;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(_Bool)arg4 error:(int *)arg5;
- (void)_updateKeychainItemToInvisible:(id)arg1;
- (id)_auditAccessoryKeys:(id)arg1;
- (id)auditAccessoryKeys:(id)arg1;
- (int)_removeAccessoryKeyForName:(id)arg1;
- (_Bool)removeAllAccessoryKeys:(id *)arg1;
- (_Bool)removeAccessoryKeyForName:(id)arg1 error:(id *)arg2;
- (_Bool)registerAccessoryWithHomeKit:(id)arg1 error:(id *)arg2;
- (int)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (_Bool)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id *)arg3;
- (int)_getPublicKey:(id *)arg1 registeredWithHomeKit:(_Bool *)arg2 forAccessoryName:(id)arg3;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(_Bool *)arg2 error:(id *)arg3;
- (int)_createMetadataSecretKey:(id *)arg1;
- (int)_getMetadataSecretKey:(id *)arg1;
- (_Bool)getMetadataSecretKey:(id *)arg1 error:(id *)arg2;
- (int)_removeControllerKeyPairForKeyType:(id)arg1 identifier:(id)arg2 leaveTombstone:(_Bool)arg3;
- (int)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2;
- (_Bool)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeControllerKeyPairLeaveTombstone:(_Bool)arg1 error:(id *)arg2;
- (_Bool)removeControllerKeyPairWithError:(id *)arg1;
- (_Bool)getCurrentiCloudIdentifier:(id *)arg1 controllerPairingIdentifier:(id *)arg2 error:(id *)arg3;
- (int)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (_Bool)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *activeControllerPairingIdentifier;
- (_Bool)updateActiveControllerPairingIdentifier:(id)arg1;
- (int)_getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3;
- (_Bool)getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3 error:(id *)arg4;
- (_Bool)deserializeKeyPair:(id)arg1 publicKey:(id *)arg2 secretKey:(id *)arg3 error:(id *)arg4;
- (int)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 keyType:(id)arg4;
- (_Bool)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 error:(id *)arg4;
- (int)_createControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (_Bool)saveLocalPairingIdentity:(id)arg1 syncable:(_Bool)arg2 error:(id *)arg3;
- (id)_getControllerKeychainItemForKeyType:(id)arg1 error:(int *)arg2;
- (id)_getControllerKeychainItemError:(int *)arg1;
- (int)_getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(_Bool)arg5 error:(id *)arg6;
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(_Bool)arg4 error:(id *)arg5;
- (id)_getLocalPairingIdentityAllowingCreation:(_Bool)arg1 error:(id *)arg2;
- (id)getOrCreateLocalPairingIdentity:(id *)arg1;
- (id)getLocalPairingIdentity:(id *)arg1;
- (void)ensureControllerKeyExistsForAllViews;
- (id)dumpState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

