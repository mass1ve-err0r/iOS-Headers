//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNImageIdealImageSizeProviding-Protocol.h>

@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>
{
}

+ (Class)configurationClass;
- (void)applyConfigurationOfRequest:(id)arg1;
@property(nonatomic) unsigned long long maximumObservations;
@property(nonatomic) unsigned long long requiredVersion;
@property(nonatomic) float minimumConfidence;
@property(nonatomic) float minimumSize;
@property(nonatomic) float quadratureTolerance;
@property(nonatomic) float maximumAspectRatio;
@property(nonatomic) float minimumAspectRatio;
- (void)setSortedResults:(id)arg1;
- (CDUnknownBlockType)resultsSortingComparator;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)_detectorOptions;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (long long)dependencyProcessingOrdinality;
@property(readonly) NSArray *supportedImageSizeSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

