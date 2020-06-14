//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AOSKit/NSPortDelegate-Protocol.h>

@class NSString, NSThread;

@interface AOSContext : NSObject <NSPortDelegate>
{
    struct AOSAccount *_account;
    struct AOSTransactionC *_transaction;
    CDUnknownFunctionPointerType _callback;
    NSThread *_callbackThread;
    id _info;
}

+ (id)contextWithAccount:(struct AOSAccount *)arg1 andTransaction:(struct AOSTransactionC *)arg2;
- (void)_performCallback;
- (id)_callbackThread;
- (_Bool)scheduleCallback;
- (id)info;
- (void)setInfo:(id)arg1;
- (struct AOSTransactionC *)transaction;
- (void)setTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSAccount *)account;
- (void)setAccount:(struct AOSAccount *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

