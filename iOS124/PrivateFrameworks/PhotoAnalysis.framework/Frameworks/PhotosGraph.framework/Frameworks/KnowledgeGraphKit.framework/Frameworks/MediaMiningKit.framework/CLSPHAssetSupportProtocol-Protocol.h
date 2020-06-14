//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>

@class NSData, NSSet;

@protocol CLSPHAssetSupportProtocol <CLSInvestigationItem>
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
- (double)duration;
- (NSSet *)clsSceneClassifications;
- (double)clsAestheticScore;
- (double)clsExposureScore;
- (double)clsSharpnessScore;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
- (NSData *)clsDistanceIdentity;
- (long long)clsBlinkCount;
- (long long)clsSmileCount;
- (long long)clsShareCount;
- (long long)clsPlayCount;
- (long long)clsViewCount;
- (unsigned long long)facesCount;
- (_Bool)representsBurst;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)hasAdjustments;
- (_Bool)isUtility;
- (_Bool)isBlurry;
- (_Bool)isTrashed;
- (_Bool)isAudio;
- (_Bool)isVideo;
- (_Bool)isHidden;
- (_Bool)isFavorite;
@end

