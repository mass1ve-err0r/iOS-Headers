//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    long long _purgeableSize;
    NSArray *_purgeableApps;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *purgeableApps; // @synthesize purgeableApps=_purgeableApps;
@property(readonly, nonatomic) long long purgeableSize; // @synthesize purgeableSize=_purgeableSize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2;
- (id)init;

@end

