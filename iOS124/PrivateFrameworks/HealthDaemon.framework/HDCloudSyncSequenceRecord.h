//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDSyncAnchorMap, NSSet;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord
{
    _Bool _active;
    int _protocolVersion;
    unsigned long long _changeIndex;
    unsigned long long _baselineEpoch;
    unsigned long long _childRecordCount;
    HDSyncAnchorMap *_syncAnchorMap;
    NSSet *_includedIdentifiers;
    long long _slot;
}

+ (_Bool)hasFutureSchema:(id)arg1;
+ (_Bool)isSequenceRecordID:(id)arg1;
+ (_Bool)isSequenceRecord:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSSet *includedIdentifiers; // @synthesize includedIdentifiers=_includedIdentifiers;
@property(readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap; // @synthesize syncAnchorMap=_syncAnchorMap;
@property(readonly, nonatomic) unsigned long long childRecordCount; // @synthesize childRecordCount=_childRecordCount;
@property(readonly, nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(readonly, nonatomic) unsigned long long changeIndex; // @synthesize changeIndex=_changeIndex;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)_unitTest_setChildRecordCount:(unsigned long long)arg1;
- (id)description;
- (void)incrementChildRecordCount;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)incrementChangeIndex;
- (void)setProtocolVersion:(int)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(_Bool)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(unsigned long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(unsigned long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6;

@end

