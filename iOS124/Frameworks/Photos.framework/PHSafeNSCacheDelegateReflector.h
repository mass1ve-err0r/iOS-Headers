//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCacheDelegate-Protocol.h>

@class NSLock, NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate>
{
    NSMapTable *_delegegatesByCache;
    NSLock *_lock;
}

+ (void)removeDelegateForCache:(id)arg1;
+ (void)setDelegate:(id)arg1 forCache:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeDelegateForCache:(id)arg1;
- (void)setDelegate:(id)arg1 forCache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

