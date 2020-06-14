//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PRTurkishSuffix : NSObject
{
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer[16];
    unsigned char _isOptional[16];
    unsigned long long _patternBufferLength;
    int _suffixType;
    _Bool _postponesApostrophe;
}

+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned long long)arg4 depth:(unsigned long long)arg5 matchState:(int)arg6 suffixStack:(id *)arg7 suffixRangeStack:(struct _NSRange *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (id)standardTurkishSuffixes;
+ (id)standardTurkishVerbSuffixes;
+ (id)standardTurkishNounSuffixes;
- (unsigned long long)matchingIndexInBuffer:(char *)arg1 length:(unsigned long long)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(_Bool *)arg4;
- (_Bool)postponesApostrophe;
- (int)suffixType;
- (id)name;
- (id)pattern;
- (id)description;
- (void)dealloc;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(_Bool)arg4;
- (void)_fillPatternBuffer;

@end

