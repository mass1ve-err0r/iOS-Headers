//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class UIFontDescriptor, VideosExtrasMainMenuSectionMetrics;

@protocol VideosExtrasMainMenuSectionMetricsDataSource <NSObject>
- (struct CGSize)sectionMetrics:(VideosExtrasMainMenuSectionMetrics *)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(UIFontDescriptor *)arg3;
- (long long)numberOfItemsForSectionMetrics:(VideosExtrasMainMenuSectionMetrics *)arg1;
@end

