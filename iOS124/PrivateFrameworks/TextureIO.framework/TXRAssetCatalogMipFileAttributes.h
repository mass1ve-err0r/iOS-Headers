//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes
{
    unsigned long long _level;
    unsigned long long _face;
}

@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (_Bool)doesSpecifyAllFaces;
- (void)specifyAllFaces;
@property(nonatomic) unsigned long long face;
- (id)init;

@end

