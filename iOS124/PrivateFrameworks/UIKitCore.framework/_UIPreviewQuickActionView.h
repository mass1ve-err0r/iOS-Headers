//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewQuickActionView : UIView
{
    _Bool _selected;
    UIPreviewAction *_quickAction;
    UIImageView *_backgroundViewImage;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIImageView *backgroundViewImage; // @synthesize backgroundViewImage=_backgroundViewImage;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIPreviewAction *quickAction; // @synthesize quickAction=_quickAction;
- (void).cxx_destruct;
- (void)_updateCircleBackgroundImage;
- (void)updateFromQuickAction;
- (id)centerYAnchor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

