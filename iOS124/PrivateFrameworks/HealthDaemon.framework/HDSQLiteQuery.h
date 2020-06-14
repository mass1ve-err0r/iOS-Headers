//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, HDSQLiteQueryDescriptor, NSString;

@interface HDSQLiteQuery : NSObject
{
    HDSQLiteDatabase *_database;
    HDSQLiteQueryDescriptor *_descriptor;
    NSString *_lastSQLStatement;
}

@property(readonly, copy) NSString *lastSQLStatement; // @synthesize lastSQLStatement=_lastSQLStatement;
@property(readonly) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)enumerateProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (_Bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;
- (void)enumerateEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteAllEntitiesWithError:(id *)arg1;
- (id)copySelectSQLWithProperties:(id)arg1;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
@property(readonly) HDSQLiteQueryDescriptor *queryDescriptor;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;

@end

