//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol ASDServiceProtocol <NSObject>
- (void)getUpdatesServiceWithReplyHandler:(void (^)(id <ASDUpdatesServiceProtocol>, NSError *))arg1;
- (void)getPurchaseServiceWithReplyHandler:(void (^)(id <ASDPurchaseServiceProtocol>, NSError *))arg1;
- (void)getPurchaseHistoryServiceWithReplyHandler:(void (^)(id <ASDPurchaseHistoryServiceProtocol>, NSError *))arg1;
- (void)getPersonalizationServiceWithReplyHandler:(void (^)(id <ASDPersonalizationServiceProtocol>, NSError *))arg1;
- (void)getLibraryServiceWithReplyHandler:(void (^)(id <ASDAppLibraryServiceProtocol>, NSError *))arg1;
- (void)getIAPHistoryServiceWithReplyHandler:(void (^)(id <ASDIAPHistoryServiceProtocol>, NSError *))arg1;
- (void)getDiagnosticServiceWithReplyHandler:(void (^)(id <ASDDiagnosticServiceProtocol>, NSError *))arg1;
- (void)getCrossfireServiceWithReplyHandler:(void (^)(id <ASDCrossfireServiceProtocol>, NSError *))arg1;
@end

