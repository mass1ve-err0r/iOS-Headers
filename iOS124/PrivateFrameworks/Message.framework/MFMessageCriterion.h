//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/NSCopying-Protocol.h>

@class NSArray, NSIndexSet, NSString;

@interface MFMessageCriterion : NSObject <NSCopying>
{
    NSString *_criterionIdentifier;
    int _qualifier;
    long long _type;
    NSString *_name;
    NSString *_uniqueId;
    NSString *_expression;
    NSArray *_criteria;
    int _dateUnitType;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _dateIsRelative:1;
    unsigned int _includeRelatedMessages:1;
    NSArray *_requiredHeaders;
    _Bool _preferFullTextSearch;
    _Bool _useFlaggedForUnreadCount;
    _Bool _expressionIsSanitized;
    _Bool _includeRemoteBodyContent;
    NSIndexSet *_libraryIdentifiers;
}

+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)criterionForDateReceivedOlderThanDate:(id)arg1;
+ (id)todayMessageCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)ccMeCriterion;
+ (id)toMeCriterion;
+ (id)includesMeCriterion;
+ (id)readMessageCriterion;
+ (id)unreadMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)threadMuteMessageCriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (id)messageIsServerSearchResultCriterion:(_Bool)arg1;
+ (id)criterionForLibraryID:(id)arg1;
+ (id)criterionForConversationID:(long long)arg1;
+ (id)criterionForNotDeletedConversationID:(long long)arg1;
+ (id)messageIsJournaledCriterion:(_Bool)arg1;
+ (id)messageIsDeletedCriterion:(_Bool)arg1;
+ (id)criterionExcludingMailboxes:(id)arg1;
+ (id)criterionForAccount:(id)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)criterionForMailbox:(id)arg1;
+ (id)expressionForDate:(id)arg1;
+ (id)stringForCriterionType:(long long)arg1;
+ (long long)criterionTypeForString:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(_Bool)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool includeRemoteBodyContent; // @synthesize includeRemoteBodyContent=_includeRemoteBodyContent;
@property(nonatomic) _Bool expressionIsSanitized; // @synthesize expressionIsSanitized=_expressionIsSanitized;
@property(nonatomic) _Bool includeRelatedMessages; // @synthesize includeRelatedMessages=_includeRelatedMessages;
@property(nonatomic) _Bool useFlaggedForUnreadCount; // @synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount;
@property(nonatomic) _Bool preferFullTextSearch; // @synthesize preferFullTextSearch=_preferFullTextSearch;
@property(retain, nonatomic) NSIndexSet *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
- (_Bool)isVIPCriterion;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (id)dateFromExpression;
- (void)setDateIsRelative:(_Bool)arg1;
- (_Bool)dateIsRelative;
- (void)setDateUnits:(int)arg1;
- (int)dateUnits;
- (void)setAllCriteriaMustBeSatisfied:(_Bool)arg1;
- (_Bool)allCriteriaMustBeSatisfied;
@property(copy, nonatomic) NSArray *criteria;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (int)messageRuleQualifierForString:(id)arg1;
- (_Bool)doesMessageSatisfyCriterion:(id)arg1;
- (_Bool)_evaluateMailboxCriterion:(id)arg1;
- (_Bool)_evaluateConversationIDCriterion:(id)arg1;
- (_Bool)_evaluateDateCriterion:(id)arg1;
- (_Bool)_evaluateAddressHistoryCriterion:(id)arg1;
- (_Bool)_evaluateAccountCriterion:(id)arg1;
- (_Bool)_evaluateAttachmentCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsLowCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsHighCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (_Bool)_evaluateIsEncryptedCriterion:(id)arg1;
- (_Bool)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (_Bool)_evaluateFullNameCriterion:(id)arg1;
- (_Bool)_evaluateAddressBookCriterion:(id)arg1;
- (_Bool)_evaluatePartOfStructure:(id)arg1;
- (_Bool)_evaluateSenderHeaderCriterion:(id)arg1;
- (_Bool)_evaluateHeaderCriterion:(id)arg1;
- (_Bool)_evaluateFlagCriterion:(id)arg1;
- (_Bool)_evaluateCompoundCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
@property(copy, nonatomic) NSString *expression;
- (id)_qualifierString;
@property(retain, nonatomic) NSString *criterionIdentifier;
@property(nonatomic) long long criterionType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)init;
- (id)extractedUnreadCriterion;
- (id)extractedDateCriterion;
- (id)criterionByApplyingTransform:(CDUnknownBlockType)arg1;
- (_Bool)includesCriterionSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 restrictive:(_Bool)arg2;
- (id)criteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1;
- (void)_addCriteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 toCollector:(id)arg2;
- (unsigned int)bestBaseTable;
- (id)SQLExpressionWithTables:(unsigned int *)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(_Bool)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(_Bool)arg2 collapsedIndexes:(id *)arg3;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (id)criterionForSQL;
- (id)_criterionForSQL;
- (id)_SQLExpressionForMailboxCriterion;
- (_Bool)hasLibraryIDCriterion;
- (id)SQLExpressionWithContext:(CDStruct_f28f5ac0 *)arg1 depth:(unsigned int)arg2;
- (id)fixOnce;
- (id)_spotlightQueryString;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2;
- (id)_wordQueryWithAttributes:(id)arg1 matchingValue:(id)arg2;
- (id)_comparisonOperationMatchingValue:(id)arg1;
- (id)_attributesForHeaderCriterion;
- (id)spotlightQueryString;
- (_Bool)isFullTextSearchableCriterion;
- (_Bool)hasNonFullTextSearchableCriterion;
- (id)unreadCountCriterion;
- (id)daSearchPredicate;
- (id)daBasicSearchString;

@end
