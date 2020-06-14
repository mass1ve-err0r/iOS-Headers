//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject
{
    WBSSQLiteDatabase *_database;
    _Bool _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
    NSURL *_databaseURL;
}

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_createNewDatabaseSQLiteStatement;
- (_Bool)deleteAllEntries;
- (_Bool)deleteEntryWithHost:(id)arg1;
- (int)_updateEntry:(id)arg1;
- (int)_insertEntry:(id)arg1;
- (_Bool)saveEntry:(id)arg1;
- (id)allEntries;
- (id)entryWithHost:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (_Bool)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2;
- (_Bool)_createNewDatabaseSchema;
- (_Bool)_migrateToCurrentSchemaVersionifNeeded;
- (_Bool)_checkDatabaseIntegrity;
- (_Bool)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;
- (void)dealloc;
- (void)_closeDatabase;
- (void)close;
- (id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2;
- (id)initWithDatabaseURL:(id)arg1;

@end

