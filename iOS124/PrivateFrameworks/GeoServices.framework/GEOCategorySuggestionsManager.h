//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOCategorySuggestionsManagerServerProxy;

@interface GEOCategorySuggestionsManager : NSObject
{
    id <GEOCategorySuggestionsManagerServerProxy> _serverProxy;
}

+ (id)sharedManager;
+ (void)setUseLocalProxy:(_Bool)arg1;
- (void).cxx_destruct;
- (void)updateCachedSpotlightCategorySuggestions:(CDUnknownBlockType)arg1;
- (void)fetchSpotlightCategorySuggestions:(CDUnknownBlockType)arg1;
- (id)_categorySuggestionsForSuggestionsResult:(id)arg1 dayOfWeek:(long long)arg2 hourOfDay:(long long)arg3;
- (id)_spotlightCategorySuggestionsForResponse:(id)arg1;
- (id)init;

@end

