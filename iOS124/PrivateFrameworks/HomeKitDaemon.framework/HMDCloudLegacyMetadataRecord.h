//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudRecord.h>

@interface HMDCloudLegacyMetadataRecord : HMDCloudRecord
{
}

+ (id)legacyModelWithMetadata:(id)arg1;
- (unsigned long long)objectEncoding;
- (void)clearData;
- (void)setData:(id)arg1;
- (id)data;
- (id)recordType;
- (_Bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;

@end

