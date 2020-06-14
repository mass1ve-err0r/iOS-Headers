//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamImageQuadEditOverlayDelegate-Protocol.h>
#import <DocumentCamera/UIScrollViewDelegate-Protocol.h>

@class CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditImageView, ICDocCamImageQuadEditOverlay, NSLayoutConstraint, NSNumber, NSString, UIBezierPath, UIButton, UIColor, UIImage, UILabel, UIScrollView, UIView;
@protocol DCScanDataDelegate;

@interface ICDocCamImageQuadEditViewController : UIViewController <UIScrollViewDelegate, ICDocCamImageQuadEditOverlayDelegate, DCUnsavedDataDelegate>
{
    _Bool _showImageAsAspectFit;
    _Bool _inCaptureMode;
    _Bool _didAdjustQuad;
    _Bool _shouldAdjustForApectFitIfNecessary;
    _Bool _invisibleButtonContainer;
    _Bool _didPressSave;
    UIScrollView *_scrollView;
    ICDocCamImageQuadEditImageView *_imageView;
    ICDocCamImageQuadEditImageView *_backgroundImageView;
    UIView *_buttonContainer;
    ICDocCamImageQuadEditOverlay *_overlay;
    double _knobHeight;
    UIColor *_knobColor;
    UIView *_placard;
    UIImage *_image;
    id <DCScanDataDelegate> _scanDataDelegate;
    CAShapeLayer *_overlayMask;
    UIBezierPath *_overlayMaskPath;
    ICDocCamImageQuad *_quad;
    ICDocCamImageQuad *_initialQuad;
    long long _orientation;
    CDUnknownBlockType _completionHandler;
    UIButton *_cancelButton;
    UIButton *_saveButton;
    UILabel *_userPromptLabel;
    NSLayoutConstraint *_buttonContainerHeightConstraint;
    NSNumber *_startOrientationIsPortrait;
}

@property(nonatomic) _Bool didPressSave; // @synthesize didPressSave=_didPressSave;
@property(nonatomic) _Bool invisibleButtonContainer; // @synthesize invisibleButtonContainer=_invisibleButtonContainer;
@property(nonatomic) _Bool shouldAdjustForApectFitIfNecessary; // @synthesize shouldAdjustForApectFitIfNecessary=_shouldAdjustForApectFitIfNecessary;
@property(nonatomic) _Bool didAdjustQuad; // @synthesize didAdjustQuad=_didAdjustQuad;
@property(retain, nonatomic) NSNumber *startOrientationIsPortrait; // @synthesize startOrientationIsPortrait=_startOrientationIsPortrait;
@property(nonatomic) __weak NSLayoutConstraint *buttonContainerHeightConstraint; // @synthesize buttonContainerHeightConstraint=_buttonContainerHeightConstraint;
@property(nonatomic) __weak UILabel *userPromptLabel; // @synthesize userPromptLabel=_userPromptLabel;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) ICDocCamImageQuad *initialQuad; // @synthesize initialQuad=_initialQuad;
@property(retain, nonatomic) ICDocCamImageQuad *quad; // @synthesize quad=_quad;
@property(retain, nonatomic) UIBezierPath *overlayMaskPath; // @synthesize overlayMaskPath=_overlayMaskPath;
@property(retain, nonatomic) CAShapeLayer *overlayMask; // @synthesize overlayMask=_overlayMask;
@property(nonatomic) _Bool inCaptureMode; // @synthesize inCaptureMode=_inCaptureMode;
@property(nonatomic) _Bool showImageAsAspectFit; // @synthesize showImageAsAspectFit=_showImageAsAspectFit;
@property(readonly, nonatomic) id <DCScanDataDelegate> scanDataDelegate; // @synthesize scanDataDelegate=_scanDataDelegate;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak UIView *placard; // @synthesize placard=_placard;
@property(readonly, nonatomic) UIColor *knobColor; // @synthesize knobColor=_knobColor;
@property(readonly, nonatomic) double knobHeight; // @synthesize knobHeight=_knobHeight;
@property(retain, nonatomic) ICDocCamImageQuadEditOverlay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) __weak UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) ICDocCamImageQuadEditImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) ICDocCamImageQuadEditImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)prepareForDismissal;
- (id)finalQuadFromOverlay;
- (id)quadForOverlay;
- (void)updateFonts;
- (void)setupAccessibility;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)scanWasDeleted:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (id)finalQuad;
- (id)adjustedQuad;
- (id)uiQuadForOverlay:(id)arg1;
- (id)uiInitialQuadForOverlay:(id)arg1;
- (void)updateToAspectFitIfNecessary;
- (void)centerAndScaleImageInScrollView;
- (void)updateOverlayScrimMask;
- (void)overlayDidLayout:(id)arg1;
- (void)selectedKnobDidPanToRect:(struct CGRect)arg1;
- (void)selectedKnobDidChange:(id)arg1;
- (struct CGRect)rectAvailableForDefaultRect;
- (id)quadForOverlay:(id)arg1;
- (double)currentZoomFactorForOverlay;
- (struct CGRect)imageFrameInOverlayCoordinates;
- (struct CGRect)unitImageRectForOverlayRect:(struct CGRect)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateButtonTitles;
- (void)setUpImageView;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 quad:(id)arg2 scanDataDelegate:(id)arg3 orientation:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

