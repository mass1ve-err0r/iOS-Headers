//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding>
{
    CLRegionInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool conservativeEntry;
@property(readonly, nonatomic) CDStruct_5652eb1b clientRegion;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) _Bool notifyOnExit;
@property(nonatomic) _Bool notifyOnEntry;
@property(copy, nonatomic) NSString *onBehalfOfBundleId;
@property(nonatomic) int referenceFrame;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(CDStruct_5652eb1b)arg1;

@end

