//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUIRequestOptions, AFUISiriRemoteViewController, NSDictionary, NSError, NSString, NSURL;

@protocol AFUISiriRemoteViewControllerDelegate <NSObject>
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didRequestCurrentTextInputWithReplyHandler:(void (^)(NSString *))arg2;
- (void)siriRemoteViewControllerDidEndTapToEdit:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerWillBeginTapToEdit:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidResetTextInput:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didRequestKeyboard:(_Bool)arg2 minimized:(_Bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didRequestKeyboard:(_Bool)arg2;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (_Bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(_Bool)arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 delaySessionEndForTTS:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didReadBulletinWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 handlePasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setHelpButtonEmphasized:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewDisabled:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewUserInteractionEnabled:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplayGatekeeperVisible:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplaySnippetVisible:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 siriIdleAndQuietStatusDidChange:(_Bool)arg2;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 launchApplicationWithBundleIdentifier:(NSString *)arg2 withURL:(NSURL *)arg3 launchOptions:(long long)arg4 replyHandler:(void (^)(_Bool))arg5;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 startRequestWithOptions:(AFUIRequestOptions *)arg2;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (long long)siriRemoteViewControllerRequestsActivationSource:(AFUISiriRemoteViewController *)arg1;
- (void)dismissSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1 delayForTTS:(_Bool)arg2 userInfo:(NSDictionary *)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didEncounterUnexpectedServiceError:(NSError *)arg2;
@end

