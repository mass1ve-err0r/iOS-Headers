//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SKUIToastPresentationWindow, UIImageView, UILabel, UIVisualEffectView;

@interface SKUIToastViewController : UIViewController
{
    NSString *_titleText;
    NSString *_descriptionText;
    SKUIToastPresentationWindow *_presentationWindow;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIVisualEffectView *_toastView;
    CDUnknownBlockType _completion;
}

+ (id)_fontWithSize:(double)arg1 textStyleAttribute:(struct __CFString *)arg2;
+ (id)_secondaryLabelFont;
+ (id)_primaryLabelFont;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIVisualEffectView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(retain, nonatomic) SKUIToastPresentationWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)_dismissWithDelay:(double)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDialogTemplate:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;

@end

