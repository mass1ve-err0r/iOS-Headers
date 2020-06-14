//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <GameCenterPrivateUI/_GKStateMachineDelegate-Protocol.h>

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>
{
    NSArray *_viewsToHideWhileLoading;
    double _loadingIndicatorDelay;
    GKLoadableContentStateMachine *_loadingMachine;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(nonatomic) double loadingIndicatorDelay; // @synthesize loadingIndicatorDelay=_loadingIndicatorDelay;
@property(retain, nonatomic) NSArray *viewsToHideWhileLoading; // @synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)showLoadingIndicator;
- (void)setViewsToHideHidden:(_Bool)arg1;
@property(retain, nonatomic) NSString *loadingState;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

