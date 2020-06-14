//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppPredictionUI/APUIIntentHandlingViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/PLPreviewInteractionManagerDelegate-Protocol.h>
#import <AppPredictionUI/PLPreviewInteractionPresenting-Protocol.h>
#import <AppPredictionUI/SearchUIResultShortLook-Protocol.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, APUITVIntentHandler, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLPreviewInteractionManager, SFSearchResult, UIView;
@protocol APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLPreviewInteractionPresentable;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLPreviewInteractionPresenting, PLPreviewInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, SearchUIResultShortLook>
{
    APUILongLookViewController<PLPreviewInteractionPresentable> *_presentableViewController;
    APUITVIntentHandler *_tvIntentHandler;
    _Bool _safeToReleaseLongLookViewController;
    double _preferredPlatterContentHeight;
    _Bool _acceptPlatterTaps;
    long long _dismissalReason;
    _Bool _actionCompletedSuccessfully;
    _Bool _hasShownLongLook;
    _Bool _wasPresentedImmediately;
    _Bool _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    PLPreviewInteractionManager *_previewInteractionManager;
    NSString *_bundleId;
    SFSearchResult *_searchResult;
    id <APUIShortLookViewControllerDelegate> _delegate;
    APUIIntentHandlingViewController *_intentHandlingViewController;
    ATXAction *_atxAction;
    INInteraction *_interaction;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
}

@property(retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(retain, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // @synthesize intentHandlingViewController=_intentHandlingViewController;
@property(nonatomic) __weak id <APUIShortLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) PLPreviewInteractionManager *previewInteractionManager; // @synthesize previewInteractionManager=_previewInteractionManager;
- (void).cxx_destruct;
- (void)intentHandlingViewController:(id)arg1 didComplete:(_Bool)arg2;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize)arg2;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (_Bool)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (void)handOverIntentHandlingToApp;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (_Bool)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (_Bool)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (id)presentedViewControllerForPreviewInteractionManager:(id)arg1;
- (id)_debugStringForNSUA;
- (_Bool)_isDoNotDisturbIntent;
- (_Bool)_shouldAcceptPlatterTaps;
- (long long)_actionTypeForMetrics;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (id)_intentConfirmationActions;
- (void)_handleActionButtonForIntent;
- (id)_cardContentWithIntentResponse:(id)arg1;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)_resetRepresentedObjectState;
- (id)_defaults;
@property(readonly, nonatomic) UIView *viewForPreview;
- (_Bool)presentImmediately:(CDUnknownBlockType)arg1;
- (void)setView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property(readonly) Class superclass;

@end

