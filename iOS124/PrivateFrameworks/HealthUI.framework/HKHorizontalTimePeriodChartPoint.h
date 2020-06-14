//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xStart;
    NSDate *_xEnd;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property(retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(retain, nonatomic) NSDate *xEnd; // @synthesize xEnd=_xEnd;
@property(retain, nonatomic) NSDate *xStart; // @synthesize xStart=_xStart;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)allYValues;
- (id)maxYValue;
- (id)minYValue;
- (id)yValueForKey:(id)arg1;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

