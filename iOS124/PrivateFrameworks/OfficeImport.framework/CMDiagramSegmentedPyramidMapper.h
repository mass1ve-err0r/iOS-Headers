//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper
{
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned long long)arg1 inLayer:(unsigned long long)arg2 andSlice:(unsigned long long)arg3;
- (unsigned long long)layerCount;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (unsigned long long)pointCount;

@end

