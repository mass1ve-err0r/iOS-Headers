//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AMSUserNotificationStrategy;

__attribute__((visibility("hidden")))
@interface AMSUserNotificationCenter : NSObject
{
    id <AMSUserNotificationStrategy> _strategy;
}

+ (Class)_determineStrategyForBundleId:(id)arg1;
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)postNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;
@property(readonly, nonatomic) id <AMSUserNotificationStrategy> strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;

@end

