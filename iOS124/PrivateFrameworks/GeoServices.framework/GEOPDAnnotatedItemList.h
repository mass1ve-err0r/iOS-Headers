//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPictureItemContainer, GEOPDTextItemContainer, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAnnotatedItemList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _annotatedItemStyle;
    GEOPDPictureItemContainer *_picItemContainer;
    GEOPDTextItemContainer *_textItemContainer;
    NSString *_title;
    struct {
        unsigned int annotatedItemStyle:1;
    } _has;
}

+ (id)annotatedItemListForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDTextItemContainer *textItemContainer; // @synthesize textItemContainer=_textItemContainer;
@property(retain, nonatomic) GEOPDPictureItemContainer *picItemContainer; // @synthesize picItemContainer=_picItemContainer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
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
- (int)StringAsAnnotatedItemStyle:(id)arg1;
- (id)annotatedItemStyleAsString:(int)arg1;
@property(nonatomic) _Bool hasAnnotatedItemStyle;
@property(nonatomic) int annotatedItemStyle; // @synthesize annotatedItemStyle=_annotatedItemStyle;
@property(readonly, nonatomic) _Bool hasTextItemContainer;
@property(readonly, nonatomic) _Bool hasPicItemContainer;
@property(readonly, nonatomic) _Bool hasTitle;

@end

