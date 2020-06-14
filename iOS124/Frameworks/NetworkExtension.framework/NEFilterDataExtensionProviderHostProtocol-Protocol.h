//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NEAppInfo, NEFilterFlow, NEFilterReport;

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)report:(NEFilterReport *)arg1;
- (void)getSourceAppInfo:(NEAppInfo *)arg1 completionHandler:(void (^)(NEAppInfo *))arg2;
- (void)fetchCurrentRulesForFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
- (void)sendSocketContentFilterRequest;
- (void)sendBrowserContentFilterServerRequest;
@end

