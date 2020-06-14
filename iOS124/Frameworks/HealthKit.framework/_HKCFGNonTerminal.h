//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKCFGExpression.h>

@class NSCharacterSet, NSMutableArray, NSString;

@interface _HKCFGNonTerminal : _HKCFGExpression
{
    NSString *_label;
    NSMutableArray *_replacementRules;
    NSCharacterSet *_charactersToBeSkipped;
}

+ (id)nonTerminalWithLabel:(id)arg1;
@property(copy, nonatomic) NSCharacterSet *charactersToBeSkipped; // @synthesize charactersToBeSkipped=_charactersToBeSkipped;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_checkForCycles:(id)arg1;
- (void)_checkForCycles;
- (id)_replacementRules;
- (id)_parseTreeWithContext:(id)arg1;
- (unsigned long long)_minimumLength;
- (id)_label;
- (_Bool)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(CDUnknownBlockType)arg4;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;
- (void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(CDUnknownBlockType)arg2;
- (id)initWithLabel:(id)arg1;

@end

