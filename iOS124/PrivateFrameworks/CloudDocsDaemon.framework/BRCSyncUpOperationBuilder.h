//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperationBuilder : NSObject
{
    BRCAccountSession *_session;
    BRCSyncUpOperation *_op;
    NSMutableSet *_chainedParentID;
    BRCUserDefaults *_defaults;
}

+ (_Bool)shouldPCSChainItemID:(id)arg1 withParentItemID:(id)arg2 givenChainedParentID:(id)arg3 inZone:(id)arg4 canOptimisticallyChain:(_Bool)arg5 andGetIsChained:(_Bool *)arg6 defaults:(id)arg7;
@property(retain, nonatomic) BRCUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSMutableSet *chainedParentID; // @synthesize chainedParentID=_chainedParentID;
@property(retain, nonatomic) BRCSyncUpOperation *op; // @synthesize op=_op;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (float)addItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addEditOfAlias:(id)arg1;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (_Bool)shouldPCSChainDirectory:(id)arg1;
- (float)fakeSyncForItem:(id)arg1 inZone:(id)arg2;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 etag:(id)arg2 previousZoneEtag:(id)arg3;
- (float)addDeletionOfItem:(id)arg1;
- (_Bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (_Bool)shouldPCSChainItem:(id)arg1;
- (_Bool)shouldPCSChainItem:(id)arg1 canOptimisticallyChain:(_Bool)arg2 andGetIsChained:(_Bool *)arg3;

@end

