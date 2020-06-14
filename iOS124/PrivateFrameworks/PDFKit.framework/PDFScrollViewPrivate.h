//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PDFDocument, PDFDocumentView, PDFTimer, PDFView;

__attribute__((visibility("hidden")))
@interface PDFScrollViewPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFDocumentView *documentView;
    double oldMagnification;
    PDFTimer *boundsUpdateTimer;
    struct CGRect oldBounds;
    _Bool isZooming;
    _Bool scheduledPageSync;
    NSDate *pageSyncDate;
    _Bool forcesTopAlignment;
}

- (void).cxx_destruct;

@end

