//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIImageView, UISlider;
@protocol PUSlideshowSpeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSpeedCell : UITableViewCell
{
    UIImageView *_slowerGlyphImageView;
    UIImageView *_fasterGlyphImageView;
    UISlider *_slider;
    NSArray *_speedConstraints;
    _Bool _enabled;
    id <PUSlideshowSpeedCellDelegate> _delegate;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PUSlideshowSpeedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) double stepDuration;
- (void)_stepDurationValueChanged:(id)arg1;
- (void)_updateView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateConstraints;

@end

