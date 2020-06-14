//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface PGRelated : NSObject
{
    _Bool _generateTitleBasedOnKeyAsset;
    unsigned int _aggregatedVersions;
    NSString *_debugDescription;
    NSArray *_moments;
    NSDictionary *_keywords;
    double _score;
    double _matchingScore;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    unsigned long long _memoryTripTitleType;
    long long _dateMatchingType;
}

@property(nonatomic, getter=isGeneratingTitleBasedOnKeyAsset) _Bool generateTitleBasedOnKeyAsset; // @synthesize generateTitleBasedOnKeyAsset=_generateTitleBasedOnKeyAsset;
@property(nonatomic) long long dateMatchingType; // @synthesize dateMatchingType=_dateMatchingType;
@property(nonatomic) unsigned long long memoryTripTitleType; // @synthesize memoryTripTitleType=_memoryTripTitleType;
@property(readonly, nonatomic) unsigned int aggregatedVersions; // @synthesize aggregatedVersions=_aggregatedVersions;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(nonatomic) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSArray *moments; // @synthesize moments=_moments;
@property(retain, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (void).cxx_destruct;
- (void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)_addKeywordsFromKeywords:(id)arg1;
@property(nonatomic) unsigned short relatedAlgorithmsVersion;
@property(nonatomic) unsigned short graphSchemaVersion;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 referenceDateInterval:(id)arg4;
- (id)initWithMoment:(id)arg1 needsDebugInfo:(_Bool)arg2;
- (id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripMomentNodes:(id)arg4 needsDebugInfo:(_Bool)arg5;
- (id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(_Bool)arg3;
- (id)_initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 needsDebugInfo:(_Bool)arg3;

@end

