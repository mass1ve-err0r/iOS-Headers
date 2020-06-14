//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate;

@protocol WBSHistoryConnectionProtocol
- (void)debugGetDatabaseURLWithCompletionHandler:(void (^)(NSURL *, NSError *))arg1;
- (void)queryMemoryFootprint:(void (^)(WBSMemoryFootprint *, NSError *))arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getVisitedLinksWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)beginHistoryAccessSession:(void (^)(id <WBSHistoryAccessSessionProtocol>, NSError *))arg1;
- (void)beginURLCompletionSession:(void (^)(id <WBSURLCompletionSessionProtocol>, NSError *))arg1;
- (void)getServiceInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)ensureConnected:(void (^)(NSError *))arg1;
@end

