//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

#import <MapsSuggestions/MapsSuggestionsFilter-Protocol.h>

@class NSString;

@interface MapsSuggestionsDeletedFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>
{
}

+ (_Bool)isEnabled;
- (_Bool)shouldKeepEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

