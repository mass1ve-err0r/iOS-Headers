//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObjectPropertySet-Protocol.h>

@class NSString, PHAsset;
@protocol PHFetchDictionaryAccessing;

@protocol PHAssetPropertySet <PHObjectPropertySet>
+ (NSString *)propertySetName;
@property(readonly, nonatomic) __weak PHAsset *asset;
- (id)initWithFetchDictionary:(id <PHFetchDictionaryAccessing>)arg1 asset:(PHAsset *)arg2 prefetched:(_Bool)arg3;
@end

