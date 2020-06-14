//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKAccountsSyncServiceServer, NNMKProtoAccountSourceType, NSDictionary, NSString;

@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didReceivedAccountAuthenticationStatus:(NSDictionary *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didChangeAccountSourceType:(NNMKProtoAccountSourceType *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

