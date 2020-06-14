//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPFileDataStorage.h>

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isReadable) _Bool readable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)storageForDataCopyFromOtherContext;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

