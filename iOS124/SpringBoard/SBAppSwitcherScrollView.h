//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIScrollView.h>

@interface SBAppSwitcherScrollView : BSUIScrollView
{
    struct CGPoint _previousContentOffset;
    double _previousScrollTime;
    struct CGPoint _rawContentOffsetVelocity;
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffsetVelocity;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

