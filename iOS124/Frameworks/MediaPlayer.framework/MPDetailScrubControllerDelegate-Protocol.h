//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPDetailScrubController;

@protocol MPDetailScrubControllerDelegate <NSObject>

@optional
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailScrubController:(MPDetailScrubController *)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidEndScrubbing:(MPDetailScrubController *)arg1;
- (void)detailScrubControllerDidBeginScrubbing:(MPDetailScrubController *)arg1;
@end

