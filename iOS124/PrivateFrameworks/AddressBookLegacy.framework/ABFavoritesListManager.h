//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ABFavoritesListManager : NSObject
{
    void *_addressBook;
    NSMutableArray *_list;
    struct __CFDictionary *_uidToEntry;
    struct {
        unsigned int dirty:1;
        unsigned int postCount:1;
        unsigned int needsReload:1;
        unsigned int unused:29;
    } _flags;
}

+ (id)sharedInstanceWithAddressBook:(void *)arg1;
+ (id)sharedInstance;
- (void)removeAllEntries;
- (_Bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (void)_delayedLookup;
- (void)recacheIdentitiesSoon;
- (void)save;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)addEntry:(id)arg1;
- (void)_listChangedExternally;
- (void)_postChangeNotification;
- (void)_entryIdentityChanged:(id)arg1;
- (void)saveImmediately;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_addEntryToMap:(id)arg1;
- (_Bool)addEntryForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (_Bool)containsEntryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)containsEntryWithIdentifier:(int)arg1 forPerson:(void *)arg2;
- (id)entryWithIdentifier:(int)arg1 forPerson:(void *)arg2;
- (id)entryWithType:(int)arg1 forPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5;
- (id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6;
- (_Bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (id)entriesForPerson:(void *)arg1;
- (id)entriesForPeople:(id)arg1;
- (_Bool)isFull;
- (id)entries;
- (void)_scheduleSave;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (void)_loadList;
- (void)_loadListWithAddressBook:(void *)arg1;
- (_Bool)shouldNotReportFavoritesError:(id)arg1;
- (void)reportFavoritesIssue:(id)arg1;

@end

