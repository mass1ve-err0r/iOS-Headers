//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUPhotoEditProtoSettings : PXSettings
{
    _Bool _showLevelIndicator;
    _Bool _showResetToolButton;
    _Bool _allowAnyPlugin;
    _Bool _cropMaskBlurred;
    _Bool _autoCropEnabled;
    _Bool _simulateDownload;
    _Bool _simulateDownloadFailure;
    _Bool _previewOriginalAllowsLongPress;
    _Bool _previewOriginalTimesOut;
    _Bool _livePhotoTrimAllowed;
    _Bool _showEffectsPicker;
    long long _renderPriority;
    double _cropSideMargins;
    double _cropWheelSize;
    double _cropRecomposeDelay;
    double _maxRawMP;
    double _previewOriginalDuration;
    double _minimumLivePhotoTrimDuration;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool showEffectsPicker; // @synthesize showEffectsPicker=_showEffectsPicker;
@property(nonatomic) double minimumLivePhotoTrimDuration; // @synthesize minimumLivePhotoTrimDuration=_minimumLivePhotoTrimDuration;
@property(nonatomic) _Bool livePhotoTrimAllowed; // @synthesize livePhotoTrimAllowed=_livePhotoTrimAllowed;
@property(nonatomic) double previewOriginalDuration; // @synthesize previewOriginalDuration=_previewOriginalDuration;
@property(nonatomic) _Bool previewOriginalTimesOut; // @synthesize previewOriginalTimesOut=_previewOriginalTimesOut;
@property(nonatomic) _Bool previewOriginalAllowsLongPress; // @synthesize previewOriginalAllowsLongPress=_previewOriginalAllowsLongPress;
@property(nonatomic) double maxRawMP; // @synthesize maxRawMP=_maxRawMP;
@property(nonatomic) _Bool simulateDownloadFailure; // @synthesize simulateDownloadFailure=_simulateDownloadFailure;
@property(nonatomic) _Bool simulateDownload; // @synthesize simulateDownload=_simulateDownload;
@property(nonatomic) double cropRecomposeDelay; // @synthesize cropRecomposeDelay=_cropRecomposeDelay;
@property(nonatomic) _Bool autoCropEnabled; // @synthesize autoCropEnabled=_autoCropEnabled;
@property(nonatomic) _Bool cropMaskBlurred; // @synthesize cropMaskBlurred=_cropMaskBlurred;
@property(nonatomic) double cropWheelSize; // @synthesize cropWheelSize=_cropWheelSize;
@property(nonatomic) double cropSideMargins; // @synthesize cropSideMargins=_cropSideMargins;
@property(nonatomic) _Bool allowAnyPlugin; // @synthesize allowAnyPlugin=_allowAnyPlugin;
@property(nonatomic) _Bool showResetToolButton; // @synthesize showResetToolButton=_showResetToolButton;
@property(nonatomic) _Bool showLevelIndicator; // @synthesize showLevelIndicator=_showLevelIndicator;
@property(nonatomic) long long renderPriority; // @synthesize renderPriority=_renderPriority;
- (void)setDefaultValues;
- (id)parentSettings;

@end

