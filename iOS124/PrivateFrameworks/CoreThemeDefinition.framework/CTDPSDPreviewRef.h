//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef
{
    struct _PSDImageInfo _imageInfo;
    long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    NSArray *_layerIndexLayout;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
}

- (long long)indexOfDrawingLayerType:(long long)arg1;
- (long long)numberOfAlphaChannels;
- (long long)numberOfGradientLayers;
- (_Bool)hasGradient;
- (_Bool)hasRegularSliceGrid;
- (void)evaluateSliceGrid;
- (long long)sliceColumnCount;
- (long long)sliceRowCount;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

