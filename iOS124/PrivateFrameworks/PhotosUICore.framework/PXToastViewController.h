//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, PXToastPresentationWindow, UIImage, UIImageView, UILabel, UINotificationFeedbackGenerator, UIVisualEffectView;
@protocol PXToastViewControllerDelegate;

@interface PXToastViewController : UIViewController
{
    _Bool _shouldUseAnimatedCheckmark;
    id <PXToastViewControllerDelegate> _delegate;
    NSString *_message;
    UIImage *_image;
    PXToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
    UINotificationFeedbackGenerator *_feedbackGenerator;
}

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;
+ (id)_secondaryLabelFont;
+ (id)_primaryLabelFont;
+ (id)checkmarkToastWithTitle:(id)arg1 message:(id)arg2;
+ (id)toastWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
@property(retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIVisualEffectView *toastView; // @synthesize toastView=_toastView;
@property(nonatomic) _Bool shouldUseAnimatedCheckmark; // @synthesize shouldUseAnimatedCheckmark=_shouldUseAnimatedCheckmark;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) PXToastPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) __weak id <PXToastViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateCheckMark;
- (void)_dismissAfterDelay:(double)arg1;
- (void)present;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initCheckmarkToastWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

