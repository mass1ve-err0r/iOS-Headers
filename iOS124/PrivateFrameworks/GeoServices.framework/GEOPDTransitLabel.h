//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitLabelItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    int _labelType;
    struct {
        unsigned int labelType:1;
    } _has;
}

@property(retain, nonatomic) GEOPBTransitArtwork *labelArtwork; // @synthesize labelArtwork=_labelArtwork;
@property(retain, nonatomic) NSString *labelTextString; // @synthesize labelTextString=_labelTextString;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasLabelArtwork;
@property(readonly, nonatomic) _Bool hasLabelTextString;
- (int)StringAsLabelType:(id)arg1;
- (id)labelTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLabelType;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

