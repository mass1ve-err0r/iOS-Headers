//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile
{
    _Bool _showSegmentTitles;
    unsigned long long _numberOfSegments;
    unsigned long long _stepperBehavior;
    NSArray *_segmentTitles;
}

@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) _Bool showSegmentTitles; // @synthesize showSegmentTitles=_showSegmentTitles;
@property(nonatomic) unsigned long long stepperBehavior; // @synthesize stepperBehavior=_stepperBehavior;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

