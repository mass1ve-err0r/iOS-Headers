//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKBasicEpisodeMetadata;

@interface WLKCanonicalContainerResponse : NSObject
{
    _Bool _watchListable;
    _Bool _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    unsigned long long _contentType;
    WLKBasicEpisodeMetadata *_currentEpisode;
    NSDictionary *_defaultSeason;
    NSArray *_channels;
}

@property(readonly, copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(readonly, copy, nonatomic) NSDictionary *defaultSeason; // @synthesize defaultSeason=_defaultSeason;
@property(readonly, copy, nonatomic) WLKBasicEpisodeMetadata *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(readonly, nonatomic, getter=isWatchListed) _Bool watchListed; // @synthesize watchListed=_watchListed;
@property(readonly, nonatomic, getter=isWatchListable) _Bool watchListable; // @synthesize watchListable=_watchListable;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

