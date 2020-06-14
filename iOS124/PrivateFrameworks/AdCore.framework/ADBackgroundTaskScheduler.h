//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
{
}

+ (void)unregisterTaskDelegate:(id)arg1;
+ (void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2;
+ (id)sharedInstance;
- (void)checkOnTask:(id)arg1;
- (void)cancelBackgroundTask:(id)arg1;
- (void)addBackgroundTask:(id)arg1;
- (void)handleXPCActivity:(id)arg1 withID:(id)arg2;
- (id)init;

@end

