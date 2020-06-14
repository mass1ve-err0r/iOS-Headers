//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SSDownloadManagerObserver-Protocol.h>
#import <iTunesStoreUI/SSPreorderManagerObserver-Protocol.h>

@class NSArray, NSString, SSPreorderManager, SUClientInterface, SUDownloadManager;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver>
{
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void)finalizeForWebScript;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_tearDownQueues;
- (void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2;
- (void)preorderManagerPreordersDidChange:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
@property(readonly) NSString *queueType;
@property(readonly) NSArray *downloads;
- (id)_className;
- (void)checkQueue;
- (void)dealloc;
- (id)initWithQueueType:(id)arg1 clientInterface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

