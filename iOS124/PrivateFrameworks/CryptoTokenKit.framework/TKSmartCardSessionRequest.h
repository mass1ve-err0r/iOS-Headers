//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionRequest : NSObject
{
    NSDictionary *_parameters;
    CDUnknownBlockType _reply;
    NSXPCConnection *_connection;
}

@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;

@end

