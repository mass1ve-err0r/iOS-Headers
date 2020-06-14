//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKClockHardwareInput-Protocol.h>
#import <NanoTimeKitCompanion/NTKClockIconZoomAnimator-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationDisplayWrapperViewAnimationDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravelModuleViewTapClient-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>
#import <NanoTimeKitCompanion/PUICCrownInputSequencerDelegate-Protocol.h>

@class CAFilter, CLKDevice, NSDate, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NTKClockIconView, NTKContainerView, NTKExtraLargeTimeView, NTKFaceEditView, NTKTimeTravelModuleView, UIImage;
@protocol NTKFaceViewDelegate, NTKTimeView;

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, NTKContainerViewLayoutDelegate, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKClockIconZoomAnimator, NTKTimeView, NTKClockHardwareInput>
{
    double _accumulatedTimeTravelEntryRotation;
    NSTimer *_accumulateTimeTravelEntryRotationTimeoutTimer;
    NSTimer *_fastCrownModeTimeoutTimer;
    _Bool _fastCrownMode;
    _Bool _transitioningBetweenLiveAndScrubbing;
    _Bool _wasScrubbingAtStartOfTransition;
    _Bool _canHandleHardwareEvents;
    NSDate *_timeTravelEnterDate;
    NSDate *_scrubDate;
    NTKTimeTravelModuleView *_timeTravelModuleView;
    UIView *_timeTravelCaptionView;
    UIImage *_timeTravelCaptionImage;
    double _timeTravelDistanceToYesterdayStart;
    double _timeTravelDistanceToTomorrowEnd;
    NSDate *_yesterdayStart;
    NSDate *_tomorrowEnd;
    NSTimer *_crownIdleTimer;
    double _lastCrownOffset;
    NSDate *_aggdTimeTravelSessionStart;
    double _aggdTimeTravelMaximumOffset;
    _Bool _statusIconVisible;
    NTKExtraLargeTimeView *_sensitiveUIShieldView;
    NSMutableDictionary *_complicationDisplayWrappers;
    NSMutableDictionary *_complicationLayouts;
    NSMutableDictionary *_complicationPickerViews;
    NSMutableDictionary *_editConfigurations;
    NSMutableSet *_hiddenComplicationSlots;
    NSString *_timeTravelCaptionKey;
    struct CGSize _boundsSizeForComputedLayouts;
    NTKContainerView *_foregroundContainerView;
    NSDate *_overrideDate;
    _Bool _needsRender;
    _Bool _needsImageQueueDiscardOnRender;
    _Bool _needsTraceOnRender;
    _Bool _removedFromWindowDuringThisTransaction;
    _Bool _isBackgrounded;
    _Bool _renderWasIgnored;
    _Bool _unadornedSnapshotRemoved;
    float _complicationEditingSaturationValue;
    CAFilter *_complicationEditingSaturationFilter;
    _Bool _shouldShowUnsnapshotableContent;
    _Bool _showsCanonicalContent;
    _Bool _showContentForUnadornedSnapshot;
    _Bool _showsLockedUI;
    _Bool _zooming;
    _Bool _everyComplicationHidden;
    _Bool _frozen;
    _Bool _slow;
    _Bool _orbing;
    _Bool _complicationsShowEditingContent;
    _Bool _timeScrubbing;
    _Bool _editing;
    long long _faceStyle;
    CLKDevice *_device;
    NSString *_clientIdentifier;
    long long _dataMode;
    id <NTKFaceViewDelegate> _delegate;
    NTKFaceEditView *_editView;
    UIView *_unadornedSnapshotView;
    NTKClockIconView *_zoomingIconView;
    double _minIconDiameter;
    double _maxIconDiameter;
    NSString *_resourceDirectory;
    NSString *_selectedComplicationSlot;
    long long _detailMode;
    UIView<NTKTimeView> *_timeView;
    long long _fromEditMode;
    long long _toEditMode;
    double _editModeTransitionFraction;
}

+ (long long)_numberOfDetailModes;
+ (long long)numberOfDetailModesForFaceStyle:(long long)arg1;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (void)_prewarmForDevice:(id)arg1;
+ (id)swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
+ (id)newFaceViewOfStyle:(long long)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) double editModeTransitionFraction; // @synthesize editModeTransitionFraction=_editModeTransitionFraction;
@property(readonly, nonatomic) long long toEditMode; // @synthesize toEditMode=_toEditMode;
@property(readonly, nonatomic) long long fromEditMode; // @synthesize fromEditMode=_fromEditMode;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView<NTKTimeView> *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long detailMode; // @synthesize detailMode=_detailMode;
@property(readonly) _Bool timeScrubbing; // @synthesize timeScrubbing=_timeScrubbing;
@property(retain, nonatomic) NSString *selectedComplicationSlot; // @synthesize selectedComplicationSlot=_selectedComplicationSlot;
@property(nonatomic) _Bool complicationsShowEditingContent; // @synthesize complicationsShowEditingContent=_complicationsShowEditingContent;
@property(readonly, nonatomic) _Bool orbing; // @synthesize orbing=_orbing;
@property(nonatomic, getter=isSlow) _Bool slow; // @synthesize slow=_slow;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isEveryComplicationHidden) _Bool everyComplicationHidden; // @synthesize everyComplicationHidden=_everyComplicationHidden;
@property(copy, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(readonly, nonatomic) double maxIconDiameter; // @synthesize maxIconDiameter=_maxIconDiameter;
@property(readonly, nonatomic) double minIconDiameter; // @synthesize minIconDiameter=_minIconDiameter;
@property(readonly, nonatomic) NTKClockIconView *zoomingIconView; // @synthesize zoomingIconView=_zoomingIconView;
@property(readonly, nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
@property(retain, nonatomic) UIView *unadornedSnapshotView; // @synthesize unadornedSnapshotView=_unadornedSnapshotView;
@property(retain, nonatomic) NTKFaceEditView *editView; // @synthesize editView=_editView;
@property(nonatomic) __weak id <NTKFaceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLockedUI; // @synthesize showsLockedUI=_showsLockedUI;
@property(nonatomic) _Bool showContentForUnadornedSnapshot; // @synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot;
@property(nonatomic) _Bool showsCanonicalContent; // @synthesize showsCanonicalContent=_showsCanonicalContent;
@property(nonatomic) long long dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool shouldShowUnsnapshotableContent; // @synthesize shouldShowUnsnapshotableContent=_shouldShowUnsnapshotableContent;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long faceStyle; // @synthesize faceStyle=_faceStyle;
@property(readonly, nonatomic) UIView *foregroundContainerView; // @synthesize foregroundContainerView=_foregroundContainerView;
- (void).cxx_destruct;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_setComplicationEditingSaturationValue:(float)arg1;
- (void)_updateSaturationForComplicationEditing;
- (void)_addSaturationFilterToViews:(id)arg1;
- (id)_allViewsWithComplicationEditingDesaturationFilter;
- (void)_resetSequencerBoundaries;
- (void)_prepareScrubbingSequencerBoundaries;
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (struct UIEdgeInsets)timeTravelModuleTouchInsets;
- (void)performTimeTravelModuleTapAction;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (struct CGPoint)_timeTravelStatusModuleCenter;
- (_Bool)_wantsTimeTravelStatusModule;
- (void)applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endScrubbingAnimated:(_Bool)arg1;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (double)_timeTravelCaptionLabelMaxWidth;
- (id)_createTimeTravelCaptionImage;
- (id)_timeTravelCaptionCacheKey;
- (id)_timeTravelCaptionAttributedText;
- (id)_timeTravelCaptionFontSizeOverrides;
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startScrubbingAnimated:(_Bool)arg1;
- (void)_setupTimeTravel;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (_Bool)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_layoutComplicationViewForSlot:(id)arg1;
- (void)_layoutComplicationViews;
- (id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(long long)arg2 inEditMode:(long long)arg3;
- (void)_getKeylineFrame:(struct CGRect *)arg1 padding:(struct UIEdgeInsets *)arg2 forComplicationSlot:(id)arg3 selected:(_Bool)arg4;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (struct CGSize)_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(long long)arg2;
- (void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2;
- (void)_updateComplicationMaxSize;
- (struct CGAffineTransform)_displayTransformForComplicationSlot:(id)arg1;
- (struct CGRect)_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (double)_alphaForComplicationSlot:(id)arg1 inEditOption:(id)arg2 ofEditMode:(long long)arg3;
- (void)_setTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_updateTimeOffset;
- (void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4;
- (void)_didLayoutComplicationViews;
@property(readonly, nonatomic) double alphaForDimmedState;
- (void)complicationDisplayWrapperView:(id)arg1 startCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)complicationDisplayWrapperView:(id)arg1 shouldStartCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(_Bool)arg4;
- (void)_updateStatusIconVisibility;
- (void)prepareForStatusChange:(_Bool)arg1;
- (double)verticalPaddingForStatusBar;
- (_Bool)wantsStatusBarIconShadow;
- (_Bool)wantsStatusBarHidden;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_snapshotContainerView;
- (void)_finalizeForSnapshotting:(CDUnknownBlockType)arg1;
- (void)_prepareForSnapshotting;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)hideAppropriateComplicationsForCurrentConfiguration;
- (void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)_teardownComplicationViewsIfNeeded;
- (void)_setupComplicationViewsIfHidden;
- (void)setComplicationHidden:(_Bool)arg1 atSlot:(id)arg2;
- (_Bool)complicationIsHiddenAtSlot:(id)arg1;
- (id)_complicationSlotsHiddenByCurrentConfiguration;
- (id)_complicationSlotsHiddenByEditOption:(id)arg1;
- (id)_editOptionThatHidesAllComplications;
- (void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (struct CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_cleanupAfterOrb:(_Bool)arg1;
- (void)_prepareForOrb;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)_usesCustomZoom;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_handleOrdinaryScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_applySlow;
- (void)_applyFrozen;
- (void)_layoutForegroundContainerView;
- (_Bool)_needsForegroundContainerView;
- (void)_bringForegroundViewsToFront;
- (void)_adjustUIForBoundsChange;
- (void)_loadLayoutRules;
- (id)_detachedComplicationDisplays;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (id)_curvedPickerMaskForSlot:(id)arg1;
- (void)_curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)_slotSupportsCurvedText:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)cleanupAfterZoom;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)usesCustomZoom;
- (void)_becameInactiveFace;
- (void)_becameActiveFace;
- (_Bool)_wantsOpportunisticLiveFaceLoading;
- (_Bool)_canStartTimeScrubbing;
- (_Bool)_supportsTimeScrubbing;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(_Bool)arg1;
- (_Bool)_wantsStatusBarIconShadow;
- (_Bool)_wantsStatusBarHidden;
- (id)_blurSourceImage;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)_applyShowsLockedUI;
- (id)snapshotContainerView;
- (void)handleUnadornedSnapshotRemoved;
- (void)loadContentToReplaceUnadornedSnapshot;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (_Bool)_supportsUnadornedSnapshot;
- (_Bool)supportsUnadornedSnapshot;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyShowsCanonicalContent;
- (void)_applyDataMode;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)reloadSnapshotContentViews;
- (void)invalidateComplicationLayout;
- (void)enumerateComplicationDisplayWrappersWithBlock:(CDUnknownBlockType)arg1;
- (id)complicationLayoutforSlot:(id)arg1;
- (void)layoutContainerView:(id)arg1;
- (id)blurSourceImage;
- (id)swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)applyRubberBandingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (void)applyBreathingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (struct UIEdgeInsets)keylineLabelActiveAreaInsetsForComplicationAtSlot:(id)arg1;
- (struct CGRect)keylineFrameForComplicationSlot:(id)arg1 selected:(_Bool)arg2;
- (id)customEditOptionContainerViewForSlot:(id)arg1;
- (id)curvedPickerMaskForSlot:(id)arg1;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(id)arg6;
- (_Bool)slotSupportsCurvedText:(id)arg1;
- (id)layoutRuleForComplicationSlot:(id)arg1 inState:(long long)arg2 layoutOverride:(long long)arg3;
- (struct CGRect)frameForComplicationPickerViewForSlot:(id)arg1;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (void)setComplicationPickerView:(id)arg1 forSlot:(id)arg2;
- (void)shiftSelectedComplicationSlotIfHidden;
- (id)closestVisibleComplicationSlotToSlot:(id)arg1;
- (id)closestVisibleSlotToSlot:(id)arg1 editMode:(long long)arg2;
- (id)customEditingViewController;
- (_Bool)presentedViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (double)editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (struct UIEdgeInsets)keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (struct CGRect)keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)configureForEditMode:(long long)arg1;
- (void)cleanupAfterEditing;
- (void)prepareForEditing;
- (void)cleanupAfterOrb:(_Bool)arg1;
- (void)prepareForOrb;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (_Bool)needsImageQueueDiscardOnRender;
- (void)setNextRenderIsFirstAfterWake;
- (void)setNeedsRenderWithAdditionalWork:(CDUnknownBlockType)arg1;
- (void)setNeedsRender;
- (void)renderIfNeeded;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)layoutComplicationViews;
- (id)detachedComplicationDisplayWrapperForSlot:(id)arg1;
- (void)setDetachedComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (id)normalComplicationDisplayWrapperForSlot:(id)arg1;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (long long)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2;
- (id)newLegacyComplicationViewForSlot:(id)arg1 family:(long long)arg2 complication:(id)arg3;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
@property(readonly, nonatomic) NSDate *currentDisplayDate;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (_Bool)_shouldHideUI;
- (void)_handleLocaleDidChange;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

