//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MPSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_sectionedItems;
    NSArray *_sections;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_initializeAsEmptySectionedCollection;
- (id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long totalItemCount;
@property(readonly, nonatomic) id lastSection;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (long long)globalIndexForIndexPath:(id)arg1;
@property(readonly, nonatomic) id firstSection;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) id lastItem;
@property(readonly, nonatomic) id firstItem;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSectionIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemIdentifiersUsingBlock:(CDUnknownBlockType)arg1;

@end

