//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSPinyinString : NSString
{
    NSString *_string;
    unsigned long long _syllableCount;
    unsigned long long _score;
    unsigned long long _rangeCount;
    unsigned long long _replacementCount;
    unsigned long long _transpositionCount;
    unsigned long long _insertionCount;
    unsigned long long _deletionCount;
    unsigned long long _firstModificationIndex;
    struct _NSRange *_ranges;
    _Bool _lastSyllableIsPartial;
}

+ (id)prefixesForInputString:(id)arg1;
+ (id)alternativesForInputString:(id)arg1;
- (struct _NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfFirstModification;
- (unsigned long long)numberOfDeletions;
- (unsigned long long)numberOfInsertions;
- (unsigned long long)numberOfTranspositions;
- (unsigned long long)numberOfReplacements;
- (unsigned long long)numberOfNonPinyinRanges;
- (unsigned long long)score;
- (_Bool)lastSyllableIsPartial;
- (unsigned long long)syllableCount;
- (id)string;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)nonPinyinIndexSet;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(struct _NSRange *)arg10;
- (id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(_Bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(struct _NSRange *)arg11;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;

@end

