//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class PLPTPAsset, PLPTPConversionResult;

@protocol PLPTPConversionSupport <NSObject>
@property(readonly, nonatomic) _Bool supportsTranscodeChoice;
- (PLPTPConversionResult *)conversionResultForAsset:(PLPTPAsset *)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3 forceLegacyConversion:(_Bool)arg4;
@end

