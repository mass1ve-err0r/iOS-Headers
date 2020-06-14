//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXMLayoutItem : NSObject
{
}

+ (struct CGRect)normalizedBoundingFrameForItems:(id)arg1;
+ (struct CGRect)boundingFrameForItems:(id)arg1;
- (struct CGRect)_rectValueForMetric:(long long)arg1;
- (double)_floatValueForMetric:(long long)arg1;
- (long long)_metricTypeForMetric:(long long)arg1;
- (_Bool)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4;
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double top;
@property(readonly, nonatomic) double height;
- (id)description;

// Remaining properties
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly, nonatomic) struct CGRect normalizedFrame; // @dynamic normalizedFrame;

@end

