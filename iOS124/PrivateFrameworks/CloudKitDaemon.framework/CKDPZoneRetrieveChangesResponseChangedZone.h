//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordZoneIdentifier, CKDPZoneCapabilities;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying>
{
    CKDPZoneCapabilities *_capabilities;
    int _changeType;
    int _deleteType;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int changeType:1;
        unsigned int deleteType:1;
    } _has;
}

@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCapabilities;
- (int)StringAsDeleteType:(id)arg1;
- (id)deleteTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDeleteType;
@property(nonatomic) int deleteType; // @synthesize deleteType=_deleteType;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

