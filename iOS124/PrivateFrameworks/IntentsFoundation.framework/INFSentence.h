//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INFGrammarCollection, NSMutableDictionary, NSSet, NSString;

@interface INFSentence : NSObject
{
    NSString *_identifier;
    NSString *_format;
    NSMutableDictionary *_relationships;
    NSMutableDictionary *_placeholdersToTokens;
    NSSet *_placeholders;
    INFGrammarCollection *_collection;
}

+ (id)sentenceWithIdentifier:(id)arg1;
@property(nonatomic) __weak INFGrammarCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSSet *placeholders; // @synthesize placeholders=_placeholders;
@property(retain, nonatomic) NSMutableDictionary *placeholdersToTokens; // @synthesize placeholdersToTokens=_placeholdersToTokens;
@property(retain, nonatomic) NSMutableDictionary *relationships; // @synthesize relationships=_relationships;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)filteredPlaceholders;
- (id)concreteToken:(id)arg1 in:(id)arg2;
- (id)unresolvedInArray:(id)arg1;
- (_Bool)containsUnresolvedTokens:(id)arg1;
@property(readonly, nonatomic) NSString *resolvedSentence;
- (void)reportCyclesIfAny;
- (void)placeholder:(id)arg1 dependsOn:(id)arg2;
- (void)setNumber:(id)arg1 forPlaceholder:(id)arg2;
- (void)setToken:(id)arg1 forPlaceholder:(id)arg2;
- (void)generatePlaceholders;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

