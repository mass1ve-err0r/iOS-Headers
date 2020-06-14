//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    unsigned long long _staticSize;
    unsigned long long _dynamicSize;
    unsigned long long _sharedSize;
    unsigned long long _dataSize;
    unsigned long long _totalSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(readonly, nonatomic) unsigned long long sharedSize; // @synthesize sharedSize=_sharedSize;
@property(nonatomic) unsigned long long dynamicSize; // @synthesize dynamicSize=_dynamicSize;
@property(nonatomic) unsigned long long staticSize; // @synthesize staticSize=_staticSize;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

