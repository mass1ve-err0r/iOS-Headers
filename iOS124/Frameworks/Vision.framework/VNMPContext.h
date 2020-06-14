//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNMPContext : NSObject
{
    _Bool _useTimestampAdjustedDistances;
    _Bool _performClustersPostprocessing;
    _Bool _performSceneClassification;
    int _debugMode;
    int _timerMode;
    int _clusterSplitDistanceType;
    float _roiAreaThreshold;
    float _inliersRatioThreshold;
    int _numberOfKeypointsToConsider;
    float _naturalClusteringDistanceThreshold;
    NSArray *_qualityCriteriaList;
}

@property float naturalClusteringDistanceThreshold; // @synthesize naturalClusteringDistanceThreshold=_naturalClusteringDistanceThreshold;
@property int numberOfKeypointsToConsider; // @synthesize numberOfKeypointsToConsider=_numberOfKeypointsToConsider;
@property float inliersRatioThreshold; // @synthesize inliersRatioThreshold=_inliersRatioThreshold;
@property float roiAreaThreshold; // @synthesize roiAreaThreshold=_roiAreaThreshold;
@property _Bool performSceneClassification; // @synthesize performSceneClassification=_performSceneClassification;
@property _Bool performClustersPostprocessing; // @synthesize performClustersPostprocessing=_performClustersPostprocessing;
@property _Bool useTimestampAdjustedDistances; // @synthesize useTimestampAdjustedDistances=_useTimestampAdjustedDistances;
@property(retain) NSArray *qualityCriteriaList; // @synthesize qualityCriteriaList=_qualityCriteriaList;
@property int clusterSplitDistanceType; // @synthesize clusterSplitDistanceType=_clusterSplitDistanceType;
@property int timerMode; // @synthesize timerMode=_timerMode;
@property int debugMode; // @synthesize debugMode=_debugMode;
- (void).cxx_destruct;

@end

