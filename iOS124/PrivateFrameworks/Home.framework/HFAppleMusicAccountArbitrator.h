//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NAFuture, NSSet;

@interface HFAppleMusicAccountArbitrator : NSObject
{
    _Bool _forceLogout;
    ACAccount *_account;
    NSSet *_accessories;
    CDUnknownBlockType _contextGenerator;
    long long _loginType;
    NAFuture *_activeArbitrationFuture;
}

@property(retain, nonatomic) NAFuture *activeArbitrationFuture; // @synthesize activeArbitrationFuture=_activeArbitrationFuture;
@property(nonatomic) _Bool forceLogout; // @synthesize forceLogout=_forceLogout;
@property(nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(readonly, copy, nonatomic) CDUnknownBlockType contextGenerator; // @synthesize contextGenerator=_contextGenerator;
@property(readonly, copy, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)_resolvedLoginType:(id *)arg1;
- (id)pendingArbitrationExecutionFuture;
- (id)init;
- (id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(CDUnknownBlockType)arg3;

@end

