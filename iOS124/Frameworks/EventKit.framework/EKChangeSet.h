//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKChangeSet : NSObject <NSCopying>
{
    _Bool _isNew;
    _Bool _isModified;
    _Bool _isSaved;
    _Bool _isDeleted;
    _Bool _isUndeleted;
    NSMutableDictionary *_singleValueChanges;
    NSMutableDictionary *_multiValueAdditions;
    NSMutableDictionary *_multiValueRemovals;
}

@property(retain, nonatomic) NSMutableDictionary *multiValueRemovals; // @synthesize multiValueRemovals=_multiValueRemovals;
@property(retain, nonatomic) NSMutableDictionary *multiValueAdditions; // @synthesize multiValueAdditions=_multiValueAdditions;
@property(retain, nonatomic) NSMutableDictionary *singleValueChanges; // @synthesize singleValueChanges=_singleValueChanges;
@property(nonatomic) _Bool isUndeleted; // @synthesize isUndeleted=_isUndeleted;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isSaved; // @synthesize isSaved=_isSaved;
@property(nonatomic) _Bool isModified; // @synthesize isModified=_isModified;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (void)forceChangeValue:(id)arg1 forKey:(id)arg2;
- (id)_semanticIdentifierToObjectMapForObjects:(id)arg1;
- (void)_cleanupEmptySetsForMultiValueKey:(id)arg1;
- (void)removeFromChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (void)addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (void)addChanges:(id)arg1;
- (id)valuesForMultiValueKey:(id)arg1 basedOn:(id)arg2;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)arg1;
- (_Bool)hasUnsavedMultiValueRemovalForKey:(id)arg1;
- (id)unsavedMultiValueAddedObjectsForKey:(id)arg1;
- (_Bool)hasUnsavedMultiValueAdditionForKey:(id)arg1;
- (_Bool)_isNewAndUnsaved;
- (_Bool)hasUnsavedChangeForKey:(id)arg1;
- (_Bool)hasUnsavedChanges;
- (_Bool)hasChanges;
- (id)changedMultiValueKeys;
- (id)changedSingleValueKeys;
- (id)changedKeys;
- (void)markChangesAsSaved;
- (void)rollbackChanges;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSingleValueChanges:(id)arg1 multiValueAdditions:(id)arg2 multiValueRemovals:(id)arg3;
- (id)_initWithChangeSet:(id)arg1 filter:(CDUnknownBlockType)arg2;
- (id)initWithChangeSet:(id)arg1 changesToKeep:(id)arg2;
- (id)initWithChangeSet:(id)arg1 changesToSkip:(id)arg2;
- (id)initWithChangeSet:(id)arg1;
- (id)init;

@end

