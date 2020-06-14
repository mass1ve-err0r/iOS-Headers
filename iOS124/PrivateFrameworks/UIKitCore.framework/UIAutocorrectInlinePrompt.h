//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView
{
    struct CGRect m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    _Bool m_fits;
    _Bool m_mouseDown;
    double m_originalTypedTextRectCorrectionAmount;
    unsigned int m_usageTrackingMask;
}

@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=m_usageTrackingMask;
- (_Bool)prepareForAnimation:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismiss;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)correctionShadowView;
- (id)typedTextAnimationView;
- (id)correctionAnimationView;
- (id)correctionView;
- (id)typedTextView;
- (id)typedText;
- (id)correction;
- (struct CGRect)correctionFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3;
- (struct CGRect)horizontallySquishedCorrectionFrame:(struct CGRect)arg1;
- (_Bool)isAcceptableTextEffectsFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (void)addTypedTextRect:(struct CGRect)arg1;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect)arg3 maxX:(double)arg4;
- (struct CGRect)shadowFrameForFrame:(struct CGRect)arg1;
- (void)removePromptSubviews;
- (void)dealloc;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

