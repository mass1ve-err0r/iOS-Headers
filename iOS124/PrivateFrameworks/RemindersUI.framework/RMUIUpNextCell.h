//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class RMUIUpNextLabel, RMUIUpNextRowSeparator, UIImageView, UIVisualEffectView;

@interface RMUIUpNextCell : UIView
{
    UIVisualEffectView *_primaryVibrantView;
    UIVisualEffectView *_secondaryVibrantView;
    UIVisualEffectView *_tertiaryVibrantView;
    RMUIUpNextLabel *_timeLabel;
    RMUIUpNextLabel *_titleLabel;
    RMUIUpNextLabel *_locationLabel;
    UIImageView *_circleImageView;
    RMUIUpNextRowSeparator *_rowSeparator;
    UIView *_contentView;
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)updateMaxLayoutWidth;
- (void)setFrame:(struct CGRect)arg1;
- (double)rightMarginForTimeViewWidth:(double)arg1;
- (double)leftMarginForTimeViewWidth:(double)arg1;
- (double)timeViewWidth;
- (id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2;
- (id)titleStringForReminder:(id)arg1;
- (void)setupConstraints;
- (id)initWithReminder:(id)arg1 showRowSeparator:(_Bool)arg2;

@end

