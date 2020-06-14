//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDDatabaseValueCache, HDProfile, NSLock, NSNumber, NSString;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject>
{
    HDProfile *_profile;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    int _defaultsLoaded;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    NSString *_localSystemBuild;
    NSString *_localProductType;
}

@property(copy, nonatomic) NSString *localProductType; // @synthesize localProductType=_localProductType;
@property(copy, nonatomic) NSString *localSystemBuild; // @synthesize localSystemBuild=_localSystemBuild;
@property(retain, nonatomic) HDDatabaseValueCache *originProvenanceByPersistentID; // @synthesize originProvenanceByPersistentID=_originProvenanceByPersistentID;
@property(retain, nonatomic) HDDatabaseValueCache *persistentIDsByProvenanceKey; // @synthesize persistentIDsByProvenanceKey=_persistentIDsByProvenanceKey;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)setDeviceNoneID:(id)arg1;
@property(readonly, nonatomic) NSNumber *deviceNoneID;
- (void)setLocalDeviceID:(id)arg1;
@property(readonly, nonatomic) NSNumber *localDeviceID;
- (void)setLocalSourceID:(id)arg1;
@property(readonly, nonatomic) NSNumber *localSourceID;
- (void)checkDefaultsLoaded;
@property(readonly, copy) NSString *description;
- (id)_localTimeZoneName;
- (void)_loadDefaults;
- (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_localDataProvenanceWithSourceID:(id)arg1 sourceVersion:(id)arg2 deviceID:(id)arg3;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1;
- (id)defaultLocalDataProvenance;
- (id)_lookupOrInsertProvenance:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)provenanceEntityForProvenance:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)provenanceEntityForProvenance:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

