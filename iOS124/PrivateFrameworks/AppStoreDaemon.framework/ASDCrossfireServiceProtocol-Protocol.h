//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class ASDAppEvent;

@protocol ASDCrossfireServiceProtocol <NSObject>
- (void)sendMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)resetMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)reportAppEvent:(ASDAppEvent *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)recordMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)recordLaunchesWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)getAppEventsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)flushMetricsWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
@end

