//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData : PBCodable <NSCopying>
{
    _Bool _isBundleChannel;
    CDStruct_8fa617c1 _has;
}

@property(nonatomic) _Bool isBundleChannel; // @synthesize isBundleChannel=_isBundleChannel;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsBundleChannel;

@end

