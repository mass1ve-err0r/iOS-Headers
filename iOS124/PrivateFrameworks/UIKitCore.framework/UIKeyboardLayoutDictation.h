//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (id)activeInstance;
- (void)_moveWithEvent:(id)arg1;
- (struct CGRect)dragGestureRectInView:(id)arg1;
- (_Bool)usesAutoShift;
- (id)currentKeyplane;
- (struct CGSize)splitLeftSize;
- (_Bool)shouldFadeToLayout;
- (_Bool)shouldFadeFromLayout;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (_Bool)visible;
- (id)initWithFrame:(struct CGRect)arg1;

@end

