//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailMessageLibrary, MFOfflineCacheReplayContext, NSMutableArray, NSString;

@interface MFOfflineCache : NSObject
{
    MFMailMessageLibrary *_library;
    long long _accountLibraryID;
    NSMutableArray *_deferredOperations;
    MFOfflineCacheReplayContext *_replayContext;
    unsigned int _lastTemporaryMessageID;
    _Bool _isReplaying;
}

- (void)_applyReplayContextTransformation:(id)arg1;
- (void)replaceTransferFailureSnapshotTemporaryID:(id)arg1 withTemporaryID:(id)arg2;
- (id)transferFailureSnapshotForTemporaryID:(id)arg1;
- (void)setTransferFailureSnapshot:(id)arg1 forTemporaryID:(id)arg2;
- (id)translatedIDForTemporaryID:(id)arg1;
- (void)setTranslatedID:(id)arg1 forTemporaryID:(id)arg2;
- (id)selectedMailboxID;
- (void)setSelectedMailboxID:(id)arg1;
- (void)deleteOfflineCacheData;
- (_Bool)replayOperationsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasDeferredOperations;
- (void)deferOperation:(id)arg1;
@property(readonly, nonatomic) NSString *nextTemporaryMessageID; // @dynamic nextTemporaryMessageID;
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 account:(id)arg2;
- (id)init;

@end

