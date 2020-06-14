//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class UIMovieScrubber;

@protocol UIMovieScrubberDelegate <NSObject>

@optional
- (void)movieScrubberDidEndAnimatingZoom:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidBeginAnimatingZoom:(UIMovieScrubber *)arg1;
- (void)movieScrubber:(UIMovieScrubber *)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)movieScrubberEditingAnimationFinished:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidCancelEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidBeginEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberWillBeginEditing:(UIMovieScrubber *)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(UIMovieScrubber *)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(UIMovieScrubber *)arg1;
- (void)movieScrubber:(UIMovieScrubber *)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberDidEndScrubbing:(UIMovieScrubber *)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(UIMovieScrubber *)arg1 withHandle:(int)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(UIMovieScrubber *)arg1 valueDidChange:(double)arg2;
@end

