//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject
{
    NSString *_loadingTileGroupUniqueIdentifier;
    NSArray *_pendingTileGroupMigrationTasks;
    id <NSObject> _transaction;
}

@property(copy, nonatomic) NSArray *pendingTileGroupMigrationTasks; // @synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks;
@property(readonly, nonatomic) NSString *loadingTileGroupUniqueIdentifier; // @synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2;
- (id)init;

@end

