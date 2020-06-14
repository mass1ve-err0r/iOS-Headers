//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, PBCodable;

@protocol HDNanoSyncPersistentUserInfoCopying <NSObject>
+ (NSString *)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(NSDictionary *)arg1;
- (PBCodable *)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(NSMutableDictionary *)arg1;
- (id)initWithData:(NSData *)arg1;
@end

