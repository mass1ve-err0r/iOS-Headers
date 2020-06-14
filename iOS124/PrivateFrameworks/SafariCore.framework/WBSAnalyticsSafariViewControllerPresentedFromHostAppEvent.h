//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@class NSString;

@interface WBSAnalyticsSafariViewControllerPresentedFromHostAppEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_hostAppBundleID;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *hostAppBundleID; // @synthesize hostAppBundleID=_hostAppBundleID;
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
@property(readonly, nonatomic) _Bool hasHostAppBundleID;
@property(nonatomic) _Bool hasTimestamp;

@end

