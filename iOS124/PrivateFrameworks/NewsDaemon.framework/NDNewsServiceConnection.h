//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NDNewsService-Protocol.h>
#import <NewsDaemon/NDNewsServiceClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol NDNewsService, NDNewsServiceClient, OS_dispatch_queue;

@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService>
{
    NSXPCConnection *_connection;
    id <NDNewsService> _daemon;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <NDNewsServiceClient> _client;
}

@property(nonatomic) __weak id <NDNewsServiceClient> client; // @synthesize client=_client;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) id <NDNewsService> daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_establishConnectionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serviceHasNewTodayResults;
- (void)dealloc;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

