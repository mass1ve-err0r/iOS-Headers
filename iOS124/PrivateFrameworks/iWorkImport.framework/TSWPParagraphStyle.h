//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface TSWPParagraphStyle : TSSStyle <TSTCellDiffing, TSSPreset, TSDMixing>
{
    struct __CTParagraphStyle *_coreTextParagraphStyle;
    NSMapTable *_styleCache;
    NSMapTable *_scalePercentStyleCaches;
}

+ (id)styleSummaryForPropertyMap:(id)arg1;
+ (id)presetStyleDescriptor;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)p_normalDecimalSeparator;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisParagraphProperties;
+ (id)deprecatedProperties;
+ (id)paragraphProperties;
+ (id)properties;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)cellDiffProperties;
+ (id)defaultStyleWithDefaultPropertiesInContext:(id)arg1;
- (void).cxx_destruct;
- (id)styleSummary;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (_Bool)transformsFontSizes;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (id)parentStyleForFixingOrphanVariation;
- (void)addMissingClassProperties;
- (void)localizeForBidi:(_Bool)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ParagraphStyleArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ParagraphStyleArchive *)arg1 unarchiver:(id)arg2;
- (id)initialListStyle;
- (void)setInitialListStyle:(id)arg1;
- (id)followingParagraphStyle;
- (id)p_coreTextCharacterStyle:(id)arg1 allowLigatures:(_Bool)arg2 scalePercent:(unsigned long long)arg3;
- (struct __CTParagraphStyle *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTFont *)findCachedFontForCharacterStyle:(id)arg1 scalePercent:(unsigned long long)arg2;
- (id)getTypesetterAttributes:(id)arg1 scalePercent:(unsigned long long)arg2 isRightToLeft:(_Bool)arg3;
- (void)clearStyleCaches;
- (void)willModify;
- (id)fullPropertyMap;
- (void)dealloc;
- (double)ascent;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (_Bool)p_contentTagIsBody;
@property(readonly, nonatomic) _Bool allowAsBookmarkSuggestionStyle;
@property(readonly, nonatomic) _Bool showInSuggestedBookmarksList;

@end

