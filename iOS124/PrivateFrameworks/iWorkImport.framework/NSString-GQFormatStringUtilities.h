//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GQFormatStringUtilities)
+ (id)sfu_numberSymbols;
- (id)sfu_prefixOfNumberFormatSubpattern;
- (int)sfu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)sfu_suffixOfNumberFormatSubpattern;
- (int)sfu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)sfu_numberPortionOfNumberFormatSubpattern;
- (id)sfu_negativeSubpatternOfNumberFormatPattern;
- (id)sfu_positiveSubpatternOfNumberFormatPattern;
- (int)sfu_indexOfNumberFormatSubpatternSeparator;
- (id)sfu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)sfu_createRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)sfu_isNumberFormatPattern;
- (id)sfu_createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
@end

