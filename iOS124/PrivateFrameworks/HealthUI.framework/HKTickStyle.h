//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle
{
    _Bool _shouldRenderMajorTickMarks;
    double _tickLength;
    long long _tickDirection;
}

@property(nonatomic) _Bool shouldRenderMajorTickMarks; // @synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks;
@property(nonatomic) long long tickDirection; // @synthesize tickDirection=_tickDirection;
@property(nonatomic) double tickLength; // @synthesize tickLength=_tickLength;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

