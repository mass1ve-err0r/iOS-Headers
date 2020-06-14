//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemFetcher.h>

@class NSData, NSString, NSURL, QLItem;

@interface QLDataFetcher : QLItemFetcher
{
    NSData *_data;
    NSString *_contentType;
    NSURL *_temporaryURL;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)newItemProvider;
- (void)loadDataIfNeeded;
- (id)fetchedContent;
- (id)shareableItem;
- (void)_deleteTempraryFileIfNeeded;
- (id)_createTemporaryFileIfNeeded;
- (id)itemSize;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithItem:(id)arg1 contentType:(id)arg2;

@end

