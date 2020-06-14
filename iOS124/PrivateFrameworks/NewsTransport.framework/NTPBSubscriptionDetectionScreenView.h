//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying>
{
    int _countOfSubscriptionsDetected;
    struct {
        unsigned int countOfSubscriptionsDetected:1;
    } _has;
}

@property(nonatomic) int countOfSubscriptionsDetected; // @synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCountOfSubscriptionsDetected;

@end

