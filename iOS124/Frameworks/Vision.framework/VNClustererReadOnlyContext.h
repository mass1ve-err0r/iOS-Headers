//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNClustererContextBase.h>

#import <Vision/VNClustererModelQuerying-Protocol.h>

@protocol VNClusteringReadOnly><VNClusteringCancelling;

__attribute__((visibility("hidden")))
@interface VNClustererReadOnlyContext : VNClustererContextBase <VNClustererModelQuerying>
{
    id <VNClusteringReadOnly><VNClusteringCancelling> _clusterer;
}

+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id *)arg4;
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;
- (_Bool)_createGreedyClustererWith:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 error:(id *)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id *)arg5;

@end

