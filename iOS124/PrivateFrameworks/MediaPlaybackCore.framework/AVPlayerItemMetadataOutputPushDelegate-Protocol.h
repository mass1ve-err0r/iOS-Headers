//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemMetadataOutput, AVPlayerItemTrack, NSArray;

@protocol AVPlayerItemMetadataOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)metadataOutput:(AVPlayerItemMetadataOutput *)arg1 didOutputTimedMetadataGroups:(NSArray *)arg2 fromPlayerItemTrack:(AVPlayerItemTrack *)arg3;
@end

