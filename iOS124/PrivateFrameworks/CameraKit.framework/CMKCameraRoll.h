//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, PHAssetCollection, PHFetchResult;

@interface CMKCameraRoll : NSObject
{
    _Bool _changeNotificationsEnabled;
    _Bool __weakAssetCollectionLoaded;
    _Bool __hasPendingSessionAssets;
    _Bool __hasLoadedCameraRollFrameworks;
    NSDate *_sessionIdentifier;
    PHFetchResult *__weakAssetCollectionFetchResult;
    PHAssetCollection *__weakAssetCollection;
    PHFetchResult *__userLibraryAssetsFetchResult;
    NSMutableSet *__cachedChangeObservers;
    NSMutableDictionary *__inflightAssets;
    NSMutableSet *__sessionAssetUUIDs;
}

+ (id)sharedCameraRoll;
@property(readonly, nonatomic) _Bool _hasLoadedCameraRollFrameworks; // @synthesize _hasLoadedCameraRollFrameworks=__hasLoadedCameraRollFrameworks;
@property(readonly, nonatomic) _Bool _hasPendingSessionAssets; // @synthesize _hasPendingSessionAssets=__hasPendingSessionAssets;
@property(readonly, nonatomic) NSMutableSet *_sessionAssetUUIDs; // @synthesize _sessionAssetUUIDs=__sessionAssetUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *_inflightAssets; // @synthesize _inflightAssets=__inflightAssets;
@property(readonly, nonatomic) NSMutableSet *_cachedChangeObservers; // @synthesize _cachedChangeObservers=__cachedChangeObservers;
@property(readonly, nonatomic) PHFetchResult *_userLibraryAssetsFetchResult; // @synthesize _userLibraryAssetsFetchResult=__userLibraryAssetsFetchResult;
@property(readonly, nonatomic) PHAssetCollection *_weakAssetCollection; // @synthesize _weakAssetCollection=__weakAssetCollection;
@property(readonly, nonatomic) PHFetchResult *_weakAssetCollectionFetchResult; // @synthesize _weakAssetCollectionFetchResult=__weakAssetCollectionFetchResult;
@property(readonly, nonatomic, getter=_isWeakAssetCollectionLoaded) _Bool _weakAssetCollectionLoaded; // @synthesize _weakAssetCollectionLoaded=__weakAssetCollectionLoaded;
@property(nonatomic) _Bool changeNotificationsEnabled; // @synthesize changeNotificationsEnabled=_changeNotificationsEnabled;
@property(readonly, nonatomic) NSDate *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)preflightCameraRollFrameworks;
- (_Bool)isCameraSessionActive;
- (_Bool)updateFromChanges:(id)arg1;
- (void)removeInflightAsset:(id)arg1;
- (void)addInflightAsset:(id)arg1;
- (_Bool)hasInflightAssets;
- (void)_removeAllSessionAssets;
- (void)_reloadSessionAssets;
- (void)_removeSessionAssets:(id)arg1;
- (void)addSessionAsset:(id)arg1;
- (id)_sessionLocalIdentifiers;
- (void)_ensureFetchedSessionAssets;
- (void)removeChangeNotificationsObserver:(id)arg1;
- (void)addChangeNotificationsObserver:(id)arg1;
- (void)_unregisterAllObjectsForChangeNotifications;
- (void)_unregisterChangeNotificationObserver:(id)arg1;
- (void)_registerAllChangeNotificationObservers;
- (void)_registerChangeNotificationObserver:(id)arg1;
- (id)album;
- (id)fetchResultContainingAssetCollection;
- (id)realizedWeakAssetCollection;
- (void)_ensureWeakAssetCollection;
- (void)_invalidateAssetCollection;
- (void)_updateWeakAlbumChangeNotificationsState;
- (void)finishSession;
- (void)startNewSession;
- (void)startNewSessionWithIdentifier:(id)arg1;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (void)dealloc;
- (id)init;

@end

