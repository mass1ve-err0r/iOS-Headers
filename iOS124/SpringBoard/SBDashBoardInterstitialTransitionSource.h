//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDashBoardExternalAppearanceProviding-Protocol.h"
#import "SBDashBoardExternalBehaviorProviding-Protocol.h"
#import "SBDashBoardViewTransitionSource-Protocol.h"

@class NSSet, NSString, SBDashBoardComponent, SBDashBoardLayoutStrategy, UIColor, _UILegibilitySettings;
@protocol SBDashBoardInterstitialTransitionDelegate;

@interface SBDashBoardInterstitialTransitionSource : NSObject <SBDashBoardViewTransitionSource, SBDashBoardExternalAppearanceProviding, SBDashBoardExternalBehaviorProviding>
{
    long long _participantState;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    id <SBDashBoardInterstitialTransitionDelegate> _transitioningDelegate;
    long long _transitionType;
    SBDashBoardComponent *_homeAffordance;
    CDStruct_7238a68f _transitionContext;
}

@property(retain, nonatomic) SBDashBoardComponent *homeAffordance; // @synthesize homeAffordance=_homeAffordance;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) __weak id <SBDashBoardInterstitialTransitionDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void).cxx_destruct;
- (void)cancelTransition;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) long long participantState; // @synthesize participantState=_participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)cleanupPresentation;
- (void)updatePresentationWithProgress:(double)arg1;
- (void)prepareForPresentation;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

