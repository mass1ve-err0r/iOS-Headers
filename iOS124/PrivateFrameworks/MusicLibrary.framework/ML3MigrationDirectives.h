//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3MigrationDirectives : NSObject
{
    _Bool _needsToRecreateIndexes;
    _Bool _needsToRecreateTriggers;
    _Bool _needsToRemoveLocationsForItemsMissingAssets;
    _Bool _needsToReloadStoreBookmarkMetadataIdentifiers;
    _Bool _needsToReloadContainerMediaTypes;
    _Bool _needsToReloadCollectionRepresentativeItems;
    _Bool _needsAnalyze;
    _Bool _needsToAutogenerateArtworkVariants;
    _Bool _needsToUpdateSortMap;
    _Bool _forceUpdateOriginals;
    int _originalUserVersion;
    int _currentUserVersion;
}

@property(nonatomic) _Bool forceUpdateOriginals; // @synthesize forceUpdateOriginals=_forceUpdateOriginals;
@property(nonatomic) _Bool needsToUpdateSortMap; // @synthesize needsToUpdateSortMap=_needsToUpdateSortMap;
@property(nonatomic) _Bool needsToAutogenerateArtworkVariants; // @synthesize needsToAutogenerateArtworkVariants=_needsToAutogenerateArtworkVariants;
@property(nonatomic) _Bool needsAnalyze; // @synthesize needsAnalyze=_needsAnalyze;
@property(nonatomic) _Bool needsToReloadCollectionRepresentativeItems; // @synthesize needsToReloadCollectionRepresentativeItems=_needsToReloadCollectionRepresentativeItems;
@property(nonatomic) _Bool needsToReloadContainerMediaTypes; // @synthesize needsToReloadContainerMediaTypes=_needsToReloadContainerMediaTypes;
@property(nonatomic) _Bool needsToReloadStoreBookmarkMetadataIdentifiers; // @synthesize needsToReloadStoreBookmarkMetadataIdentifiers=_needsToReloadStoreBookmarkMetadataIdentifiers;
@property(nonatomic) _Bool needsToRemoveLocationsForItemsMissingAssets; // @synthesize needsToRemoveLocationsForItemsMissingAssets=_needsToRemoveLocationsForItemsMissingAssets;
@property(nonatomic) _Bool needsToRecreateTriggers; // @synthesize needsToRecreateTriggers=_needsToRecreateTriggers;
@property(nonatomic) _Bool needsToRecreateIndexes; // @synthesize needsToRecreateIndexes=_needsToRecreateIndexes;
@property(nonatomic) int currentUserVersion; // @synthesize currentUserVersion=_currentUserVersion;
@property(readonly, nonatomic) int originalUserVersion; // @synthesize originalUserVersion=_originalUserVersion;
- (id)initWithOriginalUserVersion:(int)arg1;

@end

