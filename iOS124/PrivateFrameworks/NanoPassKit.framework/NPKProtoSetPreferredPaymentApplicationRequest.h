//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest <NSCopying>
{
    NSString *_passID;
    NSString *_preferredApplicationAID;
}

@property(retain, nonatomic) NSString *preferredApplicationAID; // @synthesize preferredApplicationAID=_preferredApplicationAID;
@property(retain, nonatomic) NSString *passID; // @synthesize passID=_passID;
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
@property(readonly, nonatomic) _Bool hasPreferredApplicationAID;
@property(readonly, nonatomic) _Bool hasPassID;

@end

