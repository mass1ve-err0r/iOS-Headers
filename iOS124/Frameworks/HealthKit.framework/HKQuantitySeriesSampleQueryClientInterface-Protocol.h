//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKCodableQuantitySeries, NSUUID;

@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverQuantitySeries:(HKCodableQuantitySeries *)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3 query:(NSUUID *)arg4;
@end

