//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface XCTSerializedTransportWrapper : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_serializedTransport;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSObject<OS_xpc_object> *serializedTransport; // @synthesize serializedTransport=_serializedTransport;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedTransport:(id)arg1;

@end

