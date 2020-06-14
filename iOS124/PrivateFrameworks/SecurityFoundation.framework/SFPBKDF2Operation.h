//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSData, NSString;
@protocol SFPseudoRandomFunction;

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation>
{
    id _pbkdf2OperationInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_randomSalt;
+ (long long)keySource;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *salt;
@property(copy, nonatomic) id <SFPseudoRandomFunction> pseudoRandomFunction;
@property(nonatomic) long long iterationCount;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

