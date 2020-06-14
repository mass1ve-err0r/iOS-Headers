//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/PDFCollectionViewDataSource-Protocol.h>
#import <PDFKit/PDFCollectionViewDelegate-Protocol.h>

@class NSArray, NSString, PDFThumbnailViewPrivateVars, PDFView, UIColor;

@interface PDFThumbnailView : UIView <PDFCollectionViewDelegate, PDFCollectionViewDataSource, NSCoding>
{
    PDFThumbnailViewPrivateVars *_private;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)setPdfView:(id)arg1;
- (id)pdfView;
- (CDUnknownBlockType)_newIconSetterBlockForIconView:(id)arg1 andIndexPath:(id)arg2;
- (void)_pdfDocumentWasUnlocked:(id)arg1;
- (void)didEndDisplayingItem:(id)arg1;
- (id)scrubbingAtFraction:(double)arg1 betweenIndexPath:(id)arg2 andIndexPath:(id)arg3 outDiscreteFraction:(double *)arg4;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)selectionChanged;
- (void)configureItem:(id)arg1 forRepresentedObject:(id)arg2 andViewIndexPath:(id)arg3 usingOptionalImage:(id)arg4;
- (id)indexPathForRepresentedObject:(id)arg1;
- (id)representedObjectAtIndexPath:(id)arg1;
- (id)currentIndexPath;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)setHorizontalMode:(_Bool)arg1;
@property(nonatomic) long long layoutMode;
@property(nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) NSArray *selectedPages;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) PDFView *PDFView;
- (void)documentChanged;
- (void)documentUnlocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

