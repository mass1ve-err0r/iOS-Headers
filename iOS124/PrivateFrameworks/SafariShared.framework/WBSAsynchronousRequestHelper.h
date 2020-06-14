//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSURLConnectionDelegate-Protocol.h>
#import <SafariShared/WBSAsynchronousRequest-Protocol.h>

@class NSMutableData, NSOperationQueue, NSString, NSURLConnection, NSURLResponse;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate, WBSAsynchronousRequest>
{
    NSOperationQueue *_queue;
    CDUnknownBlockType _handler;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_data;
    id _lifetimeExtender;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)sendRequest;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

