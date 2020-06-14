//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOPDComponent, GEOPDPlace, NSArray;

@protocol GEOCacheManaging <NSObject>
- (long long)invalidationStateForComponent:(GEOPDComponent *)arg1;
- (long long)invalidationStateForPlace:(GEOPDPlace *)arg1;
- (void)snapshotWithFilePathArray:(NSArray *)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)checkHasExpiredWithInvalidationDatas:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)versionsForDomains:(NSArray *)arg1 handler:(void (^)(NSDictionary *))arg2;
@end

