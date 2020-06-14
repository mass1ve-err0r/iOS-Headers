//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSObject, NSString, NSUUID;
@protocol NSSecureCoding;

@protocol UAResumableActivitiesAdministrativeProtocol <NSObject>
- (void)doGetSFActivityAdvertisement:(NSDictionary *)arg1 completionHandler:(void (^)(NSData *, NSDate *, NSUUID *, NSError *))arg2;
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;
- (void)doSetRemotePasteboardAvalible:(_Bool)arg1;
- (void)doReplayCommands:(NSArray *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)getCurrentPeersAndClear:(_Bool)arg1 completionHandler:(void (^)(UAPingResults *))arg2;
- (void)stopAdvertisingPing;
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;
- (void)doSetupRendevous:(NSString *)arg1 domain:(NSString *)arg2 activate:(_Bool)arg3;
- (void)doSetupNetworkedPairs:(NSString *)arg1 port:(long long)arg2;
- (void)doBroadcastPing:(void (^)(UAPingResults *))arg1;
- (void)doWillSaveDelegate:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doSetDefaults:(NSString *)arg1 value:(NSObject<NSSecureCoding> *)arg2;
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)doCopySimulatorStatusString:(NSDictionary *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)doInjectBTLE:(NSUUID *)arg1 type:(unsigned long long)arg2 identifier:(NSString *)arg3 title:(NSString *)arg4 activityPayload:(NSData *)arg5 frameworkPayload:(NSData *)arg6 payloadDelay:(double)arg7;
- (void)doGetCurrentAdvertisedItemUUID:(void (^)(NSUUID *))arg1;
- (void)doTerminateServer;
- (void)doCopyDynamicUserActivitiesString:(NSDictionary *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)doCopyStatusString:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)doCopyRecentActions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doCopyDebuggingInfo:(NSDictionary *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (void)doCopyEnabledUUIDsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(void (^)(NSArray *))arg2;
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)doFindMatchingUserActivityForString:(NSString *)arg1 withCompletionHandler:(void (^)(NSUUID *))arg2;
- (void)doSetDebugOption:(NSString *)arg1 value:(id)arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end

