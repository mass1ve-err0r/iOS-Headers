//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TPDocumentRoot;
@protocol TSWPFootnoteMarkProvider;

__attribute__((visibility("hidden")))
@interface TPFootnoteLayoutController : NSObject
{
    TPDocumentRoot *_documentRoot;
    _Bool _bumpedDocumentEndnotesForPageBreak;
}

- (void).cxx_destruct;
- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange)arg1;
- (id)p_layoutForFootnoteReferenceStorage:(id)arg1;
- (unsigned long long)p_layoutFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 measure:(_Bool)arg4 inflating:(_Bool)arg5;
- (void)removeDeletedFootnoteInContainer:(id)arg1;
- (struct _NSRange)footnoteLayoutRangeForPageCharRange:(struct _NSRange)arg1;
- (struct _NSRange)endnoteRangeForSectionCharRange:(struct _NSRange)arg1 isLastSection:(_Bool)arg2 sectionHint:(id)arg3;
- (void)inflateFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2;
- (struct _NSRange)layoutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 pageCharRange:(struct _NSRange)arg4 sectionCharRange:(struct _NSRange)arg5 isLastSection:(_Bool)arg6 sectionHint:(id)arg7 pageHintIndex:(unsigned long long)arg8;
@property(readonly, nonatomic) __weak id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
- (id)initWithDocumentRoot:(id)arg1;

@end
