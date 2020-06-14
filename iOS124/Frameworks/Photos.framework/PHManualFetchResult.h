//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString;

@interface PHManualFetchResult : PHFetchResult
{
    NSOrderedSet *_objectIDs;
    NSArray *_objects;
    NSString *_identifier;
}

@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchUpdatedObjects;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjectIDs;
- (id)containerIdentifier;
- (long long)collectionFetchType;
- (id)fetchedObjects;
- (id)fetchRequest;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (id)changeHandlingKey;
- (_Bool)isFullyBackedByObjectIDs;
- (id)copyWithOptions:(id)arg1;
- (void)getMediaTypeCounts;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSOrderedSet *objectIDs;
- (id)initWithOids:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(_Bool)arg5 photosCount:(unsigned long long)arg6 videosCount:(unsigned long long)arg7 audiosCount:(unsigned long long)arg8;
- (id)initWithOids:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(_Bool)arg5;
- (id)initWithObjects:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3 identifier:(id)arg4 registerIfNeeded:(_Bool)arg5;
- (id)initWithObjects:(id)arg1 fetchType:(id)arg2 fetchPropertySets:(id)arg3;

@end

