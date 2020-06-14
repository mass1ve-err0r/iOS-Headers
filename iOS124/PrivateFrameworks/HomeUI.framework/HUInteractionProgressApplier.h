//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUApplier.h>

#import <HomeUI/UIInteractionProgressObserver-Protocol.h>

@class HUAnimationApplier, HUAnimationSettings, NSString, UIInteractionProgress;

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver>
{
    _Bool _boundProgressValues;
    _Bool _completesAtTargetState;
    _Bool _waitingOnAnimationToComplete;
    UIInteractionProgress *_interactionProgress;
    HUAnimationSettings *_significantProgressChangeAnimationSettings;
    HUAnimationSettings *_transitionAnimationSettings;
    double _animationFromProgress;
    double _animationToProgress;
    HUAnimationApplier *_inFlightAnimation;
    double _previousInteractionProgress;
}

+ (id)applierWithInteractionProgress:(id)arg1;
+ (id)applyInteractionProgress:(id)arg1 withApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool waitingOnAnimationToComplete; // @synthesize waitingOnAnimationToComplete=_waitingOnAnimationToComplete;
@property(nonatomic) double previousInteractionProgress; // @synthesize previousInteractionProgress=_previousInteractionProgress;
@property(retain, nonatomic) HUAnimationApplier *inFlightAnimation; // @synthesize inFlightAnimation=_inFlightAnimation;
@property(nonatomic) double animationToProgress; // @synthesize animationToProgress=_animationToProgress;
@property(nonatomic) double animationFromProgress; // @synthesize animationFromProgress=_animationFromProgress;
@property(nonatomic) _Bool completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
@property(nonatomic) _Bool boundProgressValues; // @synthesize boundProgressValues=_boundProgressValues;
@property(retain, nonatomic) HUAnimationSettings *transitionAnimationSettings; // @synthesize transitionAnimationSettings=_transitionAnimationSettings;
@property(retain, nonatomic) HUAnimationSettings *significantProgressChangeAnimationSettings; // @synthesize significantProgressChangeAnimationSettings=_significantProgressChangeAnimationSettings;
@property(readonly, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void).cxx_destruct;
- (_Bool)cancel;
- (_Bool)complete:(_Bool)arg1;
- (void)_completeSuccessfullyIfAnimationsComplete;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)_updateCurrentProgress;
- (_Bool)_interactionProgressChangedSignificantly;
- (double)_currentInteractionProgress;
- (_Bool)start;
- (_Bool)isInteractive;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

