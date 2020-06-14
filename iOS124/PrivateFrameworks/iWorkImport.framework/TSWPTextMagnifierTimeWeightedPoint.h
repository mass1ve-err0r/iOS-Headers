//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTextMagnifierTimeWeightedPoint : NSObject
{
    long long m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

- (double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1;
- (double)distanceCoveredInInterval:(double)arg1;
- (_Bool)historyCovers:(double)arg1;
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)addPoint:(struct CGPoint)arg1;
- (void)clearHistory;

@end

