//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FCBundleSubscription : NSObject <NSCopying>
{
    _Bool _isPurchaser;
    NSString *_bundlePurchaseID;
    NSArray *_bundleChannelIDs;
    unsigned long long _unprotectedSubscriptionState;
}

+ (id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2;
@property(nonatomic) unsigned long long unprotectedSubscriptionState; // @synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState;
@property(nonatomic) _Bool isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property(copy, nonatomic) NSArray *bundleChannelIDs; // @synthesize bundleChannelIDs=_bundleChannelIDs;
@property(copy, nonatomic) NSString *bundlePurchaseID; // @synthesize bundlePurchaseID=_bundlePurchaseID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)containsTagID:(id)arg1;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(_Bool)arg3 isPurchaser:(_Bool)arg4;
- (_Bool)containsHeadline:(id)arg1;

@end

