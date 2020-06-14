//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSString;

__attribute__((visibility("hidden")))
@interface ML3PersistentIDGenerator : NSObject
{
    ML3DatabaseConnection *_connection;
    NSString *_tableName;
    NSString *_validateStartingPersistentIdSQL;
    NSString *_nextUsedPersistentIdSQL;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}

- (void).cxx_destruct;
- (void)_calculateNewRun;
- (long long)nextPersistentID;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;

@end

