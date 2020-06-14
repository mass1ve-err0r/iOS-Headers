//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>

#import <MediaPlayer/MPSectionedIdentifierListEnumerationTrackingEntry-Protocol.h>

@class MPSectionedIdentifierListItemEntry, NSMutableDictionary, NSString;
@protocol MPSectionedIdentifierListDataSource;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry>
{
    NSMutableDictionary *_identifiersItemEntryMap;
    MPSectionedIdentifierListItemEntry *_lastItemEntry;
    id <MPSectionedIdentifierListDataSource> _dataSource;
}

+ (id)headEntryWithSectionIdentifier:(id)arg1;
@property(retain, nonatomic) id <MPSectionedIdentifierListDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MPSectionedIdentifierListItemEntry *lastItemEntry; // @synthesize lastItemEntry=_lastItemEntry;
@property(readonly, nonatomic) NSMutableDictionary *identifiersItemEntryMap; // @synthesize identifiersItemEntryMap=_identifiersItemEntryMap;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long entryType;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long branchDepth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sectionIdentifier;
@property(readonly) Class superclass;

@end

