//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOfflineCacheOperation.h>

#import <Message/MFDADeferredFolderChangeOperation-Protocol.h>

@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation>
{
    NSString *_folderID;
}

+ (_Bool)supportsSecureCoding;
- (id)description;
- (id)folderChangeResult;
- (void)applyToFolderMap:(id)arg1;
- (_Bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1;

@end

