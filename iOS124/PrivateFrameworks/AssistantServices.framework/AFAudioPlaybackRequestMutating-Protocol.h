//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSURL;

@protocol AFAudioPlaybackRequestMutating <NSObject>
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setItemData:(NSData *)arg1;
- (void)setItemURL:(NSURL *)arg1;
@end

