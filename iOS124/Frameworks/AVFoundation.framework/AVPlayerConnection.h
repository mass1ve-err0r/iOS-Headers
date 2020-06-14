//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSError;

__attribute__((visibility("hidden")))
@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

- (id)error;
@property(readonly, nonatomic) long long status;
- (void)removeItemFromPlayQueue;
- (_Bool)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (id)playerItem;
- (id)player;
- (id)description;
- (void)dealloc;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;

@end

