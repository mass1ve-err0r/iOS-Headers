//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSError;

@protocol SVVideoPlaybackStateObserving <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) unsigned long long state;
@end

