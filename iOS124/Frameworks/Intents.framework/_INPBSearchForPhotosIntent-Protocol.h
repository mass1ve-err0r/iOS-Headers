//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBActivityList, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBLocation, _INPBPlaceList, _INPBString, _INPBStringList;

@protocol _INPBSearchForPhotosIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) _Bool hasPlaces;
@property(retain, nonatomic) _INPBPlaceList *places;
@property(readonly, nonatomic) _Bool hasPeopleInPhoto;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto;
@property(readonly, nonatomic) _Bool hasMemoryName;
@property(retain, nonatomic) _INPBString *memoryName;
@property(readonly, nonatomic) _Bool hasLocationCreated;
@property(retain, nonatomic) _INPBLocation *locationCreated;
@property(readonly, nonatomic) _Bool hasKeywordString;
@property(retain, nonatomic) _INPBStringList *keywordString;
@property(readonly, nonatomic) _Bool hasKeyword;
@property(retain, nonatomic) _INPBDataStringList *keyword;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
@property(readonly, nonatomic) int *includedAttributes;
@property(readonly, nonatomic) _Bool hasGeographicalFeatures;
@property(retain, nonatomic) _INPBGeographicalFeatureList *geographicalFeatures;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
@property(readonly, nonatomic) int *excludedAttributes;
@property(readonly, nonatomic) _Bool hasEvents;
@property(retain, nonatomic) _INPBEventList *events;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property(readonly, nonatomic) _Bool hasContentPerson;
@property(retain, nonatomic) _INPBContactList *contentPerson;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(retain, nonatomic) _INPBString *albumName;
@property(readonly, nonatomic) _Bool hasActivities;
@property(retain, nonatomic) _INPBActivityList *activities;
- (int)StringAsIncludedAttributes:(NSString *)arg1;
- (NSString *)includedAttributesAsString:(int)arg1;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
- (int)StringAsExcludedAttributes:(NSString *)arg1;
- (NSString *)excludedAttributesAsString:(int)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@end

