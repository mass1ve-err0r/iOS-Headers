//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIPageControl, UIPageViewController, _UIQueuingScrollView;

__attribute__((visibility("hidden")))
@interface _UIPageViewControllerContentView : UIView
{
    UIPageViewController *_pageViewController;
    _UIQueuingScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupPageControl:(id)arg1;
- (struct CGRect)_scrollViewFrame;
- (double)_pageSpacing;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)invalidatePageViewController;
- (id)initWithFrame:(struct CGRect)arg1 andPageViewController:(id)arg2;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;

@end

