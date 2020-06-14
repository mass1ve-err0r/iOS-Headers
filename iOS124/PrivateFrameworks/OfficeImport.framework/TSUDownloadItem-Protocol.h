//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSURLSessionTask, TSUDownloadManager;

@protocol TSUDownloadItem <NSObject>
+ (void)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
+ (_Bool)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3 error:(id *)arg4;
+ (_Bool)canHandleDownloadTask:(NSURLSessionTask *)arg1;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;

@optional
@property(readonly, nonatomic) _Bool needsDownload;
@end

