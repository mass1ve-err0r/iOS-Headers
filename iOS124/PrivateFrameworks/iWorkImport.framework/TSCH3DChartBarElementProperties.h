//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

@class NSMutableArray, TSCH3DBarChartDefaultAppearance, TSCH3DLabelResources;
@protocol TSCH3DBarChartAppearance;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBarElementProperties : TSCH3DChartBasicElementProperties
{
    vector_7584168e mMaxValues;
    struct vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo>> mElementInfos;
    _Bool mStacked;
    _Bool mBevelEdges;
    float mBarWidth;
    float mElementsXOffset;
    float mSeriesOffset;
    float mSetWidth;
    int mBarShape;
    TSCH3DLabelResources *mSeriesLabels;
    struct array<TSCH3D::BarExtrusionDetails, 2> mExtrusionDetails;
    TSCH3DBarChartDefaultAppearance *mAppearance;
    NSMutableArray *mRangeCache;
}

@property(readonly, nonatomic) _Bool hasBevelEdges; // @synthesize hasBevelEdges=mBevelEdges;
@property(readonly, nonatomic) int barShape; // @synthesize barShape=mBarShape;
@property(retain, nonatomic) TSCH3DLabelResources *seriesLabels; // @synthesize seriesLabels=mSeriesLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TSCH3DBarChartAppearance> appearance;
- (id)p_appearance;
- (void)releaseAndClearAppearance;
- (void)p_createAppearance;
- (void)p_updateAppearance;
- (void)p_resetExtrusionDetails;
- (id)p_appearanceClasses;
- (void)setExtrusionDetails:(const struct BarExtrusionDetails *)arg1 forShape:(int)arg2;
- (const struct BarExtrusionDetails *)extrusionDetailsForShape:(int)arg1;
- (float)maxValueForSeries:(long long)arg1;
- (void)reset;
- (float)chartInitialDepthOffset;
- (void)updateLabels;
- (void)createResources;
- (void)updateMaxValuesAndBevels;
- (void)calculateLayout;
- (id)texcoordsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)normalsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)boundsGeometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)geometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)p_barResourceCacheItemAtIndex:(const tvec2_3b141483 *)arg1;
- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(tvec2_3b141483)arg3 propertyAccessor:(id)arg4;
- (float)elementTransformDepthFromPropertyAccessor:(id)arg1;
- (float)barWidth;
- (float)interceptValueForSeries:(id)arg1;
- (id)p_calculateRangeForSeries:(id)arg1 index:(tvec2_3b141483 *)arg2 intercept:(id)arg3;
- (id)rangeForSeries:(id)arg1 index:(tvec2_3b141483 *)arg2;
- (void)p_updateRangeCache;
- (id)calculateInterceptForSeries:(id)arg1;
- (_Bool)beveledAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setBeveledAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setMaxValueForSeries:(long long)arg1 value:(float)arg2;
- (struct BarElementInfo *)elementInfoAtIndex:(const tvec2_3b141483 *)arg1;
- (struct BarElementInfo)barElementInfoAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setElementInfo:(const struct BarElementInfo *)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (long long)flatIndex:(tvec2_3b141483 *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

