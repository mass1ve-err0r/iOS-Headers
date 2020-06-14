//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class AMSProcessInfo, AMSPromise, NSString, NSURL, NSURLSession;

@interface DetermineSizeForURLTask : Task <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
    AMSPromise *_promise;
    NSURLSession *_session;
    AMSProcessInfo *_clientInfo;
    NSURL *_url;
}

@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)promise;
- (id)initWithURL:(id)arg1 forClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

