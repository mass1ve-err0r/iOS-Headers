//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKAutocompleteAnalyticsState : NSObject
{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
}

@property(readonly, nonatomic) NSArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end

