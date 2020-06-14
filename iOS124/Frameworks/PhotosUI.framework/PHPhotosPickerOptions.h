//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

@interface PHPhotosPickerOptions : NSObject
{
    _Bool _hideTabBar;
    NSDictionary *_initialAssetsToSelect;
    PHAsset *_keyAsset;
    PHAssetCollection *_keyAssetCollection;
    NSArray *_excludedContentModes;
}

@property(nonatomic) _Bool hideTabBar; // @synthesize hideTabBar=_hideTabBar;
@property(copy, nonatomic) NSArray *excludedContentModes; // @synthesize excludedContentModes=_excludedContentModes;
@property(retain, nonatomic) PHAssetCollection *keyAssetCollection; // @synthesize keyAssetCollection=_keyAssetCollection;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSDictionary *initialAssetsToSelect; // @synthesize initialAssetsToSelect=_initialAssetsToSelect;
- (void).cxx_destruct;

@end

