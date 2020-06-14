//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXSectionedLayoutEngineDataSourceSnapshot-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot>
{
    unsigned long long _identifier;
}

+ (id)emptyDataSource;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (long long)_numberOfAssetsWithMaximum:(long long)arg1;
- (id)inputForItem:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2;
@property(readonly, nonatomic) struct PXSimpleIndexPath lastItemIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath firstItemIndexPath;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool containsMultipleItems;
@property(readonly, nonatomic) _Bool containsAnyItems;
- (struct PXSimpleIndexPath)convertIndexPath:(struct PXSimpleIndexPath)arg1 fromSectionedDataSource:(id)arg2;
- (id)objectReferenceForObjectReference:(id)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *sectionedDataSourceLog;
- (Class)objectReferenceClassForSubItem;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

