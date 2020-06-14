//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList
{
    NSArray *_coordinates;
    CDStruct_6ca94699 _blockPath;
}

- (void).cxx_destruct;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (long long)numCoordinates;
- (id)_coordinatesInChartableRange:(id)arg1;
- (id)coordinates;
- (CDStruct_6ca94699)blockPathEnd;
- (CDStruct_6ca94699)blockPathStart;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;

@end

