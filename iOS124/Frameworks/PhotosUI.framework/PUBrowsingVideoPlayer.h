//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosUI/ISChangeObserver-Protocol.h>
#import <PhotosUI/ISWrappedAVPlayerDelegate-Protocol.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSDate, NSError, NSHashTable, NSMutableSet, NSObject, NSString, NSTimer, PUBrowsingVideoPlayerChange, PUMediaProvider, PXUpdater;
@protocol OS_dispatch_queue, PUDisplayAsset;

@interface PUBrowsingVideoPlayer : PUViewModel <ISChangeObserver, ISWrappedAVPlayerDelegate>
{
    PXUpdater *_updater;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    _Bool _isPlayingAllowed;
    _Bool _isStalled;
    _Bool _alwaysRespectsMuteSwitch;
    _Bool _isPlayable;
    _Bool _isPlayerLoadingAllowed;
    _Bool _isAtBeginning;
    _Bool _isAtEnd;
    _Bool _isActivated;
    _Bool __shouldLoadPlayer;
    _Bool __isBuffering;
    _Bool __shouldRewindBeforePlaying;
    _Bool __isPlayerTimeAdvancing;
    _Bool __isUpdatingAudioSession;
    int __currentRequestID;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    long long _desiredPlayState;
    long long _playState;
    ISWrappedAVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    NSError *_error;
    NSMutableSet *__playerLoadingDisablingReasons;
    NSMutableSet *__playingDisablingReasons;
    long long __currentUnloadRequestId;
    ISWrappedAVAudioSession *__audioSession;
    id __playerTimeObservationToken;
    NSTimer *__playerTimeAdvancementTimer;
    CDUnknownBlockType __onPlayerLoadedBlock;
    NSDate *__playRequestDate;
    NSHashTable *__timeObservers;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _desiredSeekTime;
    CDStruct_1b6d18a9 __lastPlayerTime;
}

@property(readonly, nonatomic) NSHashTable *_timeObservers; // @synthesize _timeObservers=__timeObservers;
@property(retain, nonatomic, setter=_setPlayRequestDate:) NSDate *_playRequestDate; // @synthesize _playRequestDate=__playRequestDate;
@property(copy, nonatomic, setter=_setOnPlayerLoadedBlock:) CDUnknownBlockType _onPlayerLoadedBlock; // @synthesize _onPlayerLoadedBlock=__onPlayerLoadedBlock;
@property(retain, nonatomic, setter=_setPlayerTimeAdvancementTimer:) NSTimer *_playerTimeAdvancementTimer; // @synthesize _playerTimeAdvancementTimer=__playerTimeAdvancementTimer;
@property(retain, nonatomic, setter=_setPlayerTimeObservationToken:) id _playerTimeObservationToken; // @synthesize _playerTimeObservationToken=__playerTimeObservationToken;
@property(retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // @synthesize _audioSession=__audioSession;
@property(nonatomic, setter=_setCurrentUnloadRequestId:) long long _currentUnloadRequestId; // @synthesize _currentUnloadRequestId=__currentUnloadRequestId;
@property(nonatomic, setter=_setCurrentRequestID:) int _currentRequestID; // @synthesize _currentRequestID=__currentRequestID;
@property(nonatomic, setter=_setUpdatingAudioSession:) _Bool _isUpdatingAudioSession; // @synthesize _isUpdatingAudioSession=__isUpdatingAudioSession;
@property(nonatomic, setter=_setLastPlayerTime:) CDStruct_1b6d18a9 _lastPlayerTime; // @synthesize _lastPlayerTime=__lastPlayerTime;
@property(nonatomic, setter=_setPlayerTimeAdvancing:) _Bool _isPlayerTimeAdvancing; // @synthesize _isPlayerTimeAdvancing=__isPlayerTimeAdvancing;
@property(nonatomic, setter=_setShouldRewindBeforePlaying:) _Bool _shouldRewindBeforePlaying; // @synthesize _shouldRewindBeforePlaying=__shouldRewindBeforePlaying;
@property(nonatomic, setter=_setBuffering:) _Bool _isBuffering; // @synthesize _isBuffering=__isBuffering;
@property(retain, nonatomic, setter=_setPlayingDisablingReasons:) NSMutableSet *_playingDisablingReasons; // @synthesize _playingDisablingReasons=__playingDisablingReasons;
@property(retain, nonatomic, setter=_setPlayerLoadingDisablingReasons:) NSMutableSet *_playerLoadingDisablingReasons; // @synthesize _playerLoadingDisablingReasons=__playerLoadingDisablingReasons;
@property(nonatomic, setter=_setShouldLoadPlayer:) _Bool _shouldLoadPlayer; // @synthesize _shouldLoadPlayer=__shouldLoadPlayer;
@property(retain, nonatomic, setter=_setError:) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic, setter=_setPlayerItem:) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic, setter=setActivated:) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic, setter=setDesiredSeekTime:) CDStruct_1b6d18a9 desiredSeekTime; // @synthesize desiredSeekTime=_desiredSeekTime;
@property(nonatomic, setter=_setAtEnd:) _Bool isAtEnd; // @synthesize isAtEnd=_isAtEnd;
@property(nonatomic, setter=_setAtBeginning:) _Bool isAtBeginning; // @synthesize isAtBeginning=_isAtBeginning;
@property(retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(nonatomic, setter=_setPlayerLoadingAllowed:) _Bool isPlayerLoadingAllowed; // @synthesize isPlayerLoadingAllowed=_isPlayerLoadingAllowed;
@property(nonatomic, setter=_setPlayable:) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) _Bool alwaysRespectsMuteSwitch; // @synthesize alwaysRespectsMuteSwitch=_alwaysRespectsMuteSwitch;
@property(nonatomic, setter=_setStalled:) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic, setter=_setPlayState:) long long playState; // @synthesize playState=_playState;
@property(nonatomic, setter=_setPlayingAllowed:) _Bool isPlayingAllowed; // @synthesize isPlayingAllowed=_isPlayingAllowed;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
@property(nonatomic, setter=_setDuration:) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (id)_playbackStateDescription;
- (void)_logPlaybackState;
- (void)_updateAtBeginningOrEnd;
- (void)_updateAVPlayer;
- (void)_updatePlayState;
- (void)_updateAVPlayerPlayState;
- (void)_updateStalled;
- (void)_updateBuffering;
- (void)_setPlayabilityFromAsset;
- (void)_updatePlayability;
- (void)_handleResultOfPlayerItemRequestWithID:(int)arg1 playerItem:(id)arg2 info:(id)arg3;
- (void)_updatePlayerItem;
- (void)_invalidatePlayerItem;
- (void)_handleDidBecomeActiveNotification:(id)arg1;
- (void)_handleWillResignActiveNotification:(id)arg1;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)_isAVPlayerPlayStateOutOfSync;
- (void)unregisterTimeObserver:(id)arg1;
- (void)registerTimeObserver:(id)arg1;
- (void)_updateDuration;
@property(nonatomic, setter=_setCurrentTime:) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
- (void)_dequeueAllOnPlayerLoadedBlocksIfApplicable;
- (void)_enqueueOnPlayerLoadedBlock:(CDUnknownBlockType)arg1;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
@property(readonly, nonatomic) PUBrowsingVideoPlayerChange *currentChange;
- (id)newViewModelChange;
- (void)setPlayingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_performBlockWithLoadedAVPlayer:(CDUnknownBlockType)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rewindExistingPlayer;
- (void)_adoptAudioSession:(id)arg1;
- (void)_audiosessionQueue_setAudioCategory:(id)arg1;
- (void)_updateAudioSession;
- (void)setPlayerLoadingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_handlePlayerUnloadWithRequestId:(long long)arg1;
- (void)_stopObservingAVPlayer;
- (void)_handlePlayerTimeAdvancementTimer:(id)arg1;
- (void)_avPlayerTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)_startObservingAVPlayer;
- (void)invalidateExistingPlayer;
- (void)didPerformChanges;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

