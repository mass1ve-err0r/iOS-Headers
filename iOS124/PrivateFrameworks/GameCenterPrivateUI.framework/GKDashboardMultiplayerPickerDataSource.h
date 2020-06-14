//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionDataSource.h>

@class GKContactDataSource, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource
{
    _Bool _supportsNearby;
    _Bool _excludesContacts;
    _Bool _isSegmented;
    _Bool _browsingForNearbyPlayers;
    _Bool _didLoad;
    long long _maxSelectable;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    CDUnknownBlockType _nearbyPlayersChangedHandler;
    long long _currentSegmentSection;
    NSArray *_contactPlayers;
    NSArray *_friendPlayers;
    NSArray *_recentPlayers;
    NSMutableArray *_nearbyPlayers;
    NSArray *_filteredRecentPlayers;
    NSArray *_filteredFriendPlayers;
    NSMutableDictionary *_playerStates;
    NSArray *_searchPlayers;
    NSArray *_hiddenPlayers;
    NSMutableArray *_selectedPlayersStack;
    GKContactDataSource *_contactSource;
}

@property(retain, nonatomic) GKContactDataSource *contactSource; // @synthesize contactSource=_contactSource;
@property(nonatomic) _Bool didLoad; // @synthesize didLoad=_didLoad;
@property(nonatomic) _Bool browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
@property(retain, nonatomic) NSMutableArray *selectedPlayersStack; // @synthesize selectedPlayersStack=_selectedPlayersStack;
@property(retain, nonatomic) NSArray *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSArray *filteredFriendPlayers; // @synthesize filteredFriendPlayers=_filteredFriendPlayers;
@property(retain, nonatomic) NSArray *filteredRecentPlayers; // @synthesize filteredRecentPlayers=_filteredRecentPlayers;
@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(retain, nonatomic) NSArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(retain, nonatomic) NSArray *contactPlayers; // @synthesize contactPlayers=_contactPlayers;
@property(nonatomic) long long currentSegmentSection; // @synthesize currentSegmentSection=_currentSegmentSection;
@property(nonatomic) _Bool isSegmented; // @synthesize isSegmented=_isSegmented;
@property(nonatomic) _Bool excludesContacts; // @synthesize excludesContacts=_excludesContacts;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayersChangedHandler; // @synthesize nearbyPlayersChangedHandler=_nearbyPlayersChangedHandler;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)setNearbyPlayerID:(id)arg1 reachable:(_Bool)arg2;
- (void)searchTextHasChanged;
- (id)searchKeyForSection:(long long)arg1;
- (id)indexPathForFirstPlayer;
- (id)indexPathForPlayer:(id)arg1 inSection:(long long)arg2;
- (id)firstIndexPathForPlayer:(id)arg1;
- (void)clearSelection;
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (id)playerForPlayerID:(id)arg1;
- (id)playerForIndexPath:(id)arg1;
- (id)playersForSection:(long long)arg1 ignoreSearch:(_Bool)arg2;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (id)headerTextForSection:(long long)arg1;
@property(readonly, nonatomic) long long unmodifiedItemCount;
- (long long)itemCount;
@property(readonly, nonatomic) NSDictionary *contactSkipIndexes;
@property(readonly, nonatomic) NSArray *contactSkipValues;
@property(readonly, nonatomic) NSDictionary *contactSectionHeaderIndexes;
@property(readonly, nonatomic) NSArray *contactSectionHeaders;
@property(readonly, nonatomic) long long numberOfContacts;
- (void)filterPlayers;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;

@end

