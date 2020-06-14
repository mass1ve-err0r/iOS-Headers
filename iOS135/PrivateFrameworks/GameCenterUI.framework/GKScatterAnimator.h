/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKScatterAnimator : GKBubblePathAnimator {
    long long  _focusBubbleType;
}

@property (nonatomic) long long focusBubbleType;

+ (double)preferredDuration;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (long long)focusBubbleType;
- (double)minimumDurationForViewAnimations;
- (id)scatterAnimationsForBubble:(void *)arg1 sortedBubbles:(void *)arg2 contractPoint:(void *)arg3 context:(void *)arg4; // needs 4 arg types, found 3: id, id, id
- (bool)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (bool)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (void)setFocusBubbleType:(long long)arg1;

@end