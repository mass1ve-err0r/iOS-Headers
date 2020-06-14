//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSlotClientNotification-Protocol.h>

@class NSArray, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification>
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (id)slotNamed:(id)arg1;
- (void)getSlotWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *slotNames;
- (id)init;

@end

