/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPeopleComplicationContactsCache : NSObject {
    CNContactStore * _contactStore;
    CNFavorites * _favorites;
    NSLock * _favoritesEntriesLock;
    NSDictionary * _favoritesMapping;
    NSLock * _favoritesMappingLock;
    bool  _hasSetupNotifications;
    NSLock * _hasSetupNotificationsLock;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (id)_loadFavoriteContacts;
- (void)_queue_loadFavoriteContacts;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)abbreviatedNameForContact:(id)arg1;
- (void)dealloc;
- (id)favoriteContacts;
- (id)fullNameForContact:(id)arg1;
- (id)init;
- (void)setupNotificationsIfNecessary;
- (id)shortNameForContact:(id)arg1;

@end