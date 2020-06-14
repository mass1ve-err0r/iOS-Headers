//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NNMKSQLiteUtils : NSObject
{
}

+ (_Bool)boolFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (double)doubleFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (unsigned long long)unsignedIntegerFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (unsigned long long)integerFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)dataFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)dateFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)stringFromStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (void)bindBool:(_Bool)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindDouble:(double)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindUnsignedInteger:(unsigned long long)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindInteger:(long long)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindData:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindDate:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (void)bindString:(id)arg1 intoStatement:(struct sqlite3_stmt *)arg2 paramIndex:(int)arg3;
+ (_Bool)isResponseOkFromPreparedStatementExecution:(int)arg1;
+ (void)closeExecutedPreparedStatement:(struct sqlite3_stmt *)arg1;

@end

