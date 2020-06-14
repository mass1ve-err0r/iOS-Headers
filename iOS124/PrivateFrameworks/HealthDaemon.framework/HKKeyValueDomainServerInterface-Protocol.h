//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSSet, NSString;

@protocol HKKeyValueDomainServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_allValuesWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)remote_stringForKey:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_dateForKey:(NSString *)arg1 completion:(void (^)(NSDate *, NSError *))arg2;
- (void)remote_numberForKey:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_removeValuesForKeys:(NSSet *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setValuesWithDictionary:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setDate:(NSDate *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

