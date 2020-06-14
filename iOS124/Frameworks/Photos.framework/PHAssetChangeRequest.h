//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class CLLocation, NSData, NSDate, NSIndexSet, NSManagedObjectID, NSMutableDictionary, NSSet, NSString, NSURL, PHAsset, PHChangeRequestHelper, PHContentEditingOutput, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHAssetChangeRequest : NSObject <PHUpdateChangeRequest>
{
    PHAsset *_originalAsset;
    NSURL *_editorBundleURL;
    CLLocation *_updatedLocation;
    NSString *_assetDescription;
    PHChangeRequestHelper *_helper;
    _Bool _clientEntitled;
    _Bool _didSetVisibilityState;
    NSString *_clientName;
    _Bool _didSetSceneClassifications;
    NSSet *_sceneClassifications;
    short _sceneAnalysisVersion;
    NSDate *_sceneAnalysisTimestamp;
    NSData *_distanceIdentity;
    NSMutableDictionary *_analysisStatesByWorkerType;
    _Bool _allowUnsafeSetProcessed;
    _Bool _incrementPlayCount;
    _Bool _incrementShareCount;
    NSDate *_lastSharedDate;
    _Bool _incrementViewCount;
    _Bool _toRetryUpload;
    _Bool _didSetVariationSuggestionStates;
    unsigned long long _variationSuggestionStates;
    unsigned long long _variationSuggestionStatesMask;
    _Bool _revealNonPrimaryAssetsInAssetGroup;
    _Bool _hideNonPrimaryAssetsInAssetGroup;
    _Bool _didModifyComputedAttributes;
    NSMutableDictionary *_computedAttributeMutations;
    _Bool _didSetPackedPreferredCropRect;
    _Bool _didSetPackedAcceptableCropRect;
    long long _packedPreferredCropRect;
    long long _packedAcceptableCropRect;
    _Bool _didSetBestVideoTimeRange;
    _Bool _didSetBestKeyFrameTime;
    _Bool _didSetMediaAnalysisTimeStamp;
    _Bool _didSetMediaAnalysisVersion;
    _Bool _didSetBlurrinessScore;
    _Bool _didSetExposureScore;
    _Bool _didSetAutoplaySuggestionScore;
    _Bool _didSetVideoScore;
    _Bool _didSetActivityScore;
    _Bool _didSetFaceCount;
    _Bool _didSetSceneprintData;
    _Bool _didSetOriginalResourceChoice;
    _Bool _didChangeAdjustments;
    _Bool _duplicateAllowsPrivateMetadata;
    unsigned short _photoIrisVisibilityState;
    int _clientProcessID;
    float _testScore;
    float _blurrinessScore;
    float _exposureScore;
    float _autoplaySuggestionScore;
    float _videoScore;
    float _activityScore;
    unsigned long long _originalResourceChoice;
    PHContentEditingOutput *_contentEditingOutput;
    NSString *_editorBundleID;
    NSString *_clientBundleID;
    NSIndexSet *_supportedEditOperations;
    NSURL *_videoURLForUpdate;
    NSString *_pairingIdentifier;
    PHRelationshipChangeRequestHelper *_facesHelper;
    NSDate *_alternateImportImageDate;
    NSDate *_mediaAnalysisTimeStamp;
    unsigned long long _mediaAnalysisVersion;
    unsigned long long _faceCount;
    NSData *_sceneprintData;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_1b6d18a9 _imageDisplayTime;
    CDStruct_1b6d18a9 _bestKeyFrameTime;
    CDStruct_e83c9415 _bestVideoTimeRange;
}

+ (void)undeleteAssets:(id)arg1;
+ (void)expungeAssets:(id)arg1;
+ (void)deleteAssets:(id)arg1;
+ (id)changeRequestForAsset:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)_allAssetEditOperations;
@property(retain, nonatomic) NSData *sceneprintData; // @synthesize sceneprintData=_sceneprintData;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(nonatomic) float activityScore; // @synthesize activityScore=_activityScore;
@property(nonatomic) float videoScore; // @synthesize videoScore=_videoScore;
@property(nonatomic) float autoplaySuggestionScore; // @synthesize autoplaySuggestionScore=_autoplaySuggestionScore;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float blurrinessScore; // @synthesize blurrinessScore=_blurrinessScore;
@property(nonatomic) CDStruct_e83c9415 bestVideoTimeRange; // @synthesize bestVideoTimeRange=_bestVideoTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 bestKeyFrameTime; // @synthesize bestKeyFrameTime=_bestKeyFrameTime;
@property(nonatomic) unsigned long long mediaAnalysisVersion; // @synthesize mediaAnalysisVersion=_mediaAnalysisVersion;
@property(retain, nonatomic) NSDate *mediaAnalysisTimeStamp; // @synthesize mediaAnalysisTimeStamp=_mediaAnalysisTimeStamp;
@property(nonatomic) float testScore; // @synthesize testScore=_testScore;
@property(nonatomic) CDStruct_1b6d18a9 imageDisplayTime; // @synthesize imageDisplayTime=_imageDisplayTime;
@property(retain, nonatomic) NSDate *alternateImportImageDate; // @synthesize alternateImportImageDate=_alternateImportImageDate;
@property(readonly, nonatomic) _Bool duplicateAllowsPrivateMetadata; // @synthesize duplicateAllowsPrivateMetadata=_duplicateAllowsPrivateMetadata;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) NSURL *videoURLForUpdate; // @synthesize videoURLForUpdate=_videoURLForUpdate;
@property(retain, nonatomic) NSIndexSet *supportedEditOperations; // @synthesize supportedEditOperations=_supportedEditOperations;
@property(readonly, copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly, copy, nonatomic) NSString *editorBundleID; // @synthesize editorBundleID=_editorBundleID;
@property(readonly, nonatomic) _Bool didChangeAdjustments; // @synthesize didChangeAdjustments=_didChangeAdjustments;
@property(retain, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(nonatomic) unsigned long long originalResourceChoice; // @synthesize originalResourceChoice=_originalResourceChoice;
@property(nonatomic) unsigned short photoIrisVisibilityState; // @synthesize photoIrisVisibilityState=_photoIrisVisibilityState;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (void)markDidChangeAdjustments;
- (void)didMutate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isRevertingContentToOriginal;
- (_Bool)isHiding;
@property(readonly, getter=isMutated) _Bool mutated;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateReadAccessForContentURL:(id)arg1 assetResource:(id)arg2 error:(id *)arg3;
- (id)getMediaAnalysisAttributesForAsset:(id)arg1;
- (_Bool)validateWriteAccessForContentURL:(id)arg1 error:(id *)arg2;
- (_Bool)validateContentEditingOutput:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)validateAssetDescription:(id)arg1 error:(id *)arg2;
- (_Bool)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id *)arg2;
- (_Bool)validateVideoURLForAssetMutation:(id)arg1 error:(id *)arg2;
- (_Bool)_validateImageURLForAssetMutation:(id)arg1 error:(id *)arg2;
- (_Bool)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg1 error:(id *)arg2;
- (void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4 allowUnsafeSetProcessed:(_Bool)arg5;
- (void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4;
- (void)encodeToXPCDict:(id)arg1;
- (void)revertAssetContentToOriginal;
- (void)retryUpload;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(_Bool)arg5 fullSizeRenderSize:(struct CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 optionalOriginalResourceChoice:(id)arg9;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(_Bool)arg5 fullSizeRenderSize:(struct CGSize)arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAsset:(id)arg1;
- (void)hideNonPrimaryAssetsInAssetGroup;
- (void)revealNonPrimaryAssetsInAssetGroup;
- (void)setVariationSuggestionStates:(unsigned long long)arg1 forVariationType:(unsigned long long)arg2;
- (void)incrementViewCount;
- (void)incrementShareCount;
- (void)incrementPlayCount;
@property(retain, nonatomic) id faceAdjustmentVersion;
- (void)removeFaces:(id)arg1;
- (void)addFaces:(id)arg1;
- (void)setRectWithNormalizedRect:(struct CGRect)arg1 forPackedRect:(long long *)arg2 forSetFlag:(_Bool *)arg3;
- (void)setAcceptableCropRectWithNormalizedRect:(struct CGRect)arg1;
- (void)setPreferredCropRectWithNormalizedRect:(struct CGRect)arg1;
- (void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 distanceIdentity:(id)arg3 adjustmentVersion:(id)arg4;
- (void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 adjustmentVersion:(id)arg3;
@property(retain, nonatomic) NSString *assetDescription;
@property(nonatomic) float lowLight;
@property(nonatomic) float pleasantCameraTiltScore;
@property(nonatomic) float intrusiveObjectPresenceScore;
@property(nonatomic) float interestingSubjectScore;
@property(nonatomic) float pleasantCompositionScore;
@property(nonatomic) float failureScore;
@property(nonatomic) float noiseScore;
@property(nonatomic) float pleasantPostProcessingScore;
@property(nonatomic) float pleasantPerspectiveScore;
@property(nonatomic) float immersivenessScore;
@property(nonatomic) float pleasantPatternScore;
@property(nonatomic) float pleasantSymmetryScore;
@property(nonatomic) float livelyColorScore;
@property(nonatomic) float harmoniousColorScore;
@property(nonatomic) float pleasantReflectionsScore;
@property(nonatomic) float pleasantLightingScore;
@property(nonatomic) float wellTimedShotScore;
@property(nonatomic) float sharplyFocusedSubjectScore;
@property(nonatomic) float tastefullyBlurredScore;
@property(nonatomic) float wellChosenSubjectScore;
@property(nonatomic) float wellFramedSubjectScore;
@property(retain, nonatomic) CLLocation *location;
@property(nonatomic) float overallAestheticScore;
@property(nonatomic) double curationScore;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic, getter=isFavorite) _Bool favorite;
@property(retain, nonatomic) NSDate *modificationDate;
@property(retain, nonatomic) NSDate *creationDate;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAsset;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithHelper:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

