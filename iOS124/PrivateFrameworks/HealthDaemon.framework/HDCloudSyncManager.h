//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAssertion, HDProfile;
@protocol OS_dispatch_queue;

@interface HDCloudSyncManager : NSObject
{
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    _Bool _shouldResync;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _inProgressSyncCount;
}

+ (void)_containerIdentifiersWithEncryptionSupportEnabled:(_Bool)arg1 accountManateeEnabled:(_Bool)arg2 internalSettingManateeEnabled:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) long long inProgressSyncCount; // @synthesize inProgressSyncCount=_inProgressSyncCount;
@property(nonatomic) _Bool shouldResync; // @synthesize shouldResync=_shouldResync;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(retain) HDAssertion *preparedDatabaseAccessibilityAssertion; // @synthesize preparedDatabaseAccessibilityAssertion=_preparedDatabaseAccessibilityAssertion;
- (void).cxx_destruct;
- (id)lastPushForwardProgressDate;
- (void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2;
- (void)_cloudSyncRepositoriesForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_containerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)_primaryiCloudAccountAltDSID;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (_Bool)_isAccountManateeEnabled;
- (id)_containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)queue_cloudSyncRepositoriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 permitResync:(_Bool)arg4;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5;
- (void)requestImmediateResync;
- (void)prepareForSync;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

