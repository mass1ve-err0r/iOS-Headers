//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIColor, UILabel;

@interface SULoadingView : UIView
{
    long long _activityIndicatorStyle;
    UIColor *_activityIndicatorColor;
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned long long _style;
    UIColor *_textColor;
    UIColor *_textShadowColor;
}

@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long activityIndicatorStyle; // @synthesize activityIndicatorStyle=_activityIndicatorStyle;
@property(retain, nonatomic) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor=_activityIndicatorColor;
- (void)_setupSubviews;
- (void)setStyle:(unsigned long long)arg1;
- (id)newTextLabel;
- (id)newProgressIndicator;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

