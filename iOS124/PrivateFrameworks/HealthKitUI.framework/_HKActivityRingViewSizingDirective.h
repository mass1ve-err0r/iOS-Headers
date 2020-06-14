//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKActivityRingViewSizingDirective : NSObject
{
    NSString *_identifier;
    double _width;
    double _outerRingOffset;
    double _ringThickness;
    double _ringInterspacing;
}

+ (id)sortedRingRatioDirectives;
+ (id)activityRingSizingDirectiveWithIdentifier:(id)arg1 width:(double)arg2 outerRingOffset:(double)arg3 ringThickness:(double)arg4 ringInterspacing:(double)arg5;
@property(nonatomic) double ringInterspacing; // @synthesize ringInterspacing=_ringInterspacing;
@property(nonatomic) double ringThickness; // @synthesize ringThickness=_ringThickness;
@property(nonatomic) double outerRingOffset; // @synthesize outerRingOffset=_outerRingOffset;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

