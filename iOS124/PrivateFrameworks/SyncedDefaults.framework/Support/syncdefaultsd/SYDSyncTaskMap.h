//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SYDSyncTaskMap : NSObject
{
    NSMutableDictionary *_tasksByBundleIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *tasksByBundleIdentifier; // @synthesize tasksByBundleIdentifier=_tasksByBundleIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *allApplications;
@property(readonly, nonatomic) NSArray *allSyncTasks;
- (void)enumerateSyncTasksWithBlock:(CDUnknownBlockType)arg1;
- (id)syncTaskWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (void)removeSyncTask:(id)arg1;
- (void)addSyncTask:(id)arg1;
- (id)init;

@end

