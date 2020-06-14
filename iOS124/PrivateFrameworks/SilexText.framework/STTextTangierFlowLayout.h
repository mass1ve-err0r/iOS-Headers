//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDLayout.h>

#import <SilexText/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSString, TSDCanvas, TSPObject;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

@interface STTextTangierFlowLayout : TSDLayout <TSWPLayoutTarget>
{
    NSMutableArray *_columns;
}

@property(retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly, nonatomic) _Bool ignoresEquationAlignment;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) _Bool allowsLastLineTruncation;
@property(readonly, nonatomic) _Bool layoutIsValid;
- (_Bool)isLayoutOffscreen;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
@property(readonly, nonatomic) TSDCanvas *canvas;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (_Bool)isLastTarget;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const void *nextTargetTopicNumbers;
@property(readonly, nonatomic) const void *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (_Bool)shouldProvideSizingGuides;
- (_Bool)shouldDisplayGuides;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
- (struct CGPoint)pointForCharacterPosition:(unsigned long long)arg1;
- (unsigned long long)characterPositionForPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 layout:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsDescendersToClip;
@property(readonly, nonatomic) _Bool alwaysAllowWordSplit;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool pushAscendersIntoColumn;
@property(readonly, nonatomic) double reservedWidthWhenTruncating;
@property(readonly) Class superclass;

@end

