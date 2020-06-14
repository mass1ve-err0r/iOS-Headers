//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKAVPlayerController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSKAVQueuePlayerController : TSKAVPlayerController
{
    NSArray *mAssets;
}

- (void)p_enqueueAssetsFromIndex:(unsigned long long)arg1;
- (void)skipToAssetAtIndex:(unsigned long long)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)dealloc;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned long long)arg4;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3;

@end

