//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUDynamicValueFilter.h>

@interface PUMaximumChangeRateValueFilter : PUDynamicValueFilter
{
    double _maximumChangeRate;
}

@property(nonatomic) double maximumChangeRate; // @synthesize maximumChangeRate=_maximumChangeRate;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;

@end

