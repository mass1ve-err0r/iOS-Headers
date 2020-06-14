//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSDImageDrawingHelper, TSPData;

@protocol TSDImageDrawingDataSource <NSObject>
- (TSPData *)imageDrawingHelperThumbnailAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (_Bool)imageDrawingHelperImageHasAlpha:(TSDImageDrawingHelper *)arg1;
- (struct CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(TSDImageDrawingHelper *)arg1;
- (struct CGRect)imageDrawingHelperImageRect:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperThumbnailImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperImageData:(TSDImageDrawingHelper *)arg1;
@end

