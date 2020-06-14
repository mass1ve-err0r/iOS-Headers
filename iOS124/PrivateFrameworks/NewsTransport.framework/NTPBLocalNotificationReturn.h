//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBLocalNotificationReturn : PBCodable <NSCopying>
{
    long long _localNotificationSentTimestamp;
    int _localNoticationNumberReceived;
    int _localNotificationDirectOpenNumber;
    int _localNotificationType;
    _Bool _localNotificationDirectOpen;
    struct {
        unsigned int localNotificationSentTimestamp:1;
        unsigned int localNoticationNumberReceived:1;
        unsigned int localNotificationDirectOpenNumber:1;
        unsigned int localNotificationType:1;
        unsigned int localNotificationDirectOpen:1;
    } _has;
}

@property(nonatomic) int localNotificationDirectOpenNumber; // @synthesize localNotificationDirectOpenNumber=_localNotificationDirectOpenNumber;
@property(nonatomic) long long localNotificationSentTimestamp; // @synthesize localNotificationSentTimestamp=_localNotificationSentTimestamp;
@property(nonatomic) int localNoticationNumberReceived; // @synthesize localNoticationNumberReceived=_localNoticationNumberReceived;
@property(nonatomic) _Bool localNotificationDirectOpen; // @synthesize localNotificationDirectOpen=_localNotificationDirectOpen;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLocalNotificationDirectOpenNumber;
@property(nonatomic) _Bool hasLocalNotificationSentTimestamp;
@property(nonatomic) _Bool hasLocalNotificationType;
@property(nonatomic) int localNotificationType; // @synthesize localNotificationType=_localNotificationType;
@property(nonatomic) _Bool hasLocalNoticationNumberReceived;
@property(nonatomic) _Bool hasLocalNotificationDirectOpen;

@end

