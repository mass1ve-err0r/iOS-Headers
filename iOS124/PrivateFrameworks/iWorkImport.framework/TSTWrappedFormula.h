//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTFormula.h>

__attribute__((visibility("hidden")))
@interface TSTWrappedFormula : TSTFormula
{
    int mFunctionIndex;
}

@property(nonatomic) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

