//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate;

@interface DownloadTaskState : NSObject
{
    id <NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> _delegate;
    long long _downloadID;
}

@property long long downloadID; // @synthesize downloadID=_downloadID;
@property __weak id <NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

