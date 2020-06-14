//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface QLSqliteDatabaseStatementWrapper : NSObject
{
    struct sqlite3_stmt *_stmt;
    NSMapTable *_inUseTable;
    NSString *_key;
}

@property(nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic, getter=isInUse) _Bool inUse;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 key:(id)arg2 inUseTable:(id)arg3;

@end

