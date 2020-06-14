//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProofReader/PRLexiconCursor.h>

@class NSString;

@interface PRLexiconStemSuffixCursor : PRLexiconCursor
{
    NSString *_stem;
    NSString *_abbreviation;
    unsigned int _stemTokenID;
    double _stemProbability;
    double _abbreviationProbability;
}

- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLexicon:(id)arg1 stem:(id)arg2 tokenID:(unsigned int)arg3 abbreviation:(id)arg4 stemProbability:(double)arg5;

@end

