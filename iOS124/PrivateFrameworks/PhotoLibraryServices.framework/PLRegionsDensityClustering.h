//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLRegionsClustering.h>

@interface PLRegionsDensityClustering : PLRegionsClustering
{
    _Bool _includeDefiniteClusters;
    _Bool _removeDefiniteClustersObjectsFromDataset;
    _Bool _includeExtensiveClusters;
    _Bool _removeExtensiveClustersObjectsFromDataset;
    _Bool _removeExtensiveClustersContainingDefiniteClusters;
    _Bool _clusterAllRemainingObjects;
    unsigned long long _algorithm;
    double _definiteClusterTimeIntervalDistance;
    double _definiteClusterMaximumDistanceUnit;
    double _definiteClusterMinimumNumberOfObjectsPercent;
    unsigned long long _definiteClusterMinimumNumberOfObjects;
    double _extensiveClusterTimeIntervalDistance;
    double _extensiveClusterMaximumDistanceUnit;
    double _extensiveClusterMinimumNumberOfObjectsPercent;
    unsigned long long _extensiveClusterMinimumNumberOfObjects;
}

@property(nonatomic) _Bool clusterAllRemainingObjects; // @synthesize clusterAllRemainingObjects=_clusterAllRemainingObjects;
@property(nonatomic) _Bool removeExtensiveClustersContainingDefiniteClusters; // @synthesize removeExtensiveClustersContainingDefiniteClusters=_removeExtensiveClustersContainingDefiniteClusters;
@property(nonatomic) _Bool removeExtensiveClustersObjectsFromDataset; // @synthesize removeExtensiveClustersObjectsFromDataset=_removeExtensiveClustersObjectsFromDataset;
@property(nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects; // @synthesize extensiveClusterMinimumNumberOfObjects=_extensiveClusterMinimumNumberOfObjects;
@property(nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent; // @synthesize extensiveClusterMinimumNumberOfObjectsPercent=_extensiveClusterMinimumNumberOfObjectsPercent;
@property(nonatomic) double extensiveClusterMaximumDistanceUnit; // @synthesize extensiveClusterMaximumDistanceUnit=_extensiveClusterMaximumDistanceUnit;
@property(nonatomic) double extensiveClusterTimeIntervalDistance; // @synthesize extensiveClusterTimeIntervalDistance=_extensiveClusterTimeIntervalDistance;
@property(nonatomic) _Bool includeExtensiveClusters; // @synthesize includeExtensiveClusters=_includeExtensiveClusters;
@property(nonatomic) _Bool removeDefiniteClustersObjectsFromDataset; // @synthesize removeDefiniteClustersObjectsFromDataset=_removeDefiniteClustersObjectsFromDataset;
@property(nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects; // @synthesize definiteClusterMinimumNumberOfObjects=_definiteClusterMinimumNumberOfObjects;
@property(nonatomic) double definiteClusterMinimumNumberOfObjectsPercent; // @synthesize definiteClusterMinimumNumberOfObjectsPercent=_definiteClusterMinimumNumberOfObjectsPercent;
@property(nonatomic) double definiteClusterMaximumDistanceUnit; // @synthesize definiteClusterMaximumDistanceUnit=_definiteClusterMaximumDistanceUnit;
@property(nonatomic) double definiteClusterTimeIntervalDistance; // @synthesize definiteClusterTimeIntervalDistance=_definiteClusterTimeIntervalDistance;
@property(nonatomic) _Bool includeDefiniteClusters; // @synthesize includeDefiniteClusters=_includeDefiniteClusters;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1;
- (CDUnknownBlockType)_locationBasedClusteringBlock;
- (id)init;

@end

