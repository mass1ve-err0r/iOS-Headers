//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSString *_type;
    NSData *_data;
    unsigned long long _size;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long size; // @synthesize size=_size;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortDescription;
- (_Bool)isEqualToData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3;
- (id)init;

@end

