//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPhoto, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDUser : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDPhoto *_image;
    NSString *_name;
}

@property(retain, nonatomic) GEOPDPhoto *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool hasName;

@end

