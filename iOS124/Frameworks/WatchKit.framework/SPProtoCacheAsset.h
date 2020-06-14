//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying>
{
    double _accessDate;
    unsigned long long _size;
    NSString *_key;
    unsigned int _state;
}

@property(nonatomic) double accessDate; // @synthesize accessDate=_accessDate;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
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

@end

