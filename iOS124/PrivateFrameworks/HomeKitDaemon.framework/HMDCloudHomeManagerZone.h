//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@interface HMDCloudHomeManagerZone : HMDCloudZone
{
}

+ (void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
- (void)setServerChangeToken:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(_Bool)arg1;

@end

