//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding>
{
    unsigned int _syncSwitchIndex;
    unsigned int _migrationIndex;
    NSUUID *_pairingID;
    unsigned long long _initialSyncState;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int migrationIndex; // @synthesize migrationIndex=_migrationIndex;
@property(nonatomic) unsigned int syncSwitchIndex; // @synthesize syncSwitchIndex=_syncSwitchIndex;
@property(nonatomic) unsigned long long initialSyncState; // @synthesize initialSyncState=_initialSyncState;
@property(retain, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasCompletedSync;
- (_Bool)hasCompletedInitialOrMigrationSync;
@property(readonly, nonatomic) _Bool hasCompletedInitialSync;
- (id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2;

@end

