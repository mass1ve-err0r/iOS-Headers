//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;
@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;

@interface WBSSQLiteDatabase : NSObject
{
    struct sqlite3 *_handle;
    NSObject<OS_dispatch_queue> *_queue;
    id <WBSSQLiteDatabaseDelegate> _delegate;
    NSURL *_url;
}

+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1;
+ (id)writeAheadLogURLForDatabaseURL:(id)arg1;
+ (id)_errorWithErrorCode:(int)arg1;
+ (id)privateOnDiskDatabaseURL;
+ (id)inMemoryDatabaseURL;
+ (void)setUpLogCollection;
+ (void)initialize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct sqlite3 *handle; // @synthesize handle=_handle;
@property(nonatomic) __weak id <WBSSQLiteDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSError *lastError;
@property(readonly, nonatomic) long long changedRowCount;
@property(readonly, nonatomic) long long lastInsertRowID;
@property(readonly, nonatomic) NSString *lastErrorMessage;
@property(readonly, nonatomic) int lastErrorCode;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)arg1 checkpointedFrameCount:(int *)arg2;
- (id)fetchQuery:(id)arg1 stringArguments:(id)arg2;
- (id)fetchQuery:(id)arg1;
- (_Bool)executeQuery:(id)arg1 error:(id *)arg2;
- (_Bool)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id *)arg3;
- (_Bool)reportErrorWithCode:(int)arg1 statement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;
- (void)_reportSevereError:(id)arg1;
- (int)close;
- (_Bool)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id *)arg4;
- (_Bool)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id *)arg3;
- (_Bool)openWithAccessType:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 queue:(id)arg2;
- (id)checkIntegrity;
- (_Bool)enableWAL:(id *)arg1;
- (_Bool)tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;

@end

