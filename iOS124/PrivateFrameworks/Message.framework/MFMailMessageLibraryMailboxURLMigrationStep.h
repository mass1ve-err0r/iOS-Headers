//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFSQLiteConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject
{
    MFSQLiteConnection *_sqliteConnection;
}

@property(retain, nonatomic) MFSQLiteConnection *sqliteConnection; // @synthesize sqliteConnection=_sqliteConnection;
- (void).cxx_destruct;
- (void)_purgeFoldersMatchingPatterns:(id)arg1;
- (_Bool)_updateMailboxURLsInSQLitedb:(struct sqlite3 *)arg1 withOldURLToNewURLMap:(id)arg2;
- (_Bool)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(struct sqlite3 *)arg2;
- (_Bool)_renameMailboxDataFolders:(struct sqlite3 *)arg1;
- (_Bool)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;

@end

