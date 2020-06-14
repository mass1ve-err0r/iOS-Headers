//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, PKGlyphView, PKPaymentAuthorizationLayout, UIButton, UILabel;
@protocol PKPaymentAuthorizationFooterViewDelegate;

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate>
{
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UIButton *_payWithPasscodeButton;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    UIView *_lockupView;
    NSString *_overrideString;
    unsigned long long _stateTransitionIndex;
    _Bool _deferringState;
    _Bool _deferredStateRequiresRetry;
    NSString *_deferredStateString;
    _Bool _biometricSuccessOutstanding;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_deferredCompletionHandlers;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSArray *_hiddenConstraints;
    NSArray *_staticRegularConstraints;
    NSMutableArray *_dynamicRegularConstraints;
    _Bool _compact;
    _Bool _compactUserIntent;
    long long _constraintState;
    long long _queuedConstraintState;
    _Bool _constraintsDirty;
    _Bool _isPad;
    _Bool _hasPearl;
    double _minimumHeight;
    unsigned int _emphasizedEdge;
    long long _state;
    PKPaymentAuthorizationLayout *_layout;
    unsigned long long _requestType;
    unsigned long long _confirmationStyle;
    NSString *_biometricConfirmationTitle;
    NSString *_confirmationTitle;
    id <PKPaymentAuthorizationFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentAuthorizationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain, nonatomic) NSString *biometricConfirmationTitle; // @synthesize biometricConfirmationTitle=_biometricConfirmationTitle;
@property(nonatomic) unsigned long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_payWithPasscodePressed;
- (void)glyphViewUserIntentEdgeDidChange:(id)arg1;
- (void)glyphView:(id)arg1 revealingCheckmark:(_Bool)arg2;
- (id)_payWithPasscodeTitleForState:(long long)arg1;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)_prepareConstraints;
- (void)updateConstraints;
- (id)defaultHeightConstraints;
- (void)setHidden:(_Bool)arg1;
- (void)updateRotation;
- (void)_createSubviews;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setConstraintState:(long long)arg1;
- (_Bool)_shouldCompact;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

