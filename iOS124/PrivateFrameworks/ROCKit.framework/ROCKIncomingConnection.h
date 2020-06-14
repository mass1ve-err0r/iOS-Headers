//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface ROCKIncomingConnection : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

+ (id)connectionWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(CDUnknownBlockType)arg3;

@end

