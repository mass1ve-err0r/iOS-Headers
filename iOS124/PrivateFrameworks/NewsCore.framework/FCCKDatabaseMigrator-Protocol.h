//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class CKRecord, FCCKPrivateDatabase, NSArray, NSSet, NSString;

@protocol FCCKDatabaseMigrator <NSObject>
- (void)databaseMigrationDidFinishForDatabase:(FCCKPrivateDatabase *)arg1 result:(long long)arg2;
- (CKRecord *)databaseMigrationMigrateRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2 error:(id *)arg3;
- (_Bool)databaseMigrationShouldDropRecord:(CKRecord *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSArray *)databaseMigrationRecordNamesToMigrateInZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (_Bool)databaseMigrationShouldMigrateEntireZone:(NSString *)arg1 database:(FCCKPrivateDatabase *)arg2;
- (NSSet *)databaseMigrationZoneNamesForDatabase:(FCCKPrivateDatabase *)arg1;
@end

