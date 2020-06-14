//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesRelatedSettings : PXSettings
{
    _Bool _enableFeedbackUI;
    _Bool _enableFeedbackComboUI;
    _Bool _enableMemoriesLivingOnFeedback;
    _Bool _enableManualRefreshUI;
    _Bool _fakePeopleProximity;
    _Bool _enableMemoryBlurryHeader;
    double _refreshPhotoKitTimeout;
    double _widgetRefreshTimeInterval;
    long long _minimumNumberOfCuratedAssetsForInterestingMoments;
    long long _minimumNumberOfCuratedAssetsForMemories;
    long long _minimumNumberOfCuratedAssetsForMovieHeader;
    unsigned long long _deleteBehavior;
}

+ (id)sharedInstance;
+ (void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3;
+ (void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3;
+ (id)settingsControllerModule;
@property(nonatomic) unsigned long long deleteBehavior; // @synthesize deleteBehavior=_deleteBehavior;
@property(nonatomic) _Bool enableMemoryBlurryHeader; // @synthesize enableMemoryBlurryHeader=_enableMemoryBlurryHeader;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader; // @synthesize minimumNumberOfCuratedAssetsForMovieHeader=_minimumNumberOfCuratedAssetsForMovieHeader;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForMemories; // @synthesize minimumNumberOfCuratedAssetsForMemories=_minimumNumberOfCuratedAssetsForMemories;
@property(nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments; // @synthesize minimumNumberOfCuratedAssetsForInterestingMoments=_minimumNumberOfCuratedAssetsForInterestingMoments;
@property(nonatomic) double widgetRefreshTimeInterval; // @synthesize widgetRefreshTimeInterval=_widgetRefreshTimeInterval;
@property(nonatomic) double refreshPhotoKitTimeout; // @synthesize refreshPhotoKitTimeout=_refreshPhotoKitTimeout;
@property(nonatomic) _Bool fakePeopleProximity; // @synthesize fakePeopleProximity=_fakePeopleProximity;
@property(nonatomic) _Bool enableManualRefreshUI; // @synthesize enableManualRefreshUI=_enableManualRefreshUI;
@property(nonatomic) _Bool enableMemoriesLivingOnFeedback; // @synthesize enableMemoriesLivingOnFeedback=_enableMemoriesLivingOnFeedback;
@property(nonatomic) _Bool enableFeedbackComboUI; // @synthesize enableFeedbackComboUI=_enableFeedbackComboUI;
@property(nonatomic) _Bool enableFeedbackUI; // @synthesize enableFeedbackUI=_enableFeedbackUI;
- (void)performPostSaveActions;
- (void)setDefaultValues;
- (id)parentSettings;

@end

