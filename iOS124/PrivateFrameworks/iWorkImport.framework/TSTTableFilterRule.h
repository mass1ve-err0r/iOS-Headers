//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTFormulaPredicate;

__attribute__((visibility("hidden")))
@interface TSTTableFilterRule : NSObject <NSCopying>
{
    _Bool _doesNotNeedFormulaRewriteForImport;
    TSTFormulaPredicate *_predicate;
}

+ (id)ruleWhereValuesInTable:(id)arg1 inBaseColumn:(struct TSUModelColumnIndex)arg2 matchCell:(id)arg3;
+ (id)ruleWithFormulaPredicate:(id)arg1;
@property(nonatomic) _Bool doesNotNeedFormulaRewriteForImport; // @synthesize doesNotNeedFormulaRewriteForImport=_doesNotNeedFormulaRewriteForImport;
@property(retain, nonatomic) TSTFormulaPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)initFromArchive:(const struct FilterRuleArchive *)arg1;
- (void)encodeToArchive:(struct FilterRuleArchive *)arg1 archiver:(id)arg2;
- (_Bool)matchesCell:(id)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForFilterRuleInTableInfo:(id)arg1;
- (_Bool)matchesRow:(unsigned int)arg1 withFormulaTableUID:(const UUIDData_5fbc143e *)arg2 withCalculationEngine:(id)arg3;
- (_Bool)needsFormulaRewriteForImport;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (_Bool)needsThreshold;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct TSCEFormula *)formula;
- (id)description;
- (id)copyByRewritingToGeometricFormWithTableInfo:(id)arg1 containsBadRef:(_Bool *)arg2;
- (id)copyByRewritingToUidFormWithTableInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initRuleWhereValuesInTable:(id)arg1 inBaseColumn:(struct TSUModelColumnIndex)arg2 matchCell:(id)arg3;
- (id)initWithFormulaPredicate:(id)arg1;

@end
