//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPModelLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryEntityTranslator, MPModelLibraryDownloadQueueRequest, NSString;

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPModelLazySectionedCollectionDataSource>
{
    MPModelLibraryDownloadQueueRequest *_request;
    MPMediaLibraryEntityTranslator *_entityTranslator;
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    shared_ptr_274c5e8b _entityQueryResult;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

