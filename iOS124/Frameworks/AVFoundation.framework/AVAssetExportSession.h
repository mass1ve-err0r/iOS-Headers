//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSessionInternal, NSError, NSString, NSURL;

@interface AVAssetExportSession : NSObject
{
    AVAssetExportSessionInternal *_exportSession;
}

+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (CDStruct_1b6d18a9)maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)allExportPresets;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(_Bool)arg1;
- (_Bool)canPerformMultiplePassesOverSourceMediaData;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
- (id)customVideoCompositor;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (void)setAudioMix:(id)arg1;
- (id)audioMix;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)audioTimePitchAlgorithm;
- (void)setMaximizePowerEfficiency:(_Bool)arg1;
- (_Bool)maximizePowerEfficiency;
- (void)setFileLengthLimit:(long long)arg1;
- (long long)fileLengthLimit;
- (void)setMetadataItemFilter:(id)arg1;
- (id)metadataItemFilter;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (long long)estimatedOutputFileLength;
- (_Bool)preserveSyncFrames;
- (void)setPreserveSyncFrames:(_Bool)arg1;
- (id)videoFrameRateConversionAlgorithm;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (CDStruct_1b6d18a9)minVideoFrameDuration;
- (void)setMinVideoFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)maxDuration;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRange;
- (void)cancelExport;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(copy, nonatomic) NSURL *outputURL;
@property(copy, nonatomic) NSString *outputFileType;
- (void)determineCompatibleFileTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)supportedFileTypes;
@property(readonly, nonatomic) NSString *presetName;
@property(readonly, retain, nonatomic) AVAsset *asset;
- (id)description;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (id)init;

@end

