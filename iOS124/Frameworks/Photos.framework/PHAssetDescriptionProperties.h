//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetDescriptionProperties : PHAssetPropertySet
{
    NSString *_assetDescription;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, copy, nonatomic) NSString *assetDescription; // @synthesize assetDescription=_assetDescription;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end

