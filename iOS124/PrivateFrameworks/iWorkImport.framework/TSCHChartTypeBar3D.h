//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartTypeBar3D : TSCH3DChartType
{
}

- (long long)userInterfaceTag;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(_Bool *)arg7;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)userInterfaceName;
- (id)init;
- (double)categoryAxisTitleRotation;
- (double)valueAxisTitleRotation;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;

@end

