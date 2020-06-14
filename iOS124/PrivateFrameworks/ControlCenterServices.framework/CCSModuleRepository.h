//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterServices/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSSet, NSString;
@protocol BSDefaultObserver, OS_dispatch_queue;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSArray *_directoryURLs;
    NSSet *_whitelistedModuleIdentifiers;
    NSDictionary *_allModuleMetadataByIdentifier;
    NSSet *_availableModuleIdentifiers;
    NSSet *_interestingBundleIdentifiers;
    struct MGNotificationTokenStruct *_mobileGestaltNotificationToken;
    NSHashTable *_observers;
    NSObject<BSDefaultObserver> *_internalDefaultsObserver;
    NSSet *_loadableModuleIdentifiers;
    _Bool _ignoreWhitelist;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

+ (id)_defaultModuleIdentifierWhitelist;
+ (id)_defaultModuleDirectories;
+ (id)repositoryWithDefaults;
+ (id)_deviceFamily;
- (void).cxx_destruct;
- (void)_queue_unregisterForInternalPreferenceChanges;
- (void)_queue_registerForInternalPreferenceChanges;
- (void)_queue_stopObservingGestaltQuestions;
- (void)_queue_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(CDUnknownBlockType)arg2;
- (id)_queue_gestaltQuestionsForModuleMetadata:(id)arg1;
- (void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg1;
- (id)_queue_filterModuleMetadataByGestalt:(id)arg1;
- (void)_queue_unregisterForVisiblityPreferenceChanges;
- (void)_queue_registerForVisiblityPreferenceChanges;
- (id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg1;
- (_Bool)_queue_arrayContainsInterestingApplicationProxy:(id)arg1;
- (id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg1;
- (void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;
- (id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;
- (id)_queue_loadAllModuleMetadata;
- (id)_queue_moduleIdentifiersForMetadata:(id)arg1;
- (void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;
- (void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;
- (void)_queue_updateLoadableModuleMetadata;
- (void)_queue_updateAvailableModuleMetadata;
- (void)_updateAvailableModuleMetadata;
- (void)_queue_updateAllModuleMetadata;
- (void)_updateAllModuleMetadata;
- (void)_applicationsDidChange:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)_queue_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)moduleMetadataForModuleIdentifier:(id)arg1;
- (void)_queue_setIgnoreWhitelist:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSSet *loadableModuleIdentifiers;
- (void)dealloc;
- (id)_initWithDirectoryURLs:(id)arg1 whitelistedModuleIdentifiers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

