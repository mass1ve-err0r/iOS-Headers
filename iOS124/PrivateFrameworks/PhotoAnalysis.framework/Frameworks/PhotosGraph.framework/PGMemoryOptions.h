//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSSet;

@interface PGMemoryOptions : NSObject
{
    unsigned long long _reason;
    NSDate *_universalDate;
    CLLocation *_location;
    NSArray *_peopleNames;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    NSSet *_blacklistedFeatures;
    NSArray *_existingSuggestions;
    unsigned long long _precision;
    NSDate *_lastMemoryCreationUniversalDate;
    NSDate *_baseMemoryCreationUniversalDate;
    NSDictionary *_extraParameters;
    unsigned long long _randomSeed;
    double _forcedBeta;
}

+ (id)stringForReason:(unsigned long long)arg1;
@property(nonatomic) double forcedBeta; // @synthesize forcedBeta=_forcedBeta;
@property(nonatomic) unsigned long long randomSeed; // @synthesize randomSeed=_randomSeed;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(retain, nonatomic) NSDate *baseMemoryCreationUniversalDate; // @synthesize baseMemoryCreationUniversalDate=_baseMemoryCreationUniversalDate;
@property(retain, nonatomic) NSDate *lastMemoryCreationUniversalDate; // @synthesize lastMemoryCreationUniversalDate=_lastMemoryCreationUniversalDate;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(retain, nonatomic) NSArray *existingSuggestions; // @synthesize existingSuggestions=_existingSuggestions;
@property(retain, nonatomic) NSSet *blacklistedFeatures; // @synthesize blacklistedFeatures=_blacklistedFeatures;
@property(retain, nonatomic) NSArray *blacklistedMemories; // @synthesize blacklistedMemories=_blacklistedMemories;
@property(retain, nonatomic) NSArray *existingMemories; // @synthesize existingMemories=_existingMemories;
@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *universalDate; // @synthesize universalDate=_universalDate;
@property unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4;

@end

