//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSArray, SSDownloadManager;

@protocol SSDownloadManagerObserver <NSObject>

@optional
- (void)downloadManagerNetworkUsageDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerActiveDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManager:(SSDownloadManager *)arg1 downloadStatesDidChange:(NSArray *)arg2;
@end

