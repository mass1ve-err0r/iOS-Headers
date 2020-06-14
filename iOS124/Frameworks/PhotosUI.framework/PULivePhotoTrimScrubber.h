//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class AVAsset, AVVideoComposition, ISWrappedAVPlayer, NSArray, NSString, PUFilmstripView, PULivePhotoTrimScrubberLoupeView, UIImage, UIImageView, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol PULivePhotoTrimScrubberDelegate;

@interface PULivePhotoTrimScrubber : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_trimStartHandle;
    UIImageView *_trimEndHandle;
    PULivePhotoTrimScrubberLoupeView *_photoLoupe;
    PUFilmstripView *_filmstripView;
    UIView *_preTrimOverlayView;
    UIView *_postTrimOverlayView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    struct {
        _Bool respondsToDidBeginInteractivelyEditingElement;
        _Bool respondsToCanBeginInteractivelyEditingElement;
        _Bool respondsToDidEndInteractivelyEditingElement;
        _Bool respondsToDidChangeTimeForElement;
        _Bool respondsToAssetDurationDidChange;
        _Bool respondsToDidChangeLoupeRect;
    } _delegateFlags;
    NSArray *_snappingControllers;
    long long _photoLoupeHideRequestCounter;
    long long _trimControlsHideRequestCounter;
    _Bool _hasPresentedControls;
    CDStruct_1b6d18a9 _minimumTrimLength;
    CDStruct_1b6d18a9 _photoTrimBuffer;
    UIImpactFeedbackGenerator *_impactGenerator;
    long long _changeDepth;
    _Bool _canEditKeyTime;
    _Bool __photoLoupeHidden;
    _Bool __trimControlsHidden;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _horizontalInset;
    NSArray *_snapKeyTimes;
    id <PULivePhotoTrimScrubberDelegate> _delegate;
    double __contentAspectRatio;
    long long __trackingElement;
    CDStruct_1b6d18a9 _untrimmedDuration;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_1b6d18a9 _trimEndTime;
    CDStruct_1b6d18a9 _trimStartTime;
}

@property(nonatomic, getter=_areTrimControlsHidden, setter=_setTrimControlsHidden:) _Bool _trimControlsHidden; // @synthesize _trimControlsHidden=__trimControlsHidden;
@property(nonatomic, getter=_isPhotoLoupeHidden, setter=_setPhotoLoupeHidden:) _Bool _photoLoupeHidden; // @synthesize _photoLoupeHidden=__photoLoupeHidden;
@property(nonatomic, setter=_setTrackingElement:) long long _trackingElement; // @synthesize _trackingElement=__trackingElement;
@property(nonatomic, setter=_setContentAspectRatio:) double _contentAspectRatio; // @synthesize _contentAspectRatio=__contentAspectRatio;
@property(nonatomic) __weak id <PULivePhotoTrimScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) CDStruct_1b6d18a9 trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(copy, nonatomic) NSArray *snapKeyTimes; // @synthesize snapKeyTimes=_snapKeyTimes;
@property(nonatomic) _Bool canEditKeyTime; // @synthesize canEditKeyTime=_canEditKeyTime;
@property(nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic, setter=_setUntrimmedDuration:) CDStruct_1b6d18a9 untrimmedDuration; // @synthesize untrimmedDuration=_untrimmedDuration;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_trimHandleDidReachBounds;
- (void)_presentControlsIfNeeded;
- (void)_setTrimControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 withRequstID:(long long)arg3;
- (void)_setTrimControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)_setTrimControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setPhotoLoupeHidden:(_Bool)arg1 animated:(_Bool)arg2 withRequstID:(long long)arg3;
- (void)_setPhotoLoupeHidden:(_Bool)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)_setPhotoLoupeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateSnappingControllers;
- (void)_updateContentAspectRatio;
- (void)_assetDidLoadValues;
- (void)_handleEndPanGesture:(_Bool)arg1;
- (void)_handleChangePanGesture:(id)arg1;
- (void)_handleBeginPanGesture:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (CDStruct_1b6d18a9)_timeAtPoint:(struct CGPoint)arg1;
- (double)_offsetForTime:(CDStruct_1b6d18a9)arg1;
- (void)_PULivePhotoTrimScrubber_commonInit;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(readonly, nonatomic) struct CGRect loupeRect;
@property(readonly, nonatomic) long long currentlyInteractingElement;
@property(readonly, nonatomic, getter=isAssetDurationLoaded) _Bool assetDurationLoaded;
- (double)horizontalOffsetForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeForElement:(long long)arg1;
@property(readonly, nonatomic) long long trimStatus;
- (void)performAnimatedChanges:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)reloadThumbnails;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

