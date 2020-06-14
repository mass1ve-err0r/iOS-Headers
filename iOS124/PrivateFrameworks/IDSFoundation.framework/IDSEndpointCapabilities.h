//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface IDSEndpointCapabilities : NSObject <NSSecureCoding>
{
    NSDictionary *_capabilitiesMap;
}

+ (_Bool)supportsSecureCoding;
+ (id)validCapabilityKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_capabilitiesMapFromClientDeviceData:(id)arg1;
- (id)description;
- (id)valueForCapability:(id)arg1;
- (id)initWithCapabilitiesMap:(id)arg1;
- (id)initWithClientDeviceData:(id)arg1;

@end

