//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SpringBoardAlertProxy;
@protocol OS_xpc_object;

@protocol SpringBoardAlertProxyDelegate <NSObject>

@optional
- (void)alertProxyDidCancel:(SpringBoardAlertProxy *)arg1;
- (void)alertProxy:(SpringBoardAlertProxy *)arg1 didReceiveMessage:(NSObject<OS_xpc_object> *)arg2;
@end

