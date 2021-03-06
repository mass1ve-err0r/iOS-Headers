/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

@interface SRRemoteAuthorizationPromptViewController : _UIRemoteViewController <SRAuthorizationPromptClientInterface, SRRemoteAuthorizationPromptViewController> {
    <SRRemoteAuthorizationPromptViewControllerDelegate> * _delegate;
    <NSCopying> * _request;
    NSExtension * _weakExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SRRemoteAuthorizationPromptViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSCopying> *request;
@property (readonly) Class superclass;
@property (nonatomic) NSExtension *weakExtension;

+ (id)exportedInterface;
+ (void)initialize;
+ (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;
- (void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestFailedWithError:(id)arg1;
- (void)authorizationRequestWillDisappear;
- (void)authorizationUIReadyForDisplayModally:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllSamples;
- (void)invalidate;
- (id)request;
- (void)requestAuthorizationForBundle:(id)arg1 services:(id)arg2;
- (id)serviceViewControllerProxy;
- (void)setDelegate:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setWeakExtension:(id)arg1;
- (void)showAppsAndStudies;
- (void)showPendingAuthUIForBundlePath:(id)arg1 services:(id)arg2;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)weakExtension;

@end
