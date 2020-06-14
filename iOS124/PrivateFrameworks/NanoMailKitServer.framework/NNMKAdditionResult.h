//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageAdditions, NSMutableArray;

@interface NNMKAdditionResult : NSObject
{
    _Bool _receivedOldMessages;
    NNMKProtoMessageAdditions *_protoMessagesWithNotificationPriority;
    NNMKProtoMessageAdditions *_protoMessagesWithDefaultPriority;
    NSMutableArray *_messageIdsWithNotificationPriority;
    NSMutableArray *_messageIdsWithDefaultPriority;
    unsigned long long _resendInterval;
}

@property(nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property(nonatomic) _Bool receivedOldMessages; // @synthesize receivedOldMessages=_receivedOldMessages;
@property(retain, nonatomic) NSMutableArray *messageIdsWithDefaultPriority; // @synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority;
@property(retain, nonatomic) NSMutableArray *messageIdsWithNotificationPriority; // @synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority;
@property(retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority; // @synthesize protoMessagesWithDefaultPriority=_protoMessagesWithDefaultPriority;
@property(retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority; // @synthesize protoMessagesWithNotificationPriority=_protoMessagesWithNotificationPriority;
- (void).cxx_destruct;

@end

