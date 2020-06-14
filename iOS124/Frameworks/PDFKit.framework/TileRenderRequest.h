//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, PDFRenderingProperties;
@protocol PDFTilePoolDelegate;

__attribute__((visibility("hidden")))
@interface TileRenderRequest : NSObject
{
    id <PDFTilePoolDelegate> target;
    PDFPage *page;
    PDFRenderingProperties *renderingProperties;
    struct CGRect tileFrame;
    double zoomFactor;
    struct CGAffineTransform matrix;
    _Bool shouldAntiAlias;
}

- (void).cxx_destruct;

@end

