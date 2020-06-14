//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray, NSString;
@protocol _PASSqliteErrorHandlerProtocol;

@interface _PASSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    _Bool _transactionRolledback;
    struct atomic_flag _isClosed;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
    NSString *_filename;
    NSCache *_queryCache;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_statementsToFinalizeAsync;
    _Bool _currentExclusivity;
    _Bool _isInMemory;
}

+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (void)runDebugCommand:(const char *)arg1 onDbWithHandle:(id)arg2;
+ (_Bool)shouldCacheSql:(const char *)arg1;
+ (void)truncateDatabaseAtPath:(id)arg1;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)inMemoryPath;
+ (_Bool)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1 errorHandler:(id)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id *)arg3 errorHandler:(id)arg4;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
+ (id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2;
+ (id)initializeDatabase:(id)arg1 withProtection:(_Bool)arg2 newDatabaseCreated:(_Bool *)arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(_Bool *)arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(_Bool *)arg3 errorHandler:(id)arg4;
@property(readonly, nonatomic) _Bool isInMemory; // @synthesize isInMemory=_isInMemory;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)languageForFTSTable:(id)arg1;
- (void)finalizeLater:(struct sqlite3_stmt *)arg1;
- (void)withDbLockExecuteBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (_Bool)hasIndexNamed:(id)arg1;
- (_Bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (id)tablesWithColumnNamed:(id)arg1;
- (_Bool)hasTableNamed:(id)arg1;
- (_Bool)setUserVersion:(unsigned long long)arg1;
- (unsigned long long)userVersion;
- (_Bool)createSnapshot:(id)arg1;
- (id)description;
- (_Bool)_transactionWithExclusivity:(_Bool)arg1 transaction:(CDUnknownBlockType)arg2;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)_txnBeginExclusive;
- (void)_txnBegin;
- (_Bool)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (_Bool)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;
- (void)clearCaches;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)insertIntoTable:(id)arg1 dictionary:(id)arg2;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)prepAndRunNonDataQueries:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (_Bool)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (_Bool)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2;
- (_Bool)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct sqlite3 *handle;
- (long long)lastInsertRowId;
- (void)simulateOnDiskDatabase;
- (void)closePermanently;
- (void)dealloc;
- (id)init;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
- (void)placeCorruptionMarker;
- (_Bool)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (id)freeSpace;

@end

