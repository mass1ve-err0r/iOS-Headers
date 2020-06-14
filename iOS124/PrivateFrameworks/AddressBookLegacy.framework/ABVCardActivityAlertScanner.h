//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject
{
    NSString *_string;
    unsigned long long _position;
}

+ (_Bool)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
- (_Bool)atEnd;
- (unsigned long long)position;
- (unsigned short)nextUnescapedCharacter;
- (unsigned short)nextCharacter;
- (void)scanPastWhitespace;
- (_Bool)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacterWithEscaping:(_Bool)arg1;
- (unsigned short)scanCharacter;
- (_Bool)scanPastItemDelimiter;
- (_Bool)scanPastKeyValueSeparator;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (id)scanStringValue;
- (id)scanKeyValuePair;
- (id)scanAlertValue;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

