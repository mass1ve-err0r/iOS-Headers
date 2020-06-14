//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState
{
    id *recurrentMatrices;
    id *cellMatrices;
    int nLayers;
    _Bool _isTemporary;
}

- (_Bool)isTemporary;
- (void)setReadCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id *)arg2 cellMatrixDescriptors:(id *)arg3 isTemporary:(_Bool)arg4 layerCount:(int)arg5;
- (id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1;
- (id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1;

@end

