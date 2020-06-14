//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryConnectionProxy-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionProxyQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue; // @synthesize connectionProxyQueue=_connectionProxyQueue;
- (void).cxx_destruct;
- (id)queryMemoryFootprintWithError:(id *)arg1;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (void)killService;
- (void)beginHistoryAccessSession:(CDUnknownBlockType)arg1;
- (void)beginURLCompletionSession:(CDUnknownBlockType)arg1;
- (void)debugGetDatabaseURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getVisitedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServiceInfo:(CDUnknownBlockType)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

