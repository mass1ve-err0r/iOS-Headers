//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString, VNSceneClassificationCustomHierarchy, VNSceneObservation;

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>
{
}

+ (id)knownSceneClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)knownSceneClassifications;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (Class)configurationClass;
+ (id)_knownVNImageAnalyzerMultiDetectorLabelsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_imageAnalyzerMultiDetectorForRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2 processingDevice:(id)arg3 requestBackingStore:(unsigned long long)arg4 error:(id *)arg5;
+ (id)_sceneClassifierForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id *)arg3;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id *)arg2;
- (_Bool)defineCustomHierarchy:(id)arg1 error:(id *)arg2;
- (void)_setCustomHierarchy:(id)arg1;
@property(readonly, copy, nonatomic) VNSceneClassificationCustomHierarchy *customHierarchy;
@property(nonatomic) unsigned long long maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations;
- (void)setSceneObservation:(id)arg1;
@property(readonly, retain, nonatomic) VNSceneObservation *sceneObservation;
- (CDUnknownBlockType)resultsSortingComparator;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (void)setRevision:(unsigned long long)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)_applicableDetectorAndReturnError:(id *)arg1;
- (id)initWithSceneObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSceneObservation:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) NSArray *supportedImageSizeSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

