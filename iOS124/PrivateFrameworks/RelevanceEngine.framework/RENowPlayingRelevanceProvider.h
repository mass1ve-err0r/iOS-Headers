//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface RENowPlayingRelevanceProvider : RERelevanceProvider
{
    unsigned long long _state;
    NSString *_bundleIdentifier;
    NSString *_itemIdentifer;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) NSString *itemIdentifer; // @synthesize itemIdentifer=_itemIdentifer;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(unsigned long long)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithState:(unsigned long long)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;

@end

