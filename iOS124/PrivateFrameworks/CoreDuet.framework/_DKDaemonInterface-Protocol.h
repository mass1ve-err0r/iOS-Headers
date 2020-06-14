//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSPredicate, NSString, _DKQuery;

@protocol _DKDaemonInterface
- (void)confirmDatabaseConnectionWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)sourceDeviceIdentityWithReply:(void (^)(NSObject *, NSError *))arg1;
- (void)deleteRemoteState:(void (^)(_Bool, NSError *))arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)synchronizeWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteAllEventsInEventStreamNamed:(NSString *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)executeQuery:(_DKQuery *)arg1 reply:(void (^)(NSObject *, NSError *))arg2;
- (void)deleteObjects:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)saveObjects:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

