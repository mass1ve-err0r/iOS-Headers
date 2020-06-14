//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPrintMessageAndSpinnerView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    NSArray *_currentHorizontalConstraints;
}

@property(retain, nonatomic) NSArray *currentHorizontalConstraints; // @synthesize currentHorizontalConstraints=_currentHorizontalConstraints;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(nonatomic) _Bool spinnerHidden;
@property(nonatomic) _Bool spinSpinner;
@property(retain, nonatomic) NSString *messageText;
- (void)updateConstraints;
- (void)updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

