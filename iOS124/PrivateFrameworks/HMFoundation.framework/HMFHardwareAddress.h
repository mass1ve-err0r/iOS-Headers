//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFObject-Protocol.h>
#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSString *_formattedString;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(readonly) unsigned long long length;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

