//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCERefParsingProtocol-Protocol.h>

@class NSCharacterSet, NSString, TSCECalculationEngine;

__attribute__((visibility("hidden")))
@interface TSTRefParser : NSObject <TSCERefParsingProtocol>
{
    TSCECalculationEngine *_calcEngine;
    NSCharacterSet *_whitespaceCharSet;
}

+ (RefTypeHolder_8c6da553)p_chromeRangeRefForBaseRangeRef:(RefTypeHolder_1140c985)arg1 calcEngine:(id)arg2;
+ (RefTypeHolder_1140c985)p_baseRangeRefForChromeRangeRef:(RefTypeHolder_8c6da553)arg1 calcEngine:(id)arg2;
+ (id)p_chromeReferenceForBaseReference:(id)arg1 calcEngine:(id)arg2;
+ (id)p_baseReferenceForChromeReference:(id)arg1 calcEngine:(id)arg2;
+ (id)p_chromeReferencesForMixedReferences:(id)arg1 calcEngine:(id)arg2;
+ (id)p_baseReferencesForChromeReferences:(id)arg1 calcEngine:(id)arg2;
@property(retain, nonatomic) NSCharacterSet *whitespaceCharSet; // @synthesize whitespaceCharSet=_whitespaceCharSet;
@property(readonly, nonatomic) __weak TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (void).cxx_destruct;
- (struct TSCECategoryRef)parseAsCategoryRefWithParsingContext:(id)arg1;
- (struct TSCECategoryRef)parseStringAsCategoryRef:(id)arg1 withParsingContext:(id)arg2;
- (struct TSCECategoryRef)p_parseAsCategoryRefWithSheet:(id)arg1 tableName:(id)arg2 columnNameAndGroupValuesStartAt:(unsigned long long)arg3 withParsingContext:(id)arg4;
- (UUIDData_5fbc143e)p_findFirstColumnNameInComponent:(id)arg1 tableName:(id)arg2 refResolver:(id)arg3 calcEngine:(id)arg4 outPreserveFlags:(struct TSUPreserveFlags *)arg5 usedWordCount:(unsigned long long *)arg6;
- (struct TSUCellCoord)parseR1C1Coord:(id)arg1 containingCell:(const struct TSCECellRef *)arg2 preserveFlagsOut:(struct TSUPreserveFlags *)arg3;
- (struct TSCERangeRef)parseR1C1Reference:(id)arg1 containingCell:(const struct TSCECellRef *)arg2 preserveFlagsOut:(struct TSUPreserveFlags *)arg3;
- (RefTypeHolder_1140c985)parseStringAsBaseReference:(id)arg1 withParsingContext:(id)arg2;
- (RefTypeHolder_8c6da553)parseStringAsChromeReference:(id)arg1 withParsingContext:(id)arg2;
- (_Bool)p_parseComponentsOfReference:(id)arg1 gettingSheetName:(id *)arg2 gettingTableName:(id *)arg3 gettingRest:(id *)arg4;
- (id)parseAsChromeRefWithParsingContext:(id)arg1;
- (id)parseAsTractRefWithParsingContext:(id)arg1;
- (RefTypeHolder_8c6da553)p_parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(struct TSCETableResolver *)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(struct TSCETableResolver *)arg4 withParsingContext:(id)arg5;
- (struct TSUChromeCellCoord)p_parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(struct TSCETableResolver *)arg2 outPreserveFlags:(struct TSUPreserveFlags *)arg3 gettingReferencesMatchingInputAsPrefix:(id *)arg4;
- (id)initWithCalcEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

