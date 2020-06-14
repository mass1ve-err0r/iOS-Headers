//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXPlacesStore;
@protocol OS_dispatch_queue, PXPlacesGeotaggedItemDataSource;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver>
{
    _Bool _didInitiateLoad;
    _Bool _didCompleteLoad;
    NSArray *_fetchResults;
    PXPlacesStore *_store;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(nonatomic) _Bool didCompleteLoad; // @synthesize didCompleteLoad=_didCompleteLoad;
@property(nonatomic) _Bool didInitiateLoad; // @synthesize didInitiateLoad=_didInitiateLoad;
@property(retain, nonatomic) PXPlacesStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSArray *fetchResults; // @synthesize fetchResults=_fetchResults;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg1;
@property(readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (void)_addItems:(id)arg1 intoStore:(id)arg2;
- (void)_handleAssetsImport;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFetchResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

