//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject
{
    HDSQLiteDatabase *_database;
    unsigned long long _generation;
    unsigned long long _threadID;
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *typeString;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;

@end
