//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (HealthKit)
+ (id)hk_randomStringOfLength:(long long)arg1;
- (id)hk_MD2Hash;
- (id)hk_MD4Hash;
- (id)hk_MD5HashAsUUID;
- (id)hk_MD5Hash;
- (id)hk_SHA512Hash;
- (id)hk_SHA384Hash;
- (id)hk_SHA256Hash;
- (id)hk_SHA224Hash;
- (id)hk_SHA1Hash;
- (_Bool)hk_isBetweenLowerBuildVersion:(id)arg1 upperBuildVersion:(id)arg2;
- (long long)hk_compareBuildVersionWithString:(id)arg1;
- (_Bool)hk_isBase64;
- (_Bool)hk_isCaseInsensitiveSubstringInString:(id)arg1;
- (id)hk_stringByAppendingKeyPathComponent:(id)arg1;
- (id)hk_stringByUnescapingJSONCharactersForDisplay;
- (id)hk_stringByRemovingCharactersInSet:(id)arg1;
- (id)hk_trimWhitespaceAndNewlines;
- (id)hk_stripLeadingTrailingWhitespace;
- (_Bool)hk_isValidPurposeString;
- (id)hk_copyNonEmptyString;
@end

