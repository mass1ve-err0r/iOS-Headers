//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSession-Protocol.h>

@class NSXPCConnection, TKSmartCardSlotEngine;

__attribute__((visibility("hidden")))
@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>
{
    TKSmartCardSlotEngine *_slot;
    _Bool _transmitting;
    _Bool _valid;
    _Bool _active;
    long long _endPolicy;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property _Bool active; // @synthesize active=_active;
@property _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)terminateWithReply:(CDUnknownBlockType)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;

@end

