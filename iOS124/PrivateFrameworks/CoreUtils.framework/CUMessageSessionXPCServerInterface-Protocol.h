//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol CUMessageSessionXPCServerInterface
- (void)remoteSendRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 request:(NSDictionary *)arg3 responseHandler:(void (^)(int, NSDictionary *, NSDictionary *))arg4;
- (void)remoteRegisterRequestID:(NSString *)arg1 options:(NSDictionary *)arg2;
@end

