//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSString;

@interface PBBProtoDemoWirelessCredentials : PBCodable <NSCopying>
{
    NSString *_password;
    NSString *_ssid;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
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
@property(readonly, nonatomic) _Bool hasPassword;
@property(readonly, nonatomic) _Bool hasSsid;

@end

