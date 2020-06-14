//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRSQLRow : NSObject
{
    struct sqlite3_stmt *_stmt;
}

+ (id)numberWithDoubleAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)numberWithIntegerAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)dataAtIndex:(int)arg1 copyBytes:(_Bool)arg2 statement:(struct sqlite3_stmt *)arg3;
+ (id)objectAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)stringAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (int)step:(struct sqlite3_stmt *)arg1;
+ (id)rowWithStatement:(struct sqlite3_stmt *)arg1;
+ (int)enumerateRowsInStatement:(struct sqlite3_stmt *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)numberWithDoubleAtIndex:(int)arg1;
- (id)numberWithIntegerAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1 copyBytes:(_Bool)arg2;
- (id)objectAtIndex:(int)arg1;
- (id)stringAtIndex:(int)arg1;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end

