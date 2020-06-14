//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKRecordID, HMDBackingStoreLocal, HMDHome, HMDHomeManager, HMDObjectLookup, NSString, NSUUID;
@protocol HMDBackingStoreObjectProtocol;

@interface HMDBackingStore : HMFObject <HMFLogging>
{
    CKRecordID *_root;
    HMDBackingStoreLocal *_local;
    HMDHomeManager *_homeManager;
    HMDHome *_home;
    NSUUID *_uuid;
    HMDObjectLookup *_lookup;
    id <HMDBackingStoreObjectProtocol> _delegate;
}

+ (id)currentDevice;
+ (id)logCategory;
+ (id)resetBackingStore;
+ (id)flushBackingStore;
+ (id)internalAllowedTypes;
+ (id)allowedTypes;
+ (void)start;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id *)arg3;
- (void)submitBlock:(CDUnknownBlockType)arg1;
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(_Bool)arg2;
- (id)dumpState;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)submit:(id)arg1;
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)transaction:(id)arg1 options:(id)arg2;
- (id)transactionWithOptions:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

