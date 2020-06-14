//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDCachedPeopleSuggestion : NSObject
{
    NSDate *_date;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
}

@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain) _CDPeopleSuggesterSettings *settings; // @synthesize settings=_settings;
@property(retain) _CDPeopleSuggesterContext *context; // @synthesize context=_context;
@property(retain) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (_Bool)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3;
- (_Bool)isValidForSettings:(id)arg1;
- (_Bool)isValidForContext:(id)arg1;

@end

