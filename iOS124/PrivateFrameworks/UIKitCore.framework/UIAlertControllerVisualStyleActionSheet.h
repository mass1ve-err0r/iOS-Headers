//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
{
}

+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
+ (long long)interfaceActionPresentationStyle;
- (_Bool)placementAvoidsKeyboard;
- (_Bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (long long)permittedActionLayoutDirection;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (double)maximumWidth;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginAboveMessageLabelFirstBaseline;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (double)marginBelowTitleLabelLastBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)_spacingBetweenDismissButtonAndContent;
- (id)titleLabelColor;
- (id)titleLabelFont;

@end

