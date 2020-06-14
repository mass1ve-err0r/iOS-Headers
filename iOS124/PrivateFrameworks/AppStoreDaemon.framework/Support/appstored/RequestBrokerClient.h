//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDRequestService-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSXPCConnection, XPCClient;

@interface RequestBrokerClient : NSObject <ASDRequestService>
{
    XPCClient *_client;
    NSXPCConnection *_connection;
    NSMutableArray *_requests;
    NSOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) XPCClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_trackRequest:(id)arg1;
- (void)_releaseRequest:(id)arg1;
- (id)description;
- (void)submitRequest:(id)arg1 delegate:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)queueOperation:(id)arg1;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;

@end

