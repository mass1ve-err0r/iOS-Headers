//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardPageViewControllerProtocol-Protocol.h"
#import "SBDashBoardTodayViewControllerDelegate-Protocol.h"
#import "SBSpotlightInitiating-Protocol.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardLayoutStrategy, SBDashBoardPresentation, SBDashBoardTodayContentViewController, SBDashBoardTodayViewController, SBViewControllerTransitionContext, UIColor, _UILegibilitySettings;
@protocol SBDashBoardViewControllerProtocol, SBDashBoardViewPresenting, UICoordinateSpace;

@interface SBDashBoardTodayPageViewController : SBDashBoardPageViewController <SBDashBoardTodayViewControllerDelegate, SBDashBoardPageViewControllerProtocol, SBSpotlightInitiating>
{
    SBDashBoardLayoutStrategy *_layoutStrategy;
    SBDashBoardTodayContentViewController *_contentViewController;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
@property(retain, nonatomic) SBDashBoardTodayContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBDashBoardTodayViewController *todayViewController; // @dynamic todayViewController;
- (void)dashBoardTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (_Bool)_isPortrait;
- (_Bool)_listBelowDateTime;
- (double)listInsetX;
- (double)customListWidth;
- (unsigned long long)listWidthStrategy;
- (unsigned long long)listLayout;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
- (void)updateTransitionWhileRubberBandingInProgress:(_Bool)arg1;
- (_Bool)clipsIsolatedContent;
- (void)isolateViewController:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (long long)searchBackdropWallpaperVariant;
- (id)spotlightHeaderAcquiringViewController;
- (void)cleanupAfterSpotlightDismissal;
- (void)resetForSpotlightDismissalAnimated:(_Bool)arg1;
@property(retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) _Bool authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SBDashBoardPresentation *externalPresentation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end

