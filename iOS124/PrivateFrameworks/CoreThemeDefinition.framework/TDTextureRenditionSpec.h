//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDTexturePixelFormat, TDThemeCompressionType;

@interface TDTextureRenditionSpec : TDRenditionSpec
{
}

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(nonatomic) _Bool cubeMap; // @dynamic cubeMap;
@property(retain, nonatomic) NSSet *mipLevels; // @dynamic mipLevels;
@property(retain, nonatomic) TDTexturePixelFormat *pixelFormat; // @dynamic pixelFormat;

@end
