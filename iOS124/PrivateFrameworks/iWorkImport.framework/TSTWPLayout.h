//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPLayout.h>

@class TSTCellStyle, TSWPPadding, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTWPLayout : TSWPLayout
{
    _Bool _cachedCellWraps;
    _Bool _cacheIsValid;
    int _cachedVerticalAlignment;
    int _cachedParagraphAlignment;
    struct TSUCellCoord _cachedCellID;
    TSTCellStyle *_cachedCellStyle;
    TSWPParagraphStyle *_cachedTextStyle;
    unsigned long long _cachedAutoSizeFlags;
    TSWPPadding *_cachedPadding;
    struct TSUCellRect _cachedMergeRange;
    struct TSUCellRect _cachedMaskSpillRange;
    struct CGRect _cachedMaskRect;
    struct CGRect _cachedAutosizedFrame;
}

@property(nonatomic) _Bool cacheIsValid; // @synthesize cacheIsValid=_cacheIsValid;
@property(nonatomic) struct CGRect cachedAutosizedFrame; // @synthesize cachedAutosizedFrame=_cachedAutosizedFrame;
@property(retain, nonatomic) TSWPPadding *cachedPadding; // @synthesize cachedPadding=_cachedPadding;
@property(nonatomic) struct TSUCellRect cachedMaskSpillRange; // @synthesize cachedMaskSpillRange=_cachedMaskSpillRange;
@property(nonatomic) struct CGRect cachedMaskRect; // @synthesize cachedMaskRect=_cachedMaskRect;
@property(nonatomic) unsigned long long cachedAutoSizeFlags; // @synthesize cachedAutoSizeFlags=_cachedAutoSizeFlags;
@property(nonatomic) struct TSUCellRect cachedMergeRange; // @synthesize cachedMergeRange=_cachedMergeRange;
@property(nonatomic) int cachedParagraphAlignment; // @synthesize cachedParagraphAlignment=_cachedParagraphAlignment;
@property(nonatomic) int cachedVerticalAlignment; // @synthesize cachedVerticalAlignment=_cachedVerticalAlignment;
@property(nonatomic) _Bool cachedCellWraps; // @synthesize cachedCellWraps=_cachedCellWraps;
@property(retain, nonatomic) TSWPParagraphStyle *cachedTextStyle; // @synthesize cachedTextStyle=_cachedTextStyle;
@property(retain, nonatomic) TSTCellStyle *cachedCellStyle; // @synthesize cachedCellStyle=_cachedCellStyle;
@property(nonatomic) struct TSUCellCoord cachedCellID; // @synthesize cachedCellID=_cachedCellID;
- (_Bool)invalidateForPageCountChange;
- (void)validate;
- (void)invalidate;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 parentLayout:(id)arg2 cellID:(struct TSUCellCoord)arg3 frame:(struct CGRect)arg4;

@end

