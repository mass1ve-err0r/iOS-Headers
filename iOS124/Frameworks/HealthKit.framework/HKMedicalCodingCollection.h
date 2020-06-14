//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_codings;
}

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithCodings:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *codings; // @synthesize codings=_codings;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodings:(id)arg1;
- (id)init;

@end

