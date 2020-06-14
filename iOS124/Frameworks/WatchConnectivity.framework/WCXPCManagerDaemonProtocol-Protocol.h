//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSData, NSString, NSURL, WCMessage, WCSessionFileTransfer, WCSessionUserInfoTransfer;

@protocol WCXPCManagerDaemonProtocol <NSObject>
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeUserInfoIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeFileResultIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)acknowledgeFileIndexWithIdentifier:(NSString *)arg1 clientPairingID:(NSString *)arg2;
- (void)cancelAllOutstandingMessages;
- (void)cancelSendWithIdentifier:(NSString *)arg1;
- (void)transferUserInfo:(WCSessionUserInfoTransfer *)arg1 withURL:(NSURL *)arg2 clientPairingID:(NSString *)arg3 errorHandler:(void (^)(NSError *))arg4;
- (void)transferFile:(WCSessionFileTransfer *)arg1 sandboxToken:(NSData *)arg2 clientPairingID:(NSString *)arg3 errorHandler:(void (^)(NSError *))arg4;
- (void)updateApplicationContext:(NSData *)arg1 clientPairingID:(NSString *)arg2 errorHandler:(void (^)(NSError *))arg3;
- (void)sendMessage:(WCMessage *)arg1 clientPairingID:(NSString *)arg2 acceptanceHandler:(void (^)(_Bool, _Bool))arg3;
- (void)sessionReadyForInitialStateForClientPairingID:(NSString *)arg1 supportsActiveDeviceSwitch:(_Bool)arg2 withErrorHandler:(void (^)(NSError *))arg3;
@end

