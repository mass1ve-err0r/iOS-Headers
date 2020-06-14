//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, PSSpecifierGroupIndex, PSSpecifierUpdateContext;

@interface PSSpecifierUpdates : NSObject <NSCopying>
{
    NSMutableArray *_currentSpecifiers;
    NSMutableArray *_updates;
    PSSpecifierGroupIndex *_groupIndex;
    _Bool _wantsDebugCallbacks;
    NSArray *_originalSpecifiers;
    PSSpecifierUpdateContext *_context;
}

+ (id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(CDUnknownBlockType)arg3;
+ (void)_assertSpecifierIDsAreUnique:(id)arg1;
+ (_Bool)_wantsDebugCallbacks;
+ (Class)_groupIndexClass;
+ (id)updatesWithSpecifiers:(id)arg1;
@property(copy, nonatomic) PSSpecifierUpdateContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSArray *originalSpecifiers; // @synthesize originalSpecifiers=_originalSpecifiers;
- (void).cxx_destruct;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)arg1;
- (id)stepByStepDescription;
- (id)description;
- (_Bool)swapSpecifier:(id)arg1 withSpecifier:(id)arg2;
- (_Bool)swapSpecifierAtIndex:(unsigned long long)arg1 withSpecifierAtIndex:(unsigned long long)arg2;
- (_Bool)moveSpecifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)reloadSpecifiersInRange:(struct _NSRange)arg1;
- (_Bool)reloadSpecifierAtIndexPath:(id)arg1;
- (_Bool)reloadSpecifierAtIndex:(unsigned long long)arg1;
- (_Bool)reloadSpecifiersWithIDs:(id)arg1;
- (_Bool)reloadSpecifierWithID:(id)arg1;
- (_Bool)reloadSpecifiersInGroupWithID:(id)arg1;
- (_Bool)reloadSpecifiersInGroup:(id)arg1;
- (_Bool)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (_Bool)reloadSpecifiers:(id)arg1;
- (_Bool)reloadSpecifier:(id)arg1;
- (_Bool)removeSpecifiersInGroupWithID:(id)arg1;
- (_Bool)removeSpecifiersInGroup:(id)arg1;
- (_Bool)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (_Bool)removeSpecifierAtIndexPath:(id)arg1;
- (_Bool)removeSpecifiersInRange:(struct _NSRange)arg1;
- (_Bool)_removeOneSpecifierOnlyAtIndex:(unsigned long long)arg1;
- (_Bool)removeSpecifierAtIndex:(unsigned long long)arg1;
- (_Bool)removeSpecifiersWithIDs:(id)arg1;
- (_Bool)removeSpecifierWithID:(id)arg1;
- (_Bool)removeSpecifiers:(id)arg1;
- (_Bool)removeSpecifier:(id)arg1;
- (_Bool)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2;
- (_Bool)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2;
- (_Bool)appendSpecifiers:(id)arg1 toGroup:(id)arg2;
- (_Bool)appendSpecifier:(id)arg1 toGroup:(id)arg2;
- (_Bool)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (_Bool)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (_Bool)appendSpecifiers:(id)arg1;
- (_Bool)appendSpecifier:(id)arg1;
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2;
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (_Bool)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2;
- (_Bool)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (_Bool)insertSpecifier:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)insertSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_addAndApplyOperation:(id)arg1;
- (void)_didApplyOperation:(id)arg1;
- (void)_operationFailed:(id)arg1 reason:(id)arg2;
- (_Bool)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)specifierForID:(id)arg1;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (unsigned long long)indexOfSpecifier:(id)arg1;
- (void)enumerateUpdatesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *updates;
@property(readonly, copy, nonatomic) NSArray *currentSpecifiers;
@property(readonly, copy, nonatomic) PSSpecifierGroupIndex *groupIndex;
- (id)_groupIndexCreatingIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3;
- (id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2;
- (id)initWithSpecifiers:(id)arg1;
- (id)init;
- (id)_init;

@end

