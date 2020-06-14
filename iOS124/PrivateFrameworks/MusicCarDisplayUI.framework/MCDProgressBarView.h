//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MCDProgressBarView : UIView
{
    UIView *_overallBarView;
    UIView *_progressBarView;
    UIView *_indicatorView;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIView *overallBarView; // @synthesize overallBarView=_overallBarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

