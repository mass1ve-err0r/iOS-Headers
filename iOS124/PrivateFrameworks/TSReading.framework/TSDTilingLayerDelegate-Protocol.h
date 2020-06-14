//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/CALayerDelegate-Protocol.h>

@class TSDTileProvider, TSDTilingBackgroundQueue, TSDTilingLayer;

@protocol TSDTilingLayerDelegate <CALayerDelegate>

@optional
- (void)tilingLayerWillSetNeedsDisplayForDirtyTiles:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsLayout:(TSDTilingLayer *)arg1;
- (void)tilingLayerWillSetNeedsDisplay:(TSDTilingLayer *)arg1;
- (_Bool)mustDrawTilingLayerOnMainThread:(TSDTilingLayer *)arg1;
- (TSDTileProvider *)providerForTilingLayer:(TSDTilingLayer *)arg1;
- (void)didEndDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 withToken:(id)arg2;
- (_Bool)shouldBeginDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (TSDTilingBackgroundQueue *)queueForDrawingTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (_Bool)canDrawTilingLayerInBackground:(TSDTilingLayer *)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(TSDTilingLayer *)arg1;
- (_Bool)shouldLayoutTilingLayer:(TSDTilingLayer *)arg1;
@end

