//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHLineElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHAreaElementBuilder : TSCHLineElementBuilder
{
}

- (_Bool)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(CDStruct_460b8ffe *)arg6 withCount:(unsigned long long)arg7;
- (void)p_addTopStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long *)arg5;
- (_Bool)needsSeparateHitTestingPaths;

@end

