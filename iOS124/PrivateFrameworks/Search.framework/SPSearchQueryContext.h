//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFSearchSuggestion;

@interface SPSearchQueryContext : NSObject
{
    _Bool _allowInternet;
    _Bool _isPasscodeLocked;
    _Bool _forceQueryEvenIfSame;
    _Bool _promoteLocalResults;
    _Bool _promoteParsecResults;
    _Bool _noTokenize;
    NSString *_searchString;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_markedTextArray;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    NSArray *_searchDomains;
    NSArray *_disabledDomains;
    NSArray *_disabledBundles;
    NSArray *_disabledApps;
    unsigned long long _whyQuery;
    unsigned long long _whyClear;
    unsigned long long _queryIdent;
    NSArray *_searchEntities;
    double _currentTime;
}

+ (id)queryContextWithSearchString:(id)arg1;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool noTokenize; // @synthesize noTokenize=_noTokenize;
@property(nonatomic) _Bool promoteParsecResults; // @synthesize promoteParsecResults=_promoteParsecResults;
@property(nonatomic) _Bool promoteLocalResults; // @synthesize promoteLocalResults=_promoteLocalResults;
@property(retain, nonatomic) NSArray *searchEntities; // @synthesize searchEntities=_searchEntities;
@property(nonatomic) unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property(nonatomic) unsigned long long whyClear; // @synthesize whyClear=_whyClear;
@property(nonatomic) unsigned long long whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) _Bool forceQueryEvenIfSame; // @synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame;
@property(retain, nonatomic) NSArray *disabledApps; // @synthesize disabledApps=_disabledApps;
@property(retain, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property(retain, nonatomic) NSArray *disabledDomains; // @synthesize disabledDomains=_disabledDomains;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(retain, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(retain, nonatomic) SFSearchSuggestion *engagedSuggestion; // @synthesize engagedSuggestion=_engagedSuggestion;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) _Bool isPasscodeLocked; // @synthesize isPasscodeLocked=_isPasscodeLocked;
@property(nonatomic) _Bool allowInternet; // @synthesize allowInternet=_allowInternet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayedText;
@property(readonly, nonatomic) _Bool hasMarkedText;
- (id)initWithSearchString:(id)arg1;
- (id)init;

@end

