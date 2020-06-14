//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOSurchargeType-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString;
@protocol GEOServerFormattedString;

__attribute__((visibility("hidden")))
@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying>
{
    int _enumValue;
    GEOFormattedString *_name;
    struct {
        unsigned int enumValue:1;
    } _has;
}

@property(retain, nonatomic) GEOFormattedString *name; // @synthesize name=_name;
@property(nonatomic) int enumValue; // @synthesize enumValue=_enumValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasEnumValue;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedName;
@property(readonly, nonatomic) int value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

