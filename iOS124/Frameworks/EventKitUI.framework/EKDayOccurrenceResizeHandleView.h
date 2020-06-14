//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView
{
    EKDayOccurrenceView *_occurrenceView;
    UIColor *_baseColor;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) __weak EKDayOccurrenceView *occurrenceView; // @synthesize occurrenceView=_occurrenceView;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;
- (struct CGRect)_circleRect;

@end

