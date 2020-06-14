//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSNumber, NSString;

@interface NSDictionary (MKAppStoreDictionary)
@property(readonly, nonatomic) _Bool isInstalled;
@property(readonly, nonatomic) _Bool isOfficialApp;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSArray *transitModeKeys;
- (id)bestImageURLForWidth:(double)arg1;
@property(readonly, nonatomic) NSString *priceFormatted;
- (id)_defaultOffer;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) unsigned long long ratingCount;
@property(readonly, nonatomic) float averageRating;
@property(readonly, nonatomic) NSNumber *storeID;
- (id)_ratingData;
@property(readonly, nonatomic) NSString *creator;
@property(readonly, nonatomic) NSString *bundleId;
@property(readonly, nonatomic) NSString *title;
@end

