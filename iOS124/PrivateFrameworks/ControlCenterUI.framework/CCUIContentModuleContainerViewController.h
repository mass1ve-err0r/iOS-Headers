//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUISafeAppearancePropagationProvider-Protocol.h>
#import <ControlCenterUI/UIGestureRecognizerDelegate-Protocol.h>
#import <ControlCenterUI/UIPreviewInteractionDelegatePrivate-Protocol.h>

@class CCUIContentModuleBackgroundView, CCUIContentModuleContentContainerView, NSArray, NSString, UIPreviewInteraction, UITapGestureRecognizer, UIView;
@protocol CCUIContentModule, CCUIContentModuleBackgroundViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModuleContentViewController;

@interface CCUIContentModuleContainerViewController : UIViewController <UIPreviewInteractionDelegatePrivate, UIGestureRecognizerDelegate, CCUISafeAppearancePropagationProvider>
{
    _Bool _expanded;
    _Bool _contentModuleProvidesOwnPlatter;
    NSString *_moduleIdentifier;
    id <CCUIContentModuleContainerViewControllerDelegate> _delegate;
    NSString *_materialGroupName;
    NSArray *_topLevelBlockingGestureRecognizers;
    id <CCUIContentModule> _contentModule;
    UIViewController<CCUIContentModuleContentViewController> *_contentViewController;
    UIViewController<CCUIContentModuleBackgroundViewController> *_backgroundViewController;
    UIView *_highlightWrapperView;
    CCUIContentModuleBackgroundView *_backgroundView;
    CCUIContentModuleContentContainerView *_contentContainerView;
    UIView *_contentView;
    UIView *_maskView;
    UITapGestureRecognizer *_tapRecognizer;
    UIPreviewInteraction *_previewInteraction;
    struct UIEdgeInsets _expandedContentEdgeInsets;
}

@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *highlightWrapperView; // @synthesize highlightWrapperView=_highlightWrapperView;
@property(nonatomic) _Bool contentModuleProvidesOwnPlatter; // @synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter;
@property(retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController; // @synthesize backgroundViewController=_backgroundViewController;
@property(retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <CCUIContentModule> contentModule; // @synthesize contentModule=_contentModule;
@property(readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers; // @synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *materialGroupName; // @synthesize materialGroupName=_materialGroupName;
@property(nonatomic) __weak id <CCUIContentModuleContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets expandedContentEdgeInsets; // @synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets;
@property(copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (void).cxx_destruct;
- (_Bool)_shouldApplyBackgroundEffects;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)_configureMaskViewIfNecessary;
- (struct CGRect)_contentBoundsForTransitionProgress:(double)arg1;
- (struct CGRect)_presentationFrameForExpandedState;
- (struct CGRect)_contentFrameInPresentationFrame:(struct CGRect)arg1;
- (struct CGRect)_containerFrameForExpandedState;
- (struct CGRect)_backgroundFrameForExpandedState;
- (struct CGRect)_backgroundFrameForRestState;
- (struct CGRect)_contentFrameForExpandedState;
- (struct CGRect)_contentBoundsForExpandedState;
- (struct CGRect)_contentFrameForRestState;
- (void)_setDidExpandModulePreference;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (_Bool)_isForceTouchAvailable;
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)_previewInteractionShouldFinishTransitionToPreview:(id)arg1;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toGestureRecognizers:(id)arg2 blockingGestureRecognizers:(id)arg3;
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;
- (void)loadView;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)willResignActive;
- (void)willBecomeActive;
@property(readonly, nonatomic) CCUIContentModuleContentContainerView *moduleContentView;
- (void)_closeExpandedModule;
- (void)_dismissModulePresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentedContentAnimated:(_Bool)arg1;
- (void)dismissExpandedModuleAnimated:(_Bool)arg1;
- (void)updateFrameForExpandedModule;
- (void)expandModule;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *childViewControllersForAppearancePropagation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

