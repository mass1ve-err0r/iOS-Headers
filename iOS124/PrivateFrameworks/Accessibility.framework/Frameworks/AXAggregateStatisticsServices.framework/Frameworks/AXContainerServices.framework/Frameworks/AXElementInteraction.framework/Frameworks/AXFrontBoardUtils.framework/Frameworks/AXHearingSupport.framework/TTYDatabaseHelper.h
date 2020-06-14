//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXCloudKitHelper, CHManager, NSManagedObjectContext;

@interface TTYDatabaseHelper : NSObject
{
    struct sqlite3 *_database;
    CHManager *_callHistoryManager;
    AXCloudKitHelper *_cloudKitHelper;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)ttyDatabaseFilePath;
- (id)ttyDirectoryPath;
- (_Bool)contactPathWasUsedForTTY:(id)arg1;
- (_Bool)contactIsTTYContact:(id)arg1;
- (_Bool)contactIDIsTTYContact:(id)arg1;
- (_Bool)deleteConversationWithCallUID:(id)arg1;
- (_Bool)deleteConversationsWithCallUIDs:(id)arg1;
- (_Bool)saveConversation:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (_Bool)saveIfPossible;
- (void)contentDidUpdate:(id)arg1;
- (void)storesWillChange:(id)arg1;
- (void)callHistoryDBDidChange:(id)arg1;
- (void)setupDatabase;
- (void)dealloc;
- (id)init;

@end

