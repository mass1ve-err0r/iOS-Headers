//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments
{
    float _slowMotionRate;
    CDStruct_e83c9415 _slowMotionTimeRange;
}

+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;
+ (_Bool)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)arg1;
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) float slowMotionRate; // @synthesize slowMotionRate=_slowMotionRate;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;
- (void)_updateDerivedPropertiesFromVersionedData;
- (_Bool)isRecognizedFormat;
- (id)description;
- (id)initWithPropertyListDictionary:(id)arg1;
- (_Bool)hasSlowMotionAdjustments;
- (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampOut;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampIn;

@end

