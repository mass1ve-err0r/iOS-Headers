//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTLayoutDynamicResizeInfo.h>

__attribute__((visibility("hidden")))
@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo
{
    double _heightFactor;
    double _widthFactor;
}

@property(readonly, nonatomic) double widthFactor; // @synthesize widthFactor=_widthFactor;
@property(readonly, nonatomic) double heightFactor; // @synthesize heightFactor=_heightFactor;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)p_applyAccordionResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned int)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;

@end

