//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/AVAssetResourceLoaderDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVURLAsset, NSMutableDictionary, NSString, NSURL, SUPlayerStatus;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate>
{
    AVURLAsset *_asset;
    NSURL *_certificateUrl;
    _Bool _didPostForPreviewHistory;
    NSURL *_keyUrl;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    long long _storeItemIdentifier;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(retain, nonatomic) NSURL *keyURL; // @synthesize keyURL=_keyUrl;
@property(retain, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateUrl;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (void)_setPlayerState:(long long)arg1;
- (void)_postStatusChangeNotification;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_failWithError:(id)arg1;
- (void)_destroyPlayerItem;
- (void)_destroyPlayer;
- (void)_applyNowPlayingInfo;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)valueForNowPlayingKey:(id)arg1;
- (void)stop;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) SUPlayerStatus *playerStatus;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

