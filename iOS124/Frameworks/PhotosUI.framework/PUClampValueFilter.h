//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUClampValueFilter : PUValueFilter
{
    double _minimumValue;
    double _maximumValue;
}

@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end

