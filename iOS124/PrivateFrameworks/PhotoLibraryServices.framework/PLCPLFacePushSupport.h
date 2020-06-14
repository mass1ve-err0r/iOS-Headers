//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject
{
    id <PLSyncContext> _syncContext;
}

+ (void)markSyncableFacesAsPushedInAsset:(id)arg1;
+ (_Bool)_shouldPushBeingKeyFace:(id)arg1;
+ (_Bool)isFaceSyncable:(id)arg1;
+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long *)arg2;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2;
- (_Bool)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long *)arg2;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1;

@end

