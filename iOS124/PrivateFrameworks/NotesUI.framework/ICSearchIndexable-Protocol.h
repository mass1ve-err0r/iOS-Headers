//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class CSSearchableItemAttributeSet, NSArray, NSData, NSDate, NSManagedObjectContext, NSManagedObjectID, NSString, NSURL;

@protocol ICSearchIndexable <NSObject>
- (CSSearchableItemAttributeSet *)searchableItemAttributeSet;
- (NSString *)searchDomainIdentifier;
- (NSString *)searchableItemIdentifier;
- (NSArray *)authorsExcludingCurrentUser;
- (_Bool)isHiddenFromSearch;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (NSDate *)modificationDate;
- (NSDate *)creationDate;
- (NSString *)identifier;
- (long long)visibilityTestingType;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;

@optional
- (NSData *)dataForTypeIdentifier:(NSString *)arg1;
- (NSURL *)fileURLForTypeIdentifier:(NSString *)arg1;
- (_Bool)ignoreInSearchIndexer;
@end

