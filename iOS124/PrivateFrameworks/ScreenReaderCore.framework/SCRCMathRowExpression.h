//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathRowExpression : SCRCMathArrayExpression
{
}

- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (id)speakableSummary;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)_indexesOfCharactersInWords;
- (_Bool)endsWithSpace;
- (_Bool)beginsWithSpace;
- (unsigned long long)fractionLevel;
- (_Bool)canBeUsedWithBase;
- (_Bool)canBeUsedWithRange;
- (_Bool)isWordOrAbbreviation;
- (_Bool)isFunctionName;
- (long long)integerValue;
- (_Bool)isInteger;
- (_Bool)isNumber;

@end

