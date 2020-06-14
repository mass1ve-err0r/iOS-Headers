//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface CAMPanoramaArrowView : UIView
{
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath *_currentTailPiecesPath;
    struct CGRect _arrowTailRect;
    double _currentNormalizedSpeed;
    double _tailBiggestDelta;
    double _tailBigDelta;
    double _tailMediumDelta;
    double _tailSmallDelta;
}

- (void).cxx_destruct;
- (void)reset;
- (void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (struct CGPath *)_newTailPiecesPathOfWidth:(double *)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

