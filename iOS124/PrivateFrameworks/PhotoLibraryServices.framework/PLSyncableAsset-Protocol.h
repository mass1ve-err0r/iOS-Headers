//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSDate, NSSet, NSString;

@protocol PLSyncableAsset <NSObject, PLSyncableObject>
@property(readonly, nonatomic) _Bool hasAdjustmentsOrLegacyAdjustments;
@property(readonly, copy, nonatomic) NSString *syncedAdjustmentFingerprint;
@property(readonly, nonatomic) id faceAdjustmentVersion;
@property(readonly, copy, nonatomic) NSDate *dateForComparingAdjustmentVersions;
@property(readonly, nonatomic) _Bool faceDetectionComplete;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(retain, nonatomic) NSSet *detectedFaces;
@property(readonly, retain, nonatomic) NSString *cloudIdentifier;
- (NSString *)syncDescription;
- (void)markForNeedingFaceDetection;
@end

