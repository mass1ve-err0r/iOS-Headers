//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSData, NSString;

@protocol BLTTTestServiceServerExportedInterface <NSObject>
- (void)removeSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)overriddenSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)originalSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)settingOverridesWithCompletion:(void (^)(NSArray *))arg1;
- (void)willAlertForSectionID:(NSString *)arg1 subtype:(long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)disableStandaloneTestModeWithCompletion:(void (^)(void))arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(void (^)(_Bool))arg1;
- (void)clearSectionInfoSentCacheWithCompletion:(void (^)(void))arg1;
- (void)spoolSectionInfoWithCompletion:(void (^)(void))arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)sendSectionInfoWithSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)addBulletin:(BBBulletin *)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(_Bool)arg3 attachment:(NSData *)arg4 attachmentType:(long long)arg5 alwaysSend:(_Bool)arg6 completion:(void (^)(_Bool))arg7;
@end

