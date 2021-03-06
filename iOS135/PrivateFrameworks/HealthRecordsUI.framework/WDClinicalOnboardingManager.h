/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalOnboardingManager : NSObject {
    WDClinicalOnboardingOAuthNavigationViewController * _inFlightLoginViewController;
    WDClinicalGatewayProxy * _pendingOnboardingGateway;
    HRProfile * _profile;
}

@property (nonatomic) WDClinicalOnboardingOAuthNavigationViewController *inFlightLoginViewController;
@property (nonatomic, retain) WDClinicalGatewayProxy *pendingOnboardingGateway;
@property (nonatomic, retain) HRProfile *profile;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didDismissLoginViewController:(id)arg1;
- (void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(id /* block */)arg1;
- (void)_presentAccount:(id)arg1 presentingViewController:(id)arg2;
- (void)_startLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_startOrReplaceLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)dealloc;
- (id)gatewayProxyWithActivity:(id)arg1;
- (id)getPendingOnboardingGatewayAndClear;
- (id)inFlightLoginViewController;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)onboardWithActivity:(id)arg1 presentingViewController:(id)arg2;
- (id)pendingOnboardingGateway;
- (id)profile;
- (void)registerInflightOnboardingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)setInFlightLoginViewController:(id)arg1;
- (void)setPendingOnboardingGateway:(id)arg1;
- (void)setProfile:(id)arg1;

@end
