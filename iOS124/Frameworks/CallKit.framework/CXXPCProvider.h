//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider
{
    int _notifyToken;
    NSXPCConnection *_connection;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)requiresProxyingAVAudioSessionState;
- (id)hostProtocolDelegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end
