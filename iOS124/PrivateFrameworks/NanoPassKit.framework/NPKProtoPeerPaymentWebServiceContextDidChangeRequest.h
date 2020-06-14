//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoPeerPaymentWebServiceContextDidChangeRequest : PBRequest <NSCopying>
{
    NSData *_peerPaymentAccountData;
    NSData *_peerPaymentWebServiceContextData;
}

@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
@property(retain, nonatomic) NSData *peerPaymentWebServiceContextData; // @synthesize peerPaymentWebServiceContextData=_peerPaymentWebServiceContextData;
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
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;
@property(readonly, nonatomic) _Bool hasPeerPaymentWebServiceContextData;

@end

