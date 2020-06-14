//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSOrderedSet, NSString, NTPBDiscoverMoreVideosInfo, NUNewsAnalyticsVideoPlayerEventTrackerConfiguration, SVVideoViewController;
@protocol NUVideoActivityViewControllerFactory, SVVisibilityMonitoring;

@protocol NUVideoViewControllerFactory <NSObject>
- (SVVideoViewController *)createVideoViewControllerWithItems:(NSOrderedSet *)arg1 visibilityMonitor:(id <SVVisibilityMonitoring>)arg2 eventTrackerConfiguration:(NUNewsAnalyticsVideoPlayerEventTrackerConfiguration *)arg3 externalAnalyticsReferrer:(NSString *)arg4 placement:(NSString *)arg5 discoverMoreVideosInfo:(NTPBDiscoverMoreVideosInfo *)arg6 activityViewControllerFactory:(id <NUVideoActivityViewControllerFactory>)arg7;
@end

