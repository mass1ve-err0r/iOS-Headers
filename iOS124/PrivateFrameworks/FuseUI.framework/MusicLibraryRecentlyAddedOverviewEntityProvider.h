//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicMediaEntityProvider.h>

@class MusicLibraryRecentlyAddedOverviewEntityValueProvider;

@interface MusicLibraryRecentlyAddedOverviewEntityProvider : MusicMediaEntityProvider
{
    _Bool _hasValidOverviewEntityValueProvider;
    MusicLibraryRecentlyAddedOverviewEntityValueProvider *_overviewEntityValueProvider;
    unsigned long long _entityLimit;
}

@property(nonatomic) unsigned long long entityLimit; // @synthesize entityLimit=_entityLimit;
- (void).cxx_destruct;
- (id)_overviewEntityValueProvider;
- (void)_handleMediaQueryDataSourceDidInvalidate;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)init;

@end

