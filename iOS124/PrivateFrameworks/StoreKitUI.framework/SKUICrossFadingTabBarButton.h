//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, _Badge;

@interface SKUICrossFadingTabBarButton : UIControl
{
    UILabel *_selectedTitleLabel;
    UIImageView *_selectedImageView;
    UILabel *_standardTitleLabel;
    UIImageView *_standardImageView;
    _Badge *_badge;
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    double _selectionProgress;
}

@property(nonatomic) double selectionProgress; // @synthesize selectionProgress=_selectionProgress;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_positionBadge;
- (void)_setBadgeValue:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

