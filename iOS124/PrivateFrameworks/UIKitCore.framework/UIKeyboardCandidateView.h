//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputView.h>

#import <UIKitCore/UIKeyboardCandidateDisplay-Protocol.h>

@class NSString, UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateGrid, UIKeyboardCandidateSortControl, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIView;
@protocol UIKeyboardCandidateList;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView : UIInputView <UIKeyboardCandidateDisplay>
{
    UIKeyboardCandidateBar *_bar;
    UIKeyboardCandidateSortControl *_sortControl;
    UIKeyboardCandidateGrid *_extendedView;
    UIView<UIKeyboardCandidateList> *_inlineView;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;
    struct {
        unsigned int isExtended;
        unsigned int didMinimizeKeyboard;
        unsigned int isSplit;
        unsigned int isFloating;
    } _candidateBarFlags;
}

+ (double)defaultExtendedControlHeight;
@property(retain, nonatomic) UIView<UIKeyboardCandidateList> *inlineView; // @synthesize inlineView=_inlineView;
- (void).cxx_destruct;
- (_Bool)_needsBackdrop;
- (void)dimKeys:(id)arg1;
- (double)extendedViewAnimationDuration;
- (void)setCandidatesToExtendedViewFromCollapsedView:(id)arg1;
- (unsigned long long)_numberOfColumns:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)_toggleExtendedCandidateView:(id)arg1;
- (void)setCandidateViewExtended:(_Bool)arg1;
- (void)candidatesDidChange;
- (id)activeCandidateList;
- (void)setCandidateBarCanExtend:(_Bool)arg1;
- (long long)currentOrientation;
- (_Bool)shouldUseKeyboardBackground:(id)arg1;
- (double)extendedViewHeight;
- (int)candidatesVisualStyle;
- (void)setIsFloating:(_Bool)arg1;
- (_Bool)isFloating;
- (_Bool)isSplit;
- (_Bool)isExtended;
- (void)updatePageControlStatus;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

