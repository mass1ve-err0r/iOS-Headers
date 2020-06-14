//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface AFXPCWrapper : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcObject;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)xpcObject;
- (id)initWithXPCObject:(id)arg1;

@end

