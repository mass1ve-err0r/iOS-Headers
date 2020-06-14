//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSString, PDFSelectionPrivate, UIColor;

@interface PDFSelection : NSObject <NSCopying>
{
    PDFSelectionPrivate *_private;
}

- (void).cxx_destruct;
- (struct _NSRange)previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (id)description;
- (void)normalize;
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(_Bool)arg3 inContext:(struct CGContext *)arg4;
- (void)setForceBreaks:(_Bool)arg1;
- (_Bool)forceBreaks;
- (void)setCornerRadius:(double)arg1;
- (double)cornerRadius;
- (void)setInactiveColor:(id)arg1;
- (id)inactiveColor;
- (void)setActiveColor:(id)arg1;
- (id)activeColor;
- (id)rtfdData;
- (id)webArchive;
- (id)html;
- (id)attributedStringScaled:(double)arg1;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection *)arg1 scaled:(double)arg2;
- (id)colorWithCGColor:(struct CGColor *)arg1 space:(struct CGColorSpace *)arg2;
- (_Bool)beginsAndEndsOnWordBoundaries;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)indexOfLastCharacterOnPage:(id)arg1;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)arg1;
- (id)lastPage;
- (id)firstPage;
- (struct CGPoint)rightMostCharCenter;
- (struct CGPoint)leftMostCharCenter;
- (struct CGPoint)firstCharCenter;
- (void)subtractSelectionCore:(id)arg1 normalize:(_Bool)arg2;
- (void)addSelectionRange:(struct _NSRange)arg1 page:(id)arg2 normalize:(_Bool)arg3;
- (void)addSelectionCore:(id)arg1 normalize:(_Bool)arg2;
- (void)addSelectionNoNormalize:(id)arg1;
- (struct CGPDFSelection *)cgSelectionForPage:(id)arg1;
- (id)cgSelectionPages;
- (struct __CFArray *)cgSelections;
- (void)addCGSelection:(struct CGPDFSelection *)arg1 forPage:(id)arg2;
- (void)subtractSelection:(id)arg1;
- (id)boundsArrayForPage:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isEmpty;
- (id)asDestination;
- (id)document;
- (void)dealloc;
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(_Bool)arg3;
- (void)drawForPage:(id)arg1 active:(_Bool)arg2;
- (void)extendSelectionForLineBoundaries;
- (void)extendSelectionAtStart:(long long)arg1;
- (void)extendSelectionAtEnd:(long long)arg1;
- (void)addSelections:(id)arg1;
- (void)addSelection:(id)arg1;
- (id)selectionsByLine;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (unsigned long long)numberOfTextRangesOnPage:(id)arg1;
- (id)pdfSelectionUUID;
- (struct CGRect)lastSpanBoundsForPage:(id)arg1;
- (struct CGRect)firstSpanBoundsForPage:(id)arg1;
- (struct CGRect)spanBoundsForPage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct CGRect)boundsForPage:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
@property(readonly, nonatomic) NSString *string;
@property(copy, nonatomic) UIColor *color;
@property(readonly, nonatomic) NSArray *pages;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPage:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

