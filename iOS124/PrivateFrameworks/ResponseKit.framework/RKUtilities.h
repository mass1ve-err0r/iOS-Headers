//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKUtilities : NSObject
{
}

+ (_Bool)isDeviceSupportedForPhotoSharingIntentDetection:(id)arg1;
+ (_Bool)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1;
+ (id)getDeviceModel;
+ (_Bool)suffixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)prefixInArray:(id)arg1 withArray:(id)arg2;
+ (_Bool)tokenInArray:(id)arg1 withArray:(id)arg2;
+ (id)removeEmoji:(id)arg1;
+ (_Bool)isLanguageSupportedBySmartPunctuation:(id)arg1;
+ (_Bool)isLanguageSupportedForPartOfSpeech:(id)arg1;
+ (_Bool)isLanguageSupportedForLemmatization:(id)arg1;
+ (_Bool)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;
+ (id)stripDiacritics:(id)arg1;
+ (id)normalizeForPersonalization:(id)arg1;
+ (id)stripEmojiSkinTones:(id)arg1;
+ (id)removeMultipleWhitespaces:(id)arg1;
+ (id)stripPunctuations:(id)arg1;

@end

