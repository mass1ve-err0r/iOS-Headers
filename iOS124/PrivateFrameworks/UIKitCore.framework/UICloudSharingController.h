//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UISharingPublicController-Protocol.h>

@class CKContainer, CKShare, NSDictionary, NSObject, NSString, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate>
{
    _Bool _isDelayingPresentation;
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    _Bool _shareNeedsDeletion;
    _Bool _primaryAuxiliarySwitchState;
    _Bool _secondaryAuxiliarySwitchState;
    id <UICloudSharingControllerDelegate> _delegate;
    CKShare *_share;
    unsigned long long _availablePermissions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    CKContainer *_container;
    NSDictionary *_participantDetails;
    CDUnknownBlockType _preparationHandler;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    NSString *_primaryAuxiliarySwitchTitle;
    NSString *_secondaryAuxiliarySwitchTitle;
    id <_UICloudSharingControllerDelegate_Internal> _internalDelegate;
}

@property(nonatomic) __weak id <_UICloudSharingControllerDelegate_Internal> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) _Bool secondaryAuxiliarySwitchState; // @synthesize secondaryAuxiliarySwitchState=_secondaryAuxiliarySwitchState;
@property(retain, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle; // @synthesize secondaryAuxiliarySwitchTitle=_secondaryAuxiliarySwitchTitle;
@property(nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) _Bool primaryAuxiliarySwitchState; // @synthesize primaryAuxiliarySwitchState=_primaryAuxiliarySwitchState;
@property(retain, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle; // @synthesize primaryAuxiliarySwitchTitle=_primaryAuxiliarySwitchTitle;
@property(retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property(nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails; // @synthesize participantDetails=_participantDetails;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) unsigned long long availablePermissions; // @synthesize availablePermissions=_availablePermissions;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(nonatomic) __weak id <UICloudSharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendDidStopSharingDelegate;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (id)_sharingViewPresentationController;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (id)activityItemSource;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_deleteShareAfterDismissalWithoutSave:(CDUnknownBlockType)arg1;
- (void)_didDismiss;
- (void)_callPreparationHandler:(CDUnknownBlockType)arg1;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPreparationHandler:(CDUnknownBlockType)arg1;
- (id)initWithShare:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (_Bool)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

