//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject
{
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;
- (void).cxx_destruct;
- (void)queryUsedTiles:(int *)arg1 andFreeTiles:(int *)arg2;
- (void)_reclaimRecyclePool;
- (void)releasePDFTileSurface:(id)arg1 shouldRecycle:(_Bool)arg2;
- (void)renderIOTileForRequest:(id)arg1;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6 shouldAntiAlias:(_Bool)arg7;
- (void)_releaseTiles;
- (void)setSaveBitmapFiles;
- (_Bool)drawTileEdges;
- (void)setDrawTileEdges:(_Bool)arg1;
- (int)tileRenderType;
- (void)setTileRenderType:(int)arg1;
- (void)dealloc;
- (id)init;

@end

