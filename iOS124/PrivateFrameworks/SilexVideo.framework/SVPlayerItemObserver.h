//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemObserving-Protocol.h>

@class AVPlayerItem, NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving>
{
    CDUnknownBlockType _changeBlock;
    AVPlayerItem *_item;
    SVPlayer *_player;
    SVKeyValueObserver *_observer;
}

@property(readonly, nonatomic) SVKeyValueObserver *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak AVPlayerItem *item; // @synthesize item=_item;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

