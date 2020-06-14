//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSUUID;

@interface HKDeletedObject : NSObject <NSSecureCoding>
{
    NSUUID *_UUID;
    NSDictionary *_metadata;
    long long _externalSyncObjectCode;
}

+ (_Bool)supportsSecureCoding;
+ (id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2;
+ (id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2;
@property(nonatomic) long long externalSyncObjectCode; // @synthesize externalSyncObjectCode=_externalSyncObjectCode;
@property(copy) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_init;

@end

