//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListItem-Protocol.h>

@class NCNotificationRequest, NSString;

@interface NCNotificationListNotificationRequestItem : NSObject <NCNotificationListItem>
{
    NCNotificationRequest *_notificationRequest;
}

@property(readonly, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long itemType;
- (id)initWithNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

