//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAContextCallbackXPC-Protocol.h"

@protocol OS_xpc_object;

@interface LACallbackXPC : NSObject <LAContextCallbackXPC>
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

- (void).cxx_destruct;
- (void)tccPreflightWithService:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidatedWithError:(id)arg1;
- (id)initWithXpcConnection:(id)arg1;

@end

