//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKProfileService-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol GKProfileServicePrivate <GKProfileService>
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(void (^)(void))arg1;
- (oneway void)changeAlias:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)checkAliasForUniqueness:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)setFindable:(_Bool)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)deletePhotoWithHandler:(void (^)(NSError *))arg1;
- (oneway void)setPhotoData:(NSData *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)cachePhotos:(NSDictionary *)arg1 handler:(void (^)(void))arg2;
- (oneway void)setStatus:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
@end

