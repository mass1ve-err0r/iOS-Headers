//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, TIKeyboardCandidate, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _excludedExtensionCandidates;
    NSArray *_candidates;
    unsigned long long _initialSelectedIndex;
    TIKeyboardCandidate *_defaultCandidate;
    NSArray *_sortMethods;
    NSDictionary *_sortMethodGroups;
    NSDictionary *_indexTitles;
    NSDictionary *_showExtensionCandidates;
    NSArray *_initiallyHiddenCandidates;
    unsigned long long _generatedCandidateCount;
    unsigned long long _batchCandidateLocation;
    unsigned long long _selectedHiddenCandidateIndex;
    NSArray *_proactiveTriggers;
    TIKeyboardIntermediateText *_uncommittedText;
    TIKeyboardCandidate *_acceptedCandidate;
}

+ (id)dummySet;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
+ (id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9;
+ (id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2;
+ (id)setWithCandidates:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property(retain, nonatomic) TIKeyboardIntermediateText *uncommittedText; // @synthesize uncommittedText=_uncommittedText;
@property(nonatomic) _Bool excludedExtensionCandidates; // @synthesize excludedExtensionCandidates=_excludedExtensionCandidates;
@property(readonly, nonatomic) NSArray *proactiveTriggers; // @synthesize proactiveTriggers=_proactiveTriggers;
@property(nonatomic) unsigned long long selectedHiddenCandidateIndex; // @synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex;
@property(nonatomic) unsigned long long batchCandidateLocation; // @synthesize batchCandidateLocation=_batchCandidateLocation;
@property(nonatomic) unsigned long long generatedCandidateCount; // @synthesize generatedCandidateCount=_generatedCandidateCount;
@property(retain, nonatomic) NSArray *initiallyHiddenCandidates; // @synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates;
@property(retain, nonatomic) NSDictionary *showExtensionCandidates; // @synthesize showExtensionCandidates=_showExtensionCandidates;
@property(retain, nonatomic) NSDictionary *indexTitles; // @synthesize indexTitles=_indexTitles;
@property(retain, nonatomic) NSDictionary *sortMethodGroups; // @synthesize sortMethodGroups=_sortMethodGroups;
@property(retain, nonatomic) NSArray *sortMethods; // @synthesize sortMethods=_sortMethods;
@property(copy, nonatomic) TIKeyboardCandidate *defaultCandidate; // @synthesize defaultCandidate=_defaultCandidate;
@property(nonatomic) unsigned long long initialSelectedIndex; // @synthesize initialSelectedIndex=_initialSelectedIndex;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
- (void).cxx_destruct;
- (_Bool)isSubsetOf:(id)arg1;
- (id)setByAppendingSet:(id)arg1;
- (id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)positionInCandidateList:(id)arg1;
@property(readonly, nonatomic) _Bool isDummySet;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property(readonly, nonatomic) _Bool hasOnlyProactiveCandidates;
@property(readonly, nonatomic) _Bool hasCandidates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

