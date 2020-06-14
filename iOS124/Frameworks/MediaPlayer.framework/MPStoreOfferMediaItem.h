//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor, NSDictionary, NSNumber;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying>
{
    NSDictionary *_lookupCollectionPropertyValues;
    NSNumber *_itemID;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
    MPStoreOfferMediaItemArtworkDescriptor *_offerArtworkDescriptor;
    long long _offerArtworkDescriptorOnceToken;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

+ (id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (_Bool)canRequestStoreOfferForLocalMediaItems:(id)arg1;
+ (_Bool)canMergeStoreOfferWithLocalMediaItems:(id)arg1;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
+ (id)defaultPropertyValues;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3;
+ (_Bool)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
- (void).cxx_destruct;
- (id)_lookupOfferDictionaries;
- (id)offerArtworkDescriptor;
- (long long)preferredStoreOfferVariant;
- (id)buyOfferForVariant:(long long)arg1;
- (_Bool)isDownloadable;
- (_Bool)_offeredItemAlreadyExists;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)albumTrackNumber;
- (unsigned long long)discNumber;
- (id)title;
- (unsigned long long)persistentID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mediaLibrary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3;
- (id)screenshotArtworkCatalog;

@end

