//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCTodayPrivateData-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString;
@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property(nonatomic) unsigned long long bundleSubscriptionState;
@property(copy, nonatomic) NSString *bundleIAP;
@property(copy, nonatomic) NSNumber *onboardingVersion;
@property(copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(copy, nonatomic) NSArray *rankedPersonalSubscribedTagIDs;
@property(copy, nonatomic) NSSet *purchasedTagIDs;
@property(copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property(copy, nonatomic) NSSet *mutedTagIDs;
@property(copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@end

