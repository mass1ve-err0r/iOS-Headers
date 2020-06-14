//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PKAuthenticatorEvaluationRequest : NSObject
{
    _Bool _useStockAuthInterface;
    _Bool _assumeUserIntentAvailable;
    long long _authenticatorPolicy;
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
    NSData *_externalizedContext;
    struct __SecAccessControl *_accessControlRef;
    NSString *_physicalButtonTitle;
    NSString *_passcodeTitle;
}

@property(nonatomic) _Bool assumeUserIntentAvailable; // @synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable;
@property(copy, nonatomic) NSString *passcodeTitle; // @synthesize passcodeTitle=_passcodeTitle;
@property(copy, nonatomic) NSString *physicalButtonTitle; // @synthesize physicalButtonTitle=_physicalButtonTitle;
@property(nonatomic) _Bool useStockAuthInterface; // @synthesize useStockAuthInterface=_useStockAuthInterface;
@property(nonatomic) struct __SecAccessControl *accessControlRef; // @synthesize accessControlRef=_accessControlRef;
@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(copy, nonatomic) NSNumber *PINLength; // @synthesize PINLength=_PINLength;
@property(copy, nonatomic) NSString *PINTitle; // @synthesize PINTitle=_PINTitle;
@property(copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long authenticatorPolicy; // @synthesize authenticatorPolicy=_authenticatorPolicy;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolicy:(long long)arg1;
- (id)init;

@end

