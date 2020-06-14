//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPassFooterContentViewDelegate-Protocol.h>
#import <PassKitUI/PKUIForegroundActiveArbiterDeactivationObserver-Protocol.h>

@class NSObject, NSString, PKPassFooterContentView, PKPassView, PKPaymentSessionHandle;
@protocol OS_dispatch_group, OS_dispatch_source, PKPassFooterViewDelegate;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver>
{
    PKPassView *_passView;
    PKPassFooterContentView *_contentView;
    NSObject<OS_dispatch_source> *_sessionStartTimer;
    _Bool _isBackgrounded;
    _Bool _isAssistantActive;
    _Bool _acquiringSession;
    unsigned long long _sessionToken;
    NSObject<OS_dispatch_group> *_sessionDelayGroup;
    PKPaymentSessionHandle *_sessionHandle;
    _Bool _invalidated;
    unsigned char _visibility;
    unsigned char _contentViewVisibility;
    _Bool _userIntentRequired;
    long long _state;
    long long _coachingState;
    id <PKPassFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPassFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic, getter=isUserIntentRequired) _Bool userIntentRequired; // @synthesize userIntentRequired=_userIntentRequired;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
- (void).cxx_destruct;
- (id)_messageForPaymentApplicationState;
- (id)_messageForPeerPaymentZeroBalance;
- (id)_messageForRestrictedState;
- (id)_messageForUnavailableState;
- (id)_messageContentViewFromMessage:(id)arg1;
- (_Bool)_canApplyContentViewForValueAddedService;
- (_Bool)_canApplyContentViewForPersonalizedApplication;
- (void)_endSessionStartTimer;
- (void)_endSession;
- (void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;
- (void)_advanceVisibilityToState:(unsigned char)arg1 animated:(_Bool)arg2;
- (void)_setCoachingState:(long long)arg1;
- (void)_setUserIntentRequired:(_Bool)arg1;
- (void)_setContentView:(id)arg1 animated:(_Bool)arg2;
- (void)_configureForValueAddedServiceWithContext:(id)arg1;
- (void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1;
- (void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_startContactlessInterfaceSessionWithContext:(id)arg1 sessionAvailable:(CDUnknownBlockType)arg2 sessionUnavailable:(CDUnknownBlockType)arg3;
- (void)_configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)_updateForNonForegroundActivePresentationAnimated:(_Bool)arg1;
- (void)_updateForForegroundActivePresentationIfNecessaryAnimated:(_Bool)arg1;
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1;
- (unsigned long long)suppressedContentForContentView:(id)arg1;
- (_Bool)isPassFooterContentViewInGroup:(id)arg1;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (void)passFooterContentViewDidChangeCoachingState:(id)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(id)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(id)arg1;
- (void)passFooterContentViewDidAuthenticate:(id)arg1;
@property(readonly, nonatomic) _Bool requestPileSuppression;
@property(readonly, nonatomic, getter=isPassAuthorized) _Bool passAuthorized;
- (void)invalidate;
- (void)configureForState:(long long)arg1 context:(id)arg2 passView:(id)arg3;
- (void)didBecomeHiddenAnimated:(_Bool)arg1;
- (void)didBecomeVisibleAnimated:(_Bool)arg1;
- (void)willBecomeHiddenAnimated:(_Bool)arg1;
- (void)willBecomeVisibleAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPassView:(id)arg1 state:(long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

