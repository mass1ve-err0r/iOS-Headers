//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SUTransactionManager : NSObject
{
    NSMutableSet *_openTransactions;
    NSMutableSet *_keepAliveTransactions;
    _Bool _keepAliveClearable;
}

+ (id)sharedInstance;
- (_Bool)_isKeepAliveEnabled:(id *)arg1;
- (void)_setKeepAlive:(_Bool)arg1;
- (void)_toggleKeepAliveStatus;
- (void)clearKeepAliveIfNecessary:(_Bool)arg1;
- (_Bool)isKeepAliveEnabled;
- (void)setKeepAliveClearable:(_Bool)arg1;
- (id)openTransactions;
- (_Bool)hasOpenTransactionForName:(id)arg1;
- (void)endTransaction:(id)arg1;
- (void)beginTransaction:(id)arg1 keepAlive:(_Bool)arg2;
- (void)beginTransaction:(id)arg1;
- (id)init;
- (void)dealloc;

@end

