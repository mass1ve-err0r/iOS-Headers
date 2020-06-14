/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession> {
    NSString * _aggDKeyBasePrefix;
    AVTAvatarRecord * _avatarRecord;
    <AVTAvatarStoreInternal> * _avatarStore;
    AVTAvatarConfiguration * _defaultConfiguration;
    NSDate * _editorEnterDate;
    bool  _expandedMode;
    AVTUsageTrackingRecordTimedEvent * _faceTrackingEvent;
    <AVTUILogger> * _logger;
    <AVTAvatarConfigurationMetric> * _metric;
    <AVTAggDClient> * _ntsAggDClient;
    <AVTDifferentialPrivacyRecorder> * _ntsDPRecorder;
    id /* block */  _recordTransformer;
    bool  _recordedVideo;
    id /* block */  _timeProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSString *aggDKeyBasePrefix;
@property (nonatomic, readonly) AVTAvatarRecord *avatarRecord;
@property (nonatomic, retain) <AVTAvatarStoreInternal> *avatarStore;
@property (nonatomic, readonly) AVTAvatarConfiguration *defaultConfiguration;
@property (nonatomic, retain) NSDate *editorEnterDate;
@property (nonatomic) bool expandedMode;
@property (nonatomic, retain) AVTUsageTrackingRecordTimedEvent *faceTrackingEvent;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTAvatarConfigurationMetric> *metric;
@property (nonatomic, readonly) <AVTAggDClient> *ntsAggDClient;
@property (nonatomic, readonly) <AVTDifferentialPrivacyRecorder> *ntsDPRecorder;
@property (nonatomic, readonly, copy) id /* block */ recordTransformer;
@property (nonatomic) bool recordedVideo;
@property (nonatomic, readonly, copy) id /* block */ timeProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)aggDKeyBasePrefixForBundleIdentifier:(id)arg1;
+ (id)colorPresetDescriptionForAvatarConfiguration:(id)arg1;
+ (id /* block */)configurationDistanceClassifierWithMetric:(id)arg1;
+ (id /* block */)defaultRecordTransformerForCoreModel:(id)arg1;
+ (id /* block */)defaultTimeProvider;
+ (id)dpKeyBasePrefix;
+ (void)getPresetDescription:(out id*)arg1 usedCategoriesDescription:(out id*)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4;
+ (id)keyContentForAvatarRecord:(id)arg1 action:(id)arg2 includingPuppetName:(bool)arg3 avatarTypeAsSuffix:(bool)arg4;
+ (id /* block */)likenessComparator;
+ (id)makeDPKey:(id)arg1;
+ (id)makeKeyAggDCompliant:(id)arg1;
+ (id)whitelistAppNameFromBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)aggDKeyBasePrefix;
- (id)appendHostAppNameToKeyIfNeeded:(id)arg1;
- (id)avatarRecord;
- (id)avatarStore;
- (void)beginWithStore:(id)arg1;
- (id)defaultConfiguration;
- (void)didChangeCurrentAvatarInCarousel:(id)arg1;
- (void)didChangeCurrentAvatarInStickers:(id)arg1;
- (void)didCreateAvatar:(id)arg1;
- (void)didDeleteAvatar:(id)arg1;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didDuplicateAvatar:(id)arg1;
- (void)didEditAvatar:(id)arg1;
- (void)didEnterEditor;
- (void)didLeaveEditor;
- (void)didOpenStickersAppFromRecents;
- (void)didPauseFaceTracking;
- (void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (void)didRecordVideo;
- (void)didReplayVideo;
- (void)didResumeFaceTracking;
- (void)didSendImageWithAvatar:(id)arg1;
- (void)didSendStickerWithAvatar:(id)arg1;
- (void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
- (void)didShowExpandedMode;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
- (void)didStopFaceTrackingInCarousel;
- (void)didTapStickerFromRecents:(id)arg1;
- (void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
- (id)editorEnterDate;
- (void)end;
- (bool)expandedMode;
- (id)faceTrackingEvent;
- (id)initWithAggDClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(id /* block */)arg3 recordTransformer:(id /* block */)arg4 avatarRecord:(id)arg5 defaultConfiguration:(id)arg6 timeProvider:(id /* block */)arg7 configurationMetric:(id)arg8 logger:(id)arg9 aggDKeyBasePrefix:(id)arg10;
- (id)initWithSerialQueueProvider:(id /* block */)arg1 recordTransformer:(id /* block */)arg2 logger:(id)arg3;
- (id)logger;
- (id)makeAggDDistributionKey:(id)arg1;
- (id)makeAggDScalarKey:(id)arg1;
- (id)metric;
- (id)ntsAggDClient;
- (id)ntsDPRecorder;
- (void)nts_loadDefaultConfigurationIfNeeded;
- (void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2;
- (void)nts_reportAvatarCountWithClient:(id)arg1;
- (void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2;
- (void)nts_reportAvatarLikenessClustersWithClient:(id)arg1;
- (void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2;
- (void)nts_reportExpandedModeWithClient:(id)arg1;
- (void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2;
- (void)performClientWork:(id /* block */)arg1;
- (id /* block */)recordTransformer;
- (bool)recordedVideo;
- (void)reportAddOneForScalarKey:(id)arg1;
- (void)sentStickerFromStickersApp:(id)arg1 withAvatarRecord:(id)arg2 action:(id)arg3;
- (void)setAvatarStore:(id)arg1;
- (void)setEditorEnterDate:(id)arg1;
- (void)setExpandedMode:(bool)arg1;
- (void)setFaceTrackingEvent:(id)arg1;
- (void)setRecordedVideo:(bool)arg1;
- (id /* block */)timeProvider;
- (id)workQueue;

@end