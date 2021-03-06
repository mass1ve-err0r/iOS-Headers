/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {
    NSMapTable * _clientsToParticipants;
    SBHomeGesturePanGestureRecognizer * _screenEdgePanGesture;
}

@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) <UIViewSpringAnimationBehaviorDescribing> *settleHomeAffordanceAnimationBehaviorDescription;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)hideHomeAffordanceAnimationSettings;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)registerClient:(id)arg1 withIdentifier:(long long)arg2;
- (id)screenEdgePanGesture;
- (id)settleHomeAffordanceAnimationBehaviorDescription;
- (id)unhideHomeAffordanceAnimationSettings;
- (void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2;

@end
