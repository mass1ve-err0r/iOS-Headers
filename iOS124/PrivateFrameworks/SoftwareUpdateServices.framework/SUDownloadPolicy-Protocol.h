//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class SUDescriptor;
@protocol SUDownloadPolicy;

@protocol SUDownloadPolicy <NSObject>
@property(retain, nonatomic) SUDescriptor *descriptor;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2 powerRequired:(_Bool *)arg3;
- (_Bool)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(_Bool *)arg2;
- (_Bool)isDownloadAllowableForWiFi;
- (_Bool)isDownloadAllowableForCellularRoaming;
- (_Bool)isDownloadAllowableForCellular2G;
- (_Bool)isDownloadAllowableForCellular;
- (_Bool)isDownloadFreeForCellular;
- (_Bool)isDownloadable;
- (_Bool)isPowerRequired;
- (_Bool)hasEnoughDiskSpace;
- (_Bool)isSamePolicy:(id <SUDownloadPolicy>)arg1;
- (id)initWithDescriptor:(SUDescriptor *)arg1;
@end

