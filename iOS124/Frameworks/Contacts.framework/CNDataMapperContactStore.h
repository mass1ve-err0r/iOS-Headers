//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@class NSObject;
@protocol CNContactsLogger, CNDataMapper, CNRegulatoryLogger;

@interface CNDataMapperContactStore : CNContactStore
{
    id <CNDataMapper> _mapper;
    id <CNContactsLogger> _logger;
    id <CNRegulatoryLogger> _regulatoryLogger;
}

+ (Class)dataMapperClass;
+ (_Bool)enableContactsOutOfProcess;
@property(readonly, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, retain, nonatomic) NSObject<CNDataMapper> *mapper; // @synthesize mapper=_mapper;
- (void).cxx_destruct;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)_smartGroupsMatchingPredicate:(id)arg1;
- (id)_smartGroupsForAccountsWithIdentifiers:(id)arg1;
- (_Bool)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id *)arg2;
- (_Bool)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id *)arg3;
- (id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
- (id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id *)arg2;
- (id)_createInfo;
- (id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_allCustomProperties;
- (id)defaultContainerIdentifier;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)isValidSaveRequest:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (id)requestAccessForEntityType:(long long)arg1;
- (id)description;
- (id)initWithDataMapper:(id)arg1 environment:(id)arg2;
- (id)initWithEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)init;
- (id)iOSMapper;

@end

