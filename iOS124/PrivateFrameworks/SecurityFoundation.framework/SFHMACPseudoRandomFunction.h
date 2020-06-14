//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFPseudoRandomFunction-Protocol.h>

@class NSString;
@protocol SFDigestOperation;

@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction>
{
    id _hmacPseudoRandomFunctionInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
- (id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

