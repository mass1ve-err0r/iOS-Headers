//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEnvironmentUIKitDelegate.h>

#import <MetricsKit/MTEnvironmentDelegate-Protocol.h>

@class NSString;

@interface MTEnvironmentUIKitStoreDelegate : MTEnvironmentUIKitDelegate <MTEnvironmentDelegate>
{
}

+ (id)_ams_cookiesForURL:(id)arg1;
- (id)userType;
- (id)userAgent;
- (id)storeFrontHeader;
- (id)osBuildNumber;
- (id)hardwareModel;
- (id)dsId;
- (id)_cookies;
- (id)cookies;
- (id)connectionType;
- (id)capacitySystemAvailable;
- (id)capacitySystem;
- (id)capacityDisk;
- (id)capacityDataAvailable;
- (id)capacityData;
- (id)_diskUsage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

