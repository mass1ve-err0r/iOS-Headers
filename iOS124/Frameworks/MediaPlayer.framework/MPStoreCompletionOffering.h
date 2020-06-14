//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreCompletionOfferResponse, MPStoreOfferMediaItemCollection, NSURL;

@interface MPStoreCompletionOffering : NSObject <NSCopying>
{
    long long _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    MPMediaQuery *_localItemsQuery;
    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;
    long long _presentationStyle;
    NSURL *_storeURL;
}

+ (id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2;
+ (long long)defaultOfferVariant;
+ (void)setDefaultOfferVariant:(long long)arg1;
@property(readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPStoreOfferMediaItemCollection *collectionWithCompletionItems;
@property(nonatomic) long long preferredStoreOfferVariant;
- (void)_loadOfferingData;
- (id)copyByInvalidatingCalculatedContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2;

@end

