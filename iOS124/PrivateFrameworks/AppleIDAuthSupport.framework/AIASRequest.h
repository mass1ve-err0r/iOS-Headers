//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDAuthSupport/NSURLSessionDataDelegate-Protocol.h>

@class NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AIASRequest : NSObject <NSURLSessionDataDelegate>
{
    _Bool _done;
    _Bool _success;
    NSMutableURLRequest *_URLRequest;
    NSMutableData *_data;
    struct __AppleIDAuthSupportData *_context;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property struct __AppleIDAuthSupportData *context; // @synthesize context=_context;
@property _Bool success; // @synthesize success=_success;
@property _Bool done; // @synthesize done=_done;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSMutableURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithURL:(id)arg1 data:(struct __CFDictionary *)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

