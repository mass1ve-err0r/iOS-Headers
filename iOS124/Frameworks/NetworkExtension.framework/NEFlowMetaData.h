//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fastOpenRequested;
    _Bool _multipathRequested;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppSigningIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) _Bool multipathRequested; // @synthesize multipathRequested=_multipathRequested;
@property(readonly) _Bool fastOpenRequested; // @synthesize fastOpenRequested=_fastOpenRequested;
@property(readonly) NSString *sourceAppSigningIdentifier; // @synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier;
@property(readonly) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;
- (id)initFromFlow:(struct _NEFlow *)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(_Bool)arg3 multipathRequested:(_Bool)arg4;

@end

