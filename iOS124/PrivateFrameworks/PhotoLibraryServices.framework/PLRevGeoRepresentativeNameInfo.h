//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSNumber, NSString;

@interface PLRevGeoRepresentativeNameInfo : NSObject
{
    _Bool _allEntriesAtHome;
    _Bool _allEntriesMatchHomeForOrderType;
    _Bool _addCountyIfNeeded;
    NSString *_name;
    unsigned long long _type;
    unsigned long long _matchingCount;
    NSMutableOrderedSet *_geoPlaces;
    NSMutableOrderedSet *_remainingGeoPlaces;
}

@property(nonatomic) _Bool addCountyIfNeeded; // @synthesize addCountyIfNeeded=_addCountyIfNeeded;
@property(readonly, nonatomic) NSMutableOrderedSet *remainingGeoPlaces; // @synthesize remainingGeoPlaces=_remainingGeoPlaces;
@property(readonly, nonatomic) NSMutableOrderedSet *geoPlaces; // @synthesize geoPlaces=_geoPlaces;
@property(nonatomic) _Bool allEntriesMatchHomeForOrderType; // @synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType;
@property(nonatomic) _Bool allEntriesAtHome; // @synthesize allEntriesAtHome=_allEntriesAtHome;
@property(nonatomic) unsigned long long matchingCount; // @synthesize matchingCount=_matchingCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;
- (_Bool)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2;
- (_Bool)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1;
- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4;
- (id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2;
@property(readonly, copy, nonatomic) NSNumber *minimumArea;
- (void)removeGeoPlacesFromRemaining:(id)arg1;
- (void)prepareRemainingGeoPlaces;
- (void)clearGeoPlaces;
- (void)addGeoPlaces:(id)arg1;
- (void)addGeoPlace:(id)arg1;
- (void)updateWithAddedNameInfo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;

@end

