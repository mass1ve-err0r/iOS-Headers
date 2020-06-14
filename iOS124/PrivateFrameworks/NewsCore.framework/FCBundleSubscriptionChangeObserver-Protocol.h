//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionChangeSet;

@protocol FCBundleSubscriptionChangeObserver <NSObject>

@optional
- (void)bundleSubscriptionDidChange:(FCBundleSubscription *)arg1 previousBundleSubscription:(FCBundleSubscription *)arg2 changeSet:(FCBundleSubscriptionChangeSet *)arg3;
- (void)bundleSubscriptionDidExpire:(FCBundleSubscription *)arg1;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1;
@end

