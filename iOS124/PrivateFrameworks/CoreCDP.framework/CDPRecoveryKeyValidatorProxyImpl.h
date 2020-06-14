//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPRecoveryKeyValidator-Protocol.h>

@class NSString;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator>
{
    id <CDPRecoveryKeyValidator> _validator;
}

- (void).cxx_destruct;
- (_Bool)confirmRecoveryKey:(id)arg1 error:(id *)arg2;
- (id)generateRecoveryKeyWithError:(id *)arg1;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRemoteObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

