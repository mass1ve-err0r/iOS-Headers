//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying>
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct {
        unsigned int uniqueID:1;
    } _has;
}

@property(retain, nonatomic) ICPBDGSFinishDelegationRequest *finishDelegationRequest; // @synthesize finishDelegationRequest=_finishDelegationRequest;
@property(retain, nonatomic) ICPBDGSStartDelegationRequest *startDelegationRequest; // @synthesize startDelegationRequest=_startDelegationRequest;
@property(nonatomic) unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFinishDelegationRequest;
@property(readonly, nonatomic) _Bool hasStartDelegationRequest;
@property(nonatomic) _Bool hasUniqueID;

@end

