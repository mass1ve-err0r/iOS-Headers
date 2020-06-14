//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKMedicalRecordSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    _Bool _outOfRange;
    struct CGPoint _coordinate;
}

@property(readonly, nonatomic) _Bool outOfRange; // @synthesize outOfRange=_outOfRange;
@property(readonly, nonatomic) struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (double)maxYValue;
- (double)minYValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithCoordinate:(struct CGPoint)arg1 outOfRange:(_Bool)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

