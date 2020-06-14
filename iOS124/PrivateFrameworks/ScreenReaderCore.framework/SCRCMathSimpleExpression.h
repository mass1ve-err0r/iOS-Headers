//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression
{
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)latexMathModeDescription;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (_Bool)canBeUsedWithBase;
- (_Bool)isFunctionName;
- (id)_functionNames;
- (_Bool)isWordOrAbbreviation;
- (long long)integerValue;
- (_Bool)isInteger;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

