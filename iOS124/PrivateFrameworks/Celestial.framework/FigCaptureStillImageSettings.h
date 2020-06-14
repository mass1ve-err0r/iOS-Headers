//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Celestial/NSCopying-Protocol.h>
#import <Celestial/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying>
{
    long long _settingsID;
    int _payloadType;
    int _settingsProvider;
    unsigned int _outputFormat;
    int _outputFileType;
    unsigned int _rawOutputFormat;
    int _rawOutputFileType;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    _Bool _squareCropEnabled;
    _Bool _outputMirroring;
    int _outputOrientation;
    _Bool _previewEnabled;
    unsigned int _previewFormat;
    unsigned int _previewWidth;
    unsigned int _previewHeight;
    _Bool _previewMirroring;
    int _previewOrientation;
    _Bool _thumbnailEnabled;
    unsigned int _thumbnailFormat;
    unsigned int _thumbnailWidth;
    unsigned int _thumbnailHeight;
    _Bool _rawThumbnailEnabled;
    unsigned int _rawThumbnailFormat;
    unsigned int _rawThumbnailWidth;
    unsigned int _rawThumbnailHeight;
    _Bool _noiseReductionEnabled;
    _Bool _burstQualityCaptureEnabled;
    float _scaleFactor;
    unsigned int _shutterSound;
    int _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    int _wideColorMode;
    int _HDRMode;
    _Bool _depthDataDeliveryEnabled;
    _Bool _embedsDepthDataInImage;
    _Bool _depthDataFiltered;
    _Bool _cameraCalibrationDataDeliveryEnabled;
    _Bool _portraitEffectsMatteDeliveryEnabled;
    _Bool _embedsPortraitEffectsMatteInImage;
    NSDictionary *_metadata;
    NSArray *_originalImageFilters;
    NSArray *_processedImageFilters;
    float _simulatedAperture;
    _Bool _providesOriginalImage;
    _Bool _bravoDualImageDeliveryEnabled;
    int _SISMode;
    int _bravoImageFusionMode;
    NSDictionary *_vtCompressionProperties;
    int _bracketType;
    unsigned int _bracketImageCount;
    _Bool _lensStabilizationDuringBracketEnabled;
    CDStruct_1b6d18a9 *_exposureDurations;
    float *_ISOs;
    float *_exposureTargetBiases;
    unsigned long long _stillImageUserInitiatedRequestTime;
    CDStruct_1b6d18a9 _stillImageUserInitiatedRequestPTS;
    long long _stillImageRequestTime;
    long long _stillImageCaptureStartTime;
    double _stillImageCaptureAbsoluteStartTime;
    NSString *_imageGroupIdentifier;
    _Bool _clientInitiatedPrepareSettings;
    _Bool _userInitiatedRequestSettings;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isUserInitiatedRequestSettings) _Bool userInitiatedRequestSettings; // @synthesize userInitiatedRequestSettings=_userInitiatedRequestSettings;
@property(nonatomic, getter=isClientInitiatedPrepareSettings) _Bool clientInitiatedPrepareSettings; // @synthesize clientInitiatedPrepareSettings=_clientInitiatedPrepareSettings;
@property(nonatomic) double stillImageCaptureAbsoluteStartTime; // @synthesize stillImageCaptureAbsoluteStartTime=_stillImageCaptureAbsoluteStartTime;
@property(nonatomic) long long stillImageCaptureStartTime; // @synthesize stillImageCaptureStartTime=_stillImageCaptureStartTime;
@property(nonatomic) long long stillImageRequestTime; // @synthesize stillImageRequestTime=_stillImageRequestTime;
@property(nonatomic) CDStruct_1b6d18a9 stillImageUserInitiatedRequestPTS; // @synthesize stillImageUserInitiatedRequestPTS=_stillImageUserInitiatedRequestPTS;
@property(nonatomic) unsigned long long stillImageUserInitiatedRequestTime; // @synthesize stillImageUserInitiatedRequestTime=_stillImageUserInitiatedRequestTime;
@property(readonly, nonatomic) float *exposureTargetBiases; // @synthesize exposureTargetBiases=_exposureTargetBiases;
@property(readonly, nonatomic) float *ISOs; // @synthesize ISOs=_ISOs;
@property(readonly, nonatomic) CDStruct_1b6d18a9 *exposureDurations; // @synthesize exposureDurations=_exposureDurations;
@property(nonatomic) _Bool lensStabilizationDuringBracketEnabled; // @synthesize lensStabilizationDuringBracketEnabled=_lensStabilizationDuringBracketEnabled;
@property(readonly, nonatomic) unsigned int bracketImageCount; // @synthesize bracketImageCount=_bracketImageCount;
@property(readonly, nonatomic) int bracketType; // @synthesize bracketType=_bracketType;
@property(copy, nonatomic) NSDictionary *vtCompressionProperties; // @synthesize vtCompressionProperties=_vtCompressionProperties;
@property(nonatomic) int bravoImageFusionMode; // @synthesize bravoImageFusionMode=_bravoImageFusionMode;
@property(nonatomic) int SISMode; // @synthesize SISMode=_SISMode;
@property(nonatomic) _Bool bravoDualImageDeliveryEnabled; // @synthesize bravoDualImageDeliveryEnabled=_bravoDualImageDeliveryEnabled;
@property(nonatomic) _Bool providesOriginalImage; // @synthesize providesOriginalImage=_providesOriginalImage;
@property(nonatomic) float simulatedAperture; // @synthesize simulatedAperture=_simulatedAperture;
@property(copy, nonatomic) NSArray *processedImageFilters; // @synthesize processedImageFilters=_processedImageFilters;
@property(copy, nonatomic) NSArray *originalImageFilters; // @synthesize originalImageFilters=_originalImageFilters;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool embedsPortraitEffectsMatteInImage; // @synthesize embedsPortraitEffectsMatteInImage=_embedsPortraitEffectsMatteInImage;
@property(nonatomic) _Bool portraitEffectsMatteDeliveryEnabled; // @synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled;
@property(nonatomic) _Bool cameraCalibrationDataDeliveryEnabled; // @synthesize cameraCalibrationDataDeliveryEnabled=_cameraCalibrationDataDeliveryEnabled;
@property(nonatomic) _Bool depthDataFiltered; // @synthesize depthDataFiltered=_depthDataFiltered;
@property(nonatomic) _Bool embedsDepthDataInImage; // @synthesize embedsDepthDataInImage=_embedsDepthDataInImage;
@property(nonatomic) _Bool depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property(nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property(nonatomic) int wideColorMode; // @synthesize wideColorMode=_wideColorMode;
@property(nonatomic) _Bool autoRedEyeReductionEnabled; // @synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) unsigned int shutterSound; // @synthesize shutterSound=_shutterSound;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool burstQualityCaptureEnabled; // @synthesize burstQualityCaptureEnabled=_burstQualityCaptureEnabled;
@property(nonatomic) _Bool noiseReductionEnabled; // @synthesize noiseReductionEnabled=_noiseReductionEnabled;
@property(nonatomic) unsigned int rawThumbnailHeight; // @synthesize rawThumbnailHeight=_rawThumbnailHeight;
@property(nonatomic) unsigned int rawThumbnailWidth; // @synthesize rawThumbnailWidth=_rawThumbnailWidth;
@property(nonatomic) unsigned int rawThumbnailFormat; // @synthesize rawThumbnailFormat=_rawThumbnailFormat;
@property(nonatomic) _Bool rawThumbnailEnabled; // @synthesize rawThumbnailEnabled=_rawThumbnailEnabled;
@property(nonatomic) unsigned int thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property(nonatomic) unsigned int thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(nonatomic) unsigned int thumbnailFormat; // @synthesize thumbnailFormat=_thumbnailFormat;
@property(nonatomic) _Bool thumbnailEnabled; // @synthesize thumbnailEnabled=_thumbnailEnabled;
@property(nonatomic) int previewOrientation; // @synthesize previewOrientation=_previewOrientation;
@property(nonatomic) _Bool previewMirroring; // @synthesize previewMirroring=_previewMirroring;
@property(nonatomic) unsigned int previewHeight; // @synthesize previewHeight=_previewHeight;
@property(nonatomic) unsigned int previewWidth; // @synthesize previewWidth=_previewWidth;
@property(nonatomic) unsigned int previewFormat; // @synthesize previewFormat=_previewFormat;
@property(nonatomic) _Bool previewEnabled; // @synthesize previewEnabled=_previewEnabled;
@property(nonatomic) int outputOrientation; // @synthesize outputOrientation=_outputOrientation;
@property(nonatomic) _Bool outputMirroring; // @synthesize outputMirroring=_outputMirroring;
@property(nonatomic) _Bool squareCropEnabled; // @synthesize squareCropEnabled=_squareCropEnabled;
@property(nonatomic) unsigned int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) unsigned int outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) int rawOutputFileType; // @synthesize rawOutputFileType=_rawOutputFileType;
@property(nonatomic) unsigned int rawOutputFormat; // @synthesize rawOutputFormat=_rawOutputFormat;
@property(nonatomic) int outputFileType; // @synthesize outputFileType=_outputFileType;
@property(nonatomic) unsigned int outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) int settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(nonatomic) int payloadType; // @synthesize payloadType=_payloadType;
@property(nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
- (void)_teardownBracketStorage;
- (id)figCaptureIrisPreparedSettingsRepresentation;
@property(readonly, nonatomic) NSString *imageGroupIdentifier;
- (void)setBracketType:(int)arg1 imageCount:(unsigned int)arg2;
@property(readonly, nonatomic) NSDictionary *previewPixelBufferAttributes;
@property(readonly, nonatomic, getter=isOutputFormatCompressed) _Bool outputFormatCompressed;
@property(readonly, nonatomic) NSDictionary *outputPixelBufferAttributes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

