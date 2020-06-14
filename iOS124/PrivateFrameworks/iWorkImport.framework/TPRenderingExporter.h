//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

@class TPPdfHyperlinkController;

__attribute__((visibility("hidden")))
@interface TPRenderingExporter : TSARenderingExporter
{
    TPPdfHyperlinkController *mHyperlinkController;
    unsigned long long mPageIndex;
    unsigned long long mPageCount;
    long long mLastPageIndexForLayout;
    _Bool mDidLimitPageLayout;
}

@property(readonly, nonatomic) _Bool didLimitPageLayout; // @synthesize didLimitPageLayout=mDidLimitPageLayout;
@property(nonatomic) long long lastPageIndexForLayout; // @synthesize lastPageIndexForLayout=mLastPageIndexForLayout;
- (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (id)initWithDocumentRoot:(id)arg1;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (double)totalProgess;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (id)currentInfos;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;

@end

