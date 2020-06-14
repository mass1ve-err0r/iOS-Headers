//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying>
{
    unsigned long long _subtypeID;
    BLTPBSectionIcon *_icon;
    NSString *_sectionID;
    _Bool _defaultSubtype;
    struct {
        unsigned int subtypeID:1;
        unsigned int defaultSubtype:1;
    } _has;
}

@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool defaultSubtype; // @synthesize defaultSubtype=_defaultSubtype;
@property(nonatomic) unsigned long long subtypeID; // @synthesize subtypeID=_subtypeID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
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
@property(readonly, nonatomic) _Bool hasIcon;
@property(nonatomic) _Bool hasDefaultSubtype;
@property(nonatomic) _Bool hasSubtypeID;
@property(readonly, nonatomic) _Bool hasSectionID;

@end

