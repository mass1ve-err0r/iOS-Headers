//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/NSObject-Protocol.h>

@class CEMAssetBaseReference, NSDictionary;

@protocol DMFConfigurationSourceClientInterface <NSObject>
- (void)configurationEngineRequestedAsset:(CEMAssetBaseReference *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)configurationEventsDidChange:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)configurationStatusDidChange:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)probe:(void (^)(NSError *))arg1;
@end

