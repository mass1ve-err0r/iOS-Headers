//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSPDatabaseArchiveManager : NSObject
{
}

+ (_Bool)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (_Bool)_processLoad:(id)arg1 classType:(int *)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id *)arg5;
+ (_Bool)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3;

@end

