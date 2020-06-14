//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSUCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)digitPlaceholderStringInDigitToken;
- (unsigned long long)numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)stringByInsertingFormatGroupingSeparators;
- (_Bool)customFormatIntegerTokenUsesSeparator;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (_Bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (_Bool)isSpecialCustomNumberFormatToken;
@end

