//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>

@class GKDashboardHostViewController, NSString, UIAlertController;
@protocol GKGameCenterControllerDelegate;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol>
{
    id <GKGameCenterControllerDelegate> _gameCenterDelegateWeak;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    GKDashboardHostViewController *_remoteViewController;
    UIAlertController *_alertController;
}

+ (_Bool)accessInstanceVariablesDirectly;
+ (_Bool)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) GKDashboardHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
@property(retain, nonatomic) NSString *leaderboardCategory; // @dynamic leaderboardCategory;
@property(nonatomic) long long leaderboardTimeScope; // @synthesize leaderboardTimeScope=_leaderboardTimeScope;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (_Bool)shouldShowQuitForTurnBasedMatch;
- (_Bool)shouldShowPlayForTurnBasedMatch;
- (_Bool)shouldShowPlayForChallenge;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(nonatomic) id <GKGameCenterControllerDelegate> gameCenterDelegate; // @synthesize gameCenterDelegate=_gameCenterDelegateWeak;
- (void)dealloc;
- (id)init;
- (void)notifyDelegateOnWillFinish;
- (void)setLeaderboardTimeScopeFromExtension:(long long)arg1;
- (void)setLeaderboardIdentifierFromExtension:(id)arg1;
- (void)setViewStateFromExtension:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

