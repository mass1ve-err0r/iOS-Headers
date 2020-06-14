//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString, SLMicroBlogStatus;

@protocol SLMicroBlogSheetDelegate
@property(copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock;
- (void)logDidSendStatusWithText:(NSString *)arg1 attachments:(NSArray *)arg2 locationAttached:(_Bool)arg3 fromProcessWithPID:(int)arg4;
- (void)stopDeferringExpensiveOperations;
- (void)deferExpensiveOperations;
- (NSString *)serviceAccountTypeIdentifier;
- (void)showSettingsIfNeeded;
- (void)sendStatus:(SLMicroBlogStatus *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchProfileImageDataForScreenName:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)recordsMatchingPrefixString:(NSString *)arg1 completion:(_Bool (^)(NSArray *, NSError *))arg2;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchGeotagStatus:(void (^)(int, NSError *))arg1;
- (void)fetchCurrentImageLimits:(void (^)(NSNumber *, NSError *))arg1;
- (void)fetchCurrentUrlLimits:(void (^)(long long, long long, NSError *))arg1;
- (void)fetchSessionInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setActiveAccountIdentifier:(NSString *)arg1;
- (void)endPotentialLocationUse;
- (void)beginPotentialLocationUse;

@optional
- (void)ensureUserRecordStore;
- (NSData *)cachedProfileImageDataForScreenName:(NSString *)arg1;
- (_Bool)countMediaAttachmentsTowardCharacterCount;
- (long long)characterCountForText:(NSString *)arg1 shortenedURLCost:(long long)arg2;
@end

