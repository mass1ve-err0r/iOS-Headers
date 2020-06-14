//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUWelcomeViewController.h>

@class NSLayoutConstraint, UIFont, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface PUWhatsNewWelcomeViewController : PUWelcomeViewController
{
    _Bool __didAdjustScrollPosition;
    CDUnknownBlockType __completionHandler;
    UIScrollView *__scrollView;
    UIView *__topContentView;
    UIView *__bottomContentView;
    UIFont *_buttonFont;
    NSLayoutConstraint *__topConstraint;
    NSLayoutConstraint *__bottomConstraint;
    NSLayoutConstraint *__buttonContainerVisualEffectHeightConstraint;
    NSLayoutConstraint *__containerWidthConstraint;
    NSLayoutConstraint *__buttonWidthConstraint;
}

+ (void)resetLastPresentationInfo;
+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSLayoutConstraint *_buttonWidthConstraint; // @synthesize _buttonWidthConstraint=__buttonWidthConstraint;
@property(readonly, copy, nonatomic) NSLayoutConstraint *_containerWidthConstraint; // @synthesize _containerWidthConstraint=__containerWidthConstraint;
@property(readonly, copy, nonatomic) NSLayoutConstraint *_buttonContainerVisualEffectHeightConstraint; // @synthesize _buttonContainerVisualEffectHeightConstraint=__buttonContainerVisualEffectHeightConstraint;
@property(readonly, copy, nonatomic) NSLayoutConstraint *_bottomConstraint; // @synthesize _bottomConstraint=__bottomConstraint;
@property(readonly, copy, nonatomic) NSLayoutConstraint *_topConstraint; // @synthesize _topConstraint=__topConstraint;
@property(nonatomic, setter=_setDidAdjustScrollPosition:) _Bool _didAdjustScrollPosition; // @synthesize _didAdjustScrollPosition=__didAdjustScrollPosition;
@property(readonly, copy, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(readonly, copy, nonatomic) UIView *_bottomContentView; // @synthesize _bottomContentView=__bottomContentView;
@property(readonly, copy, nonatomic) UIView *_topContentView; // @synthesize _topContentView=__topContentView;
@property(readonly, copy, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(readonly, copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
- (void).cxx_destruct;
- (void)_handleContinueButton:(id)arg1;
- (void)_addSection:(id)arg1 containerView:(id)arg2 iconName:(id)arg3 lastLabel:(id *)arg4 lastSectionView:(id *)arg5 subheadlineFontScale:(double)arg6 text:(id)arg7 title:(id)arg8 titleLabel:(id)arg9;
- (void)_initializeConstants;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)_initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

