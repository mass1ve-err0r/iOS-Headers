//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewDataSource.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource
{
    NSMutableArray *_mappings;
    NSMapTable *_dataSourceToMappings;
    NSMutableDictionary *_globalSectionToMappings;
    unsigned long long _sectionCount;
}

@property(nonatomic) unsigned long long sectionCount; // @synthesize sectionCount=_sectionCount;
@property(retain, nonatomic) NSMutableDictionary *globalSectionToMappings; // @synthesize globalSectionToMappings=_globalSectionToMappings;
@property(retain, nonatomic) NSMapTable *dataSourceToMappings; // @synthesize dataSourceToMappings=_dataSourceToMappings;
@property(retain, nonatomic) NSMutableArray *mappings; // @synthesize mappings=_mappings;
- (_Bool)containsDataSource:(id)arg1;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)configureCollectionView:(id)arg1;
- (_Bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)indexPathsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)allDataSources;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(_Bool)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)globalIndexPathsForLocal:(id)arg1 dataSource:(id)arg2;
- (id)globalSectionsForLocal:(id)arg1 dataSource:(id)arg2;
- (id)mappingForDataSource:(id)arg1;
- (id)mappingForGlobalSection:(long long)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (void)updateMappings;
- (void)setDataSource:(id)arg1 forTag:(id)arg2;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1 withTag:(id)arg2;
- (id)wrapperForView:(id)arg1 mapping:(id)arg2;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)dealloc;
- (id)init;

@end

