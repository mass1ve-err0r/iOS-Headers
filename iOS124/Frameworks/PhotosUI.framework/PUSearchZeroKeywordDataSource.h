//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSString, PHFetchResult;
@protocol OS_dispatch_queue, PUSearchZeroKeywordChangeDelegate;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordDataSource : NSObject <PHPhotoLibraryChangeObserver>
{
    _Bool _fetchInProgress;
    id <PUSearchZeroKeywordChangeDelegate> _delegate;
    PHFetchResult *_peopleFetchResult;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSArray *_sections;
}

+ (id)zeroKeywordLog;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) PHFetchResult *peopleFetchResult; // @synthesize peopleFetchResult=_peopleFetchResult;
@property(nonatomic) _Bool fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property(nonatomic) __weak id <PUSearchZeroKeywordChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)debugDictionary;
- (id)tapToRadarAttachments;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)_viewModelForKeywordDictionary:(id)arg1 ofType:(long long)arg2 peopleByKeyword:(id)arg3;
- (void)_fetchAssetsForAssetViewModels:(id)arg1;
- (void)_fetchKeyAssetsForViewModels:(id)arg1;
- (id)_personsForLocalIdentifiers:(id)arg1;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (id)predicateForPersonFetching;
- (_Bool)hasZeroKeywords;
- (void)fetchItems;
- (long long)indexForPlaceKey:(id)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (long long)sectionForSectionType:(long long)arg1;
- (long long)sectionTypeForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)_registerChangeObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

