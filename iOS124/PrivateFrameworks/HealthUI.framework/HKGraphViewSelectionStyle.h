//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject
{
    double _unselectedSeriesAlpha;
    HKStrokeStyle *_selectedPointLineStrokeStyle;
    HKStrokeStyle *_touchPointLineStrokeStyle;
}

@property(retain, nonatomic) HKStrokeStyle *touchPointLineStrokeStyle; // @synthesize touchPointLineStrokeStyle=_touchPointLineStrokeStyle;
@property(retain, nonatomic) HKStrokeStyle *selectedPointLineStrokeStyle; // @synthesize selectedPointLineStrokeStyle=_selectedPointLineStrokeStyle;
@property(nonatomic) double unselectedSeriesAlpha; // @synthesize unselectedSeriesAlpha=_unselectedSeriesAlpha;
- (void).cxx_destruct;

@end

