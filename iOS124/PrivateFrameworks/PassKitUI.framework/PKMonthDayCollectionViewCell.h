//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell
{
    UILabel *_dayLabel;
    UIView *_topLine;
    UIView *_leftLine;
    UIView *_bottomLine;
    _Bool _enabled;
    long long _dayNumber;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long dayNumber; // @synthesize dayNumber=_dayNumber;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

