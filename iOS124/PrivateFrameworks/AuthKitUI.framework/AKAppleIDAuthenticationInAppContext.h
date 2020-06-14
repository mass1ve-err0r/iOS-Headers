//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import <AuthKitUI/AKAppleIDAuthenticationUIProvider-Protocol.h>
#import <AuthKitUI/AKBasicLoginAlertControllerDelegate-Protocol.h>
#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUICDPStingrayRemoteUIController, AKAppleIDServerUIContextController, AKBasicLoginAlertController, AKNativeAccountRecoveryController, NSHTTPURLResponse, NSString, RUIObjectModel, RemoteUIController, UINavigationController, UIViewController;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, CDPStateUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKBasicLoginAlertControllerDelegate, RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider>
{
    UIViewController *_topViewControllerOnLoadStart;
    _Bool _overrideFirstActionSignal;
    AKBasicLoginAlertController *_basicLoginViewController;
    UINavigationController *_navController;
    UINavigationController *_modalRemoteUINavController;
    RemoteUIController *_remoteUIController;
    RUIObjectModel *_currentRemoteOM;
    AKAppleIDServerUIContextController *_serverUIContextController;
    NSHTTPURLResponse *_deferredResponse;
    AKNativeAccountRecoveryController *_nativeRecoveryController;
    AAUICDPStingrayRemoteUIController *_stingrayController;
    _Bool _forceInlinePresentation;
    _Bool _presentingServerUI;
    UIViewController *_presentingViewController;
    id <AKAppleIDAuthenticationInAppContextDelegate> _delegate;
    id <AKAppleIDAuthenticationInAppContextAlertDelegate> _alertDelegate;
    id <CDPStateUIProvider> _cdpUiProvider;
    id <AKAppleIDAuthenticationInAppContextPasswordDelegate> __passwordDelegate;
}

@property(nonatomic, setter=_setPasswordDelegate:) __weak id <AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate; // @synthesize _passwordDelegate=__passwordDelegate;
@property(retain, nonatomic, setter=_setCdpUiProvider:) id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(nonatomic) __weak id <AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(nonatomic, getter=isPresentingServerUI) _Bool presentingServerUI; // @synthesize presentingServerUI=_presentingServerUI;
@property(nonatomic) __weak id <AKAppleIDAuthenticationInAppContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool forceInlinePresentation; // @synthesize forceInlinePresentation=_forceInlinePresentation;
- (void).cxx_destruct;
- (void)willPresentModalNavigationController:(id)arg1;
- (id)remoteUIStyle;
- (void)basicLoginAlertControllerDidDismiss:(id)arg1;
- (void)basicLoginAlertControllerWillDismiss:(id)arg1;
- (void)basicLoginAlertControllerDidPresent:(id)arg1;
- (id)serverDataHarvester;
- (void)completeWithError:(id)arg1;
- (id)_navController;
- (id)_remoteUIController;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)_handleBackButtonTap:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (_Bool)_isDeferrableFinalResponseHarvested;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanUpBasicLogin;
- (void)_cleanUpBasicLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentBasicLoginUIAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_assertValidPresentingViewController;
- (void)dealloc;
- (_Bool)_isSatisfyingPasswordRequirements;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_contextWillBeginPresentingSecondaryUI;
- (void)_contextDidDismissLoginAlertController;
- (void)_contextWillDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

