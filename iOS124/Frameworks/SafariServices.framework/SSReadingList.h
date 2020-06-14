//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmarksXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSReadingList : NSObject
{
    WebBookmarksXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    _Bool _batchScheduled;
}

+ (id)defaultReadingList;
+ (_Bool)supportsURL:(id)arg1;
- (void).cxx_destruct;
- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)_sendBatchedReadingListItems;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;

@end

