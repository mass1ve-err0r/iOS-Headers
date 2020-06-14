//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_xpc_object;

@interface HSAAuthenticationServer : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    _Bool _hasRegistered;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)_configureWithClient:(id)arg1;
- (void)_cleanupClient:(id)arg1;
- (void)_cleanup;
- (void)_clientConnected;
- (void)parseIncomingMessageFromNumber:(id)arg1 forService:(id)arg2 messageBody:(id)arg3;
- (id)init;

@end

