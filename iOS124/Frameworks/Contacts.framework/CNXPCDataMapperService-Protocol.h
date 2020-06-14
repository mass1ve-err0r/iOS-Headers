//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class CNChangeHistoryAnchor, CNChangeHistoryFetchRequest, CNContact, CNContactFetchRequest, CNContainer, CNGeminiHandle, CNSaveRequest, NSArray, NSData, NSDictionary, NSPredicate, NSString;
@protocol ProgressiveResultsHandlerProtocol;

@protocol CNXPCDataMapperService <NSObject>
- (void)bestSenderIdentityForHandle:(CNGeminiHandle *)arg1 withReply:(void (^)(TUSenderIdentity *, NSError *))arg2;
- (void)geminiResultForContact:(CNContact *)arg1 substituteDefaultForDangling:(_Bool)arg2 withReply:(void (^)(CNGeminiResult *, NSError *))arg3;
- (void)verifyIndexWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)reindexSearchableItemsWithIdentifiers:(NSArray *)arg1 withReply:(void (^)(void))arg2;
- (void)writeFavoritesPropertyListData:(NSData *)arg1 toPath:(NSString *)arg2 withReply:(void (^)(NSNumber *, NSError *))arg3;
- (void)favoritesEntryDictionariesAtPath:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)clearChangeHistoryForClientIdentifier:(NSString *)arg1 toChangeAnchor:(CNChangeHistoryAnchor *)arg2 withReply:(void (^)(NSNumber *, NSError *))arg3;
- (void)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 withReply:(void (^)(CNChangeHistoryResult *, NSError *))arg2;
- (void)unregisterChangeHistoryClientIdentifier:(NSString *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)registerChangeHistoryClientIdentifier:(NSString *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)userActivityForContact:(CNContact *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2 withReply:(void (^)(CNContact *))arg3;
- (void)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 withReply:(void (^)(NSNumber *, NSError *))arg4;
- (void)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 withReply:(void (^)(NSNumber *, NSError *))arg3;
- (void)setMeContact:(CNContact *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)defaultContainerIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)subgroupsOfGroupWithIdentifier:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)groupsMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)accountsMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)policyForContainerWithIdentifier:(NSString *)arg1 withReply:(void (^)(CNPolicy *, NSError *))arg2;
- (void)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)containersMatchingPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)executeSaveRequest:(CNSaveRequest *)arg1 withReply:(void (^)(_Bool, CNSaveResponse *, NSError *))arg2;
- (void)meContactIdentifiersWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)progressiveContactsForFetchRequest:(CNContactFetchRequest *)arg1 progressHandler:(id <ProgressiveResultsHandlerProtocol>)arg2 reply:(void (^)(id <CNCancelable>))arg3;
- (void)encodedContactsAndCursorForFetchRequest:(CNContactFetchRequest *)arg1 withReply:(void (^)(NSData *, id <CNEncodedFetchCursor>, NSError *))arg2;
- (void)contactsForFetchRequest:(CNContactFetchRequest *)arg1 withMatchInfoReply:(void (^)(NSArray *, NSDictionary *, NSError *))arg2;
- (void)contactCountForFetchRequest:(CNContactFetchRequest *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (void)unifiedContactCountWithReply:(void (^)(NSNumber *, NSError *))arg1;
- (void)identifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)configureServiceWithOptions:(NSDictionary *)arg1;
@end

