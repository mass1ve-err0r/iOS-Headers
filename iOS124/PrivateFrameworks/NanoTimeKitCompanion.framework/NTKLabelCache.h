//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NTKLabelCache : NSObject
{
    NSMutableDictionary *_atlases;
    NSMutableSet *_preloadSet;
}

+ (void)wipe;
+ (id)numeralsSetFromCurrentLocale;
+ (id)versionFilePath;
+ (id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(_Bool)arg5;
+ (id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(_Bool)arg5 filter:(_Bool)arg6;
+ (void)_purgeCache;
+ (_Bool)localeChanged;
+ (void)primeForDevice:(id)arg1;
+ (_Bool)setNumeralsSet:(id)arg1;
- (void).cxx_destruct;
- (id)_labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(_Bool)arg5;
- (void)_exportTextureAtlasForFaceStyle:(long long)arg1 forDevice:(id)arg2;
- (id)_nameForFaceStyle:(long long)arg1;
- (id)_labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(_Bool)arg5 filter:(_Bool)arg6;
- (id)_textureForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(_Bool)arg5;
- (void)_primeForDevice:(id)arg1 font:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(_Bool)arg5 preload:(_Bool)arg6;
- (void)_exportTextureAtlasForDevice:(id)arg1 forFont:(long long)arg2 modifier:(id)arg3 values:(id)arg4 padWithZeroes:(_Bool)arg5 preload:(_Bool)arg6;
- (id)_keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(_Bool)arg3;
- (id)_keyForLabelWithFont:(long long)arg1 modifier:(id)arg2 padWithZeroes:(_Bool)arg3;
- (id)_currentImageSuffixesForDevice:(id)arg1;
- (id)_supportedImageSuffixesForDevice:(id)arg1;
- (void)_loadAtlases;
- (void)checkVersion;
- (_Bool)_localeChanged;
- (void)dealloc;
- (id)init;

@end

