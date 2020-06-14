//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SPCompanionAppServerProtocol <NSObject>
- (void)extensionWithIdentifier:(NSString *)arg1 gotUnknownInterfaceController:(NSString *)arg2;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(NSString *)arg1 withUserInfoData:(NSData *)arg2 reply:(void (^)(NSDictionary *, NSError *, long long, NSString *))arg3;
- (void)requestTimingData:(NSString *)arg1 timingMetaData:(NSDictionary *)arg2;
- (void)fetchNotificationForNotificationID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSData *, NSData *, NSError *))arg2;
- (void)sendData:(NSData *)arg1 identifier:(NSString *)arg2 clientIdentifiers:(NSArray *)arg3 reply:(void (^)(NSData *, NSError *))arg4;
- (void)sendData:(NSData *)arg1 identifier:(NSString *)arg2 clientIdentifiers:(NSArray *)arg3;
- (void)sendCacheRequest:(NSData *)arg1 identifier:(NSString *)arg2;
@end
