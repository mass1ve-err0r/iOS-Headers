//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKKeyValueDomain : NSObject <_HKXPCExportable>
{
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _category;
    NSString *_domainName;
}

+ (id)clientInterface;
+ (id)serverInterface;
- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)allValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2 healthStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

