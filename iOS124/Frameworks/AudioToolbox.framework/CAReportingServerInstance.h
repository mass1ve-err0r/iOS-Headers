//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolbox/CAReportingServerInterface-Protocol.h>

@class CAReportingServer, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CAReportingServerInstance : NSObject <CAReportingServerInterface>
{
    int _clientID;
    CAReportingServer *_master;
    NSMutableDictionary *_clientReportingSessionMap;
}

@property(retain) NSMutableDictionary *clientReportingSessionMap; // @synthesize clientReportingSessionMap=_clientReportingSessionMap;
@property int clientID; // @synthesize clientID=_clientID;
@property(retain) CAReportingServer *master; // @synthesize master=_master;
- (void).cxx_destruct;
- (void)getAllReporters:(CDUnknownBlockType)arg1;
- (void)handleConnectionError;
- (void)postAWDMetric:(unsigned int)arg1 withData:(id)arg2;
- (void)postSimpleAWDMetric:(unsigned int)arg1;
- (void)reporterID:(long long)arg1 valid:(CDUnknownBlockType)arg2;
- (void)destroyReportingSession:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;
- (void)sendMessage:(id)arg1 withCategory:(unsigned short)arg2 andType:(unsigned short)arg3 forReportingIDs:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)startReportingSessionForID:(long long)arg1;
- (void)getServiceNameForReporterID:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)createReportingSession:(long long)arg1;
- (id)initWithMasterAndID:(id)arg1 clientID:(int)arg2 outError:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

