//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol RPMessageable
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 destinationID:(NSString *)arg3 options:(NSDictionary *)arg4 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)sendRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)deregisterRequestID:(NSString *)arg1;
- (void)registerRequestID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *, void (^)(NSDictionary *, NSDictionary *, NSError *)))arg3;
- (void)sendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 destinationID:(NSString *)arg3 options:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)sendEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)deregisterEventID:(NSString *)arg1;
- (void)registerEventID:(NSString *)arg1 options:(NSDictionary *)arg2 handler:(void (^)(NSDictionary *, NSDictionary *))arg3;
@end

