//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TSCH3DAxisLabelPositioner
- (_Bool)isHorizontal;
- (_Bool)hasOffset;
- (float)labelGapForCount:(unsigned long long)arg1;
- (tvec3_17f03ce0)positionForValue:(double)arg1 count:(unsigned long long)arg2 chartDirection:(const tvec3_17f03ce0 *)arg3;
- (unsigned int)alignmentForChartDirection:(const tvec3_17f03ce0 *)arg1;
@end

