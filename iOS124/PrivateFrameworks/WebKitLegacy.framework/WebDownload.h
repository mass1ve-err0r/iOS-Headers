//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLDownload.h>

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload
{
    WebDownloadInternal *_webInternal;
}

- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_setRealDelegate:(id)arg1;

@end

