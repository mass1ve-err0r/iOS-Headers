//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSDate, UNNotificationRequest;

@interface UNNotification : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_date;
    UNNotificationRequest *_request;
}

+ (_Bool)supportsSecureCoding;
+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;
@property(readonly, copy, nonatomic) UNNotificationRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2;

@end

