//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying>
{
    unsigned int _senderLanguages;
    _Bool _canDisplayCaptions;
    struct {
        unsigned int senderLanguages:1;
        unsigned int canDisplayCaptions:1;
    } _has;
}

@property(nonatomic) unsigned int senderLanguages; // @synthesize senderLanguages=_senderLanguages;
@property(nonatomic) _Bool canDisplayCaptions; // @synthesize canDisplayCaptions=_canDisplayCaptions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSenderLanguages;
@property(nonatomic) _Bool hasCanDisplayCaptions;

@end

