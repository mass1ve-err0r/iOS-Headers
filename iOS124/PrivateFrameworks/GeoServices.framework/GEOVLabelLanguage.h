//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOVLabelLanguage : PBCodable <NSCopying>
{
    unsigned int _endOffset;
    NSString *_languageLocale;
    unsigned int _startOffset;
}

@property(retain, nonatomic) NSString *languageLocale; // @synthesize languageLocale=_languageLocale;
@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end
