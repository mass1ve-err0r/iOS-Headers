//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeLayoutOptions : NSObject
{
    NSArray *_patternOffsetsBySubpath;
    NSArray *_transparencyLayersBySubpath;
    double _strokeEnd;
}

@property(nonatomic) double strokeEnd; // @synthesize strokeEnd=_strokeEnd;
@property(copy, nonatomic) NSArray *transparencyLayersBySubpath; // @synthesize transparencyLayersBySubpath=_transparencyLayersBySubpath;
@property(copy, nonatomic) NSArray *patternOffsetsBySubpath; // @synthesize patternOffsetsBySubpath=_patternOffsetsBySubpath;
- (void).cxx_destruct;
- (id)init;

@end

