//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ML3DatabaseValidationClient : NSObject
{
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;
- (void).cxx_destruct;
- (_Bool)isValidatingDatabaseForPath:(id)arg1;
- (_Bool)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2;
- (id)_validatableDatabaseForPath:(id)arg1;
- (_Bool)validateDatabaseForConnection:(id)arg1;
- (_Bool)validateDatabaseForLibrary:(id)arg1;
- (_Bool)validateDatabaseAtPath:(id)arg1;
- (id)init;

@end

