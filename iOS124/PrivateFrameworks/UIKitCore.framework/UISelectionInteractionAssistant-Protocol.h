//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIView;

@protocol UISelectionInteractionAssistant
- (void)addGestureRecognizersToView:(UIView *)arg1;
- (void)showSelectionCommands;
- (void)updateSelectionRects:(_Bool)arg1;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
@end

