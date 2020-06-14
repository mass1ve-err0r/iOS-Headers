//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SPXPCConnection;
@protocol OS_os_transaction, OS_xpc_object;

@interface SPXPCMessage : NSObject
{
    SPXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_rootObject;
    NSObject<OS_xpc_object> *_x_Objects;
    NSObject<OS_xpc_object> *_x_reply;
    NSObject<OS_xpc_object> *_x_feedbackData;
    NSObject<OS_os_transaction> *_replyTransaction;
    NSString *_name;
    NSDictionary *_info;
}

@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)needsReply;
- (void)sendReply:(id)arg1;
- (id)_createXPCMessage;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *feedbackData;
- (void)setRootObjectForFeedback:(id)arg1;
- (id)rootObjectOfClassesForFeedback:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rootObjectOfClasses:(id)arg1;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;

@end

