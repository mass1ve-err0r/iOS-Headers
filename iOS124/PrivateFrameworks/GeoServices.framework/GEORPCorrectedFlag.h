//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying>
{
    int _flag;
    _Bool _correctedValue;
    _Bool _originalValue;
    struct {
        unsigned int flag:1;
        unsigned int correctedValue:1;
        unsigned int originalValue:1;
    } _has;
}

@property(nonatomic) _Bool correctedValue; // @synthesize correctedValue=_correctedValue;
@property(nonatomic) _Bool originalValue; // @synthesize originalValue=_originalValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCorrectedValue;
@property(nonatomic) _Bool hasOriginalValue;
- (int)StringAsFlag:(id)arg1;
- (id)flagAsString:(int)arg1;
@property(nonatomic) _Bool hasFlag;
@property(nonatomic) int flag; // @synthesize flag=_flag;

@end

