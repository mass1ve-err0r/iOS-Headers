//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXVideoScrubberController;

@protocol PXVideoScrubberControllerDelegate <NSObject>

@optional
- (void)videoScrubberControllerPlayerItemDidChange:(PXVideoScrubberController *)arg1;
- (void)videoScrubberController:(PXVideoScrubberController *)arg1 desiredSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)videoScrubberControllerDidUpdate:(PXVideoScrubberController *)arg1;
- (double)videoScrubberController:(PXVideoScrubberController *)arg1 lengthForDuration:(double)arg2;
@end

