//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDDEDExtensionStarted : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_extension;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasExtension;
@property(nonatomic) _Bool hasTimestamp;

@end

