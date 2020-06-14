//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH2DChartAbstractAreaLayoutItem.h>

@class TSCHChartAxisLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem
{
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    unsigned long long mRelayoutDepth;
    _Bool mInOutwardLayout;
}

- (void).cxx_destruct;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)p_updateMinHitSizes;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (void)buildSubTree;
- (double)p_dataSetNameLabelPadding;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (struct CGRect)titleFrame;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;

@end

