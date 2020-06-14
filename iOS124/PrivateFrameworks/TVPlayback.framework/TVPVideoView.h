//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, TVPPlayerLayerView, UIImageView, UILabel;
@protocol TVPAVFPlayback;

@interface TVPVideoView : UIView
{
    _Bool _isPrimarySubtitleDisplayer;
    _Bool _readyForDisplay;
    long long _videoGravity;
    NSObject<TVPAVFPlayback> *_player;
    UILabel *_debugLabel;
    TVPPlayerLayerView *_playerLayerView;
    UIImageView *_stillImageView;
}

+ (void)_purgePreservedVideoViewsForPlayer:(id)arg1;
+ (void)_playerStateDidChange:(id)arg1;
+ (id)preservedVideoViewsForPlayer:(id)arg1 identifier:(id)arg2;
+ (void)preserveVideoViewForReuse:(id)arg1 identifier:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) UIImageView *stillImageView; // @synthesize stillImageView=_stillImageView;
@property(retain, nonatomic) TVPPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(nonatomic) _Bool isPrimarySubtitleDisplayer; // @synthesize isPrimarySubtitleDisplayer=_isPrimarySubtitleDisplayer;
@property(readonly, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_playerStillImageDidChange:(id)arg1;
- (id)AVPlayer;
- (void)setAVPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long videoGravity; // @synthesize videoGravity=_videoGravity;

@end
