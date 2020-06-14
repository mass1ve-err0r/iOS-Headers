//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSString *_daemonDir;
}

+ (void)dispatchReallyAfter:(long long)arg1 tolerance:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)deviceHasPearl;
+ (_Bool)deviceHasSEP;
+ (_Bool)shouldHideFaceIdForCaller;
+ (_Bool)isSiriPlugin:(id)arg1;
+ (id)callerDisplayNameWithPid:(int)arg1 bundleId:(id *)arg2;
+ (id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id *)arg2;
+ (id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id *)arg2;
+ (id)_uuidForPid:(int)arg1;
+ (id)_callerUUID;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *daemonDir; // @synthesize daemonDir=_daemonDir;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
- (void).cxx_destruct;
- (id)init;

@end

