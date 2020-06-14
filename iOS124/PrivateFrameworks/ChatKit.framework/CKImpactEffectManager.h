//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKSendAnimationManager-Protocol.h>

@class CABackdropLayer, CKBalloonView, NSString, UIScrollView, UIWindow;
@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate;

@interface CKImpactEffectManager : NSObject <CKSendAnimationManager>
{
    _Bool _isAnimating;
    _Bool _isDisabled;
    id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
    id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
    id <CKSendAnimationManagerDelegate> _delegate;
    NSString *_animatingIdentifier;
    UIWindow *_expressiveSendAnimationWindow;
    CKBalloonView *_expressiveSendAnimationBalloon;
    CKBalloonView *_originalBalloonView;
    UIScrollView *_expressiveSendScrollView;
    CABackdropLayer *_expressiveSendAnimationBackdrop;
}

+ (_Bool)identifierShouldPlayInWindow:(id)arg1;
+ (_Bool)identifierIsAnimatedImpactEffect:(id)arg1;
+ (_Bool)identifierIsValidImpactEffect:(id)arg1;
+ (id)maskingStringForID:(id)arg1;
@property(retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop; // @synthesize expressiveSendAnimationBackdrop=_expressiveSendAnimationBackdrop;
@property(retain, nonatomic) UIScrollView *expressiveSendScrollView; // @synthesize expressiveSendScrollView=_expressiveSendScrollView;
@property(retain, nonatomic) CKBalloonView *originalBalloonView; // @synthesize originalBalloonView=_originalBalloonView;
@property(retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon; // @synthesize expressiveSendAnimationBalloon=_expressiveSendAnimationBalloon;
@property(retain, nonatomic) UIWindow *expressiveSendAnimationWindow; // @synthesize expressiveSendAnimationWindow=_expressiveSendAnimationWindow;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(readonly, nonatomic) NSString *animatingIdentifier; // @synthesize animatingIdentifier=_animatingIdentifier;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) __weak id <CKSendAnimationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; // @synthesize sendAnimationBalloonProvider;
@property(nonatomic) __weak id <CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; // @synthesize sendAnimationManagerDelegate;
- (void).cxx_destruct;
- (void)_cleanupExpressiveSendComponents;
- (void)_visibleCells:(id *)arg1 aboveItem:(id)arg2;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)cloneBalloonForAnimationWithChatItem:(id)arg1;
- (id)_sendAnimationContextForIdentifier:(id)arg1 message:(id)arg2 isSender:(_Bool)arg3;
- (void)_sizeAnimationWindow;
- (void)stopAllEffects;
- (void)matchScrollViewOffset:(id)arg1;
- (void)_animateLastMessage:(id)arg1;
- (void)animateMessages:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

