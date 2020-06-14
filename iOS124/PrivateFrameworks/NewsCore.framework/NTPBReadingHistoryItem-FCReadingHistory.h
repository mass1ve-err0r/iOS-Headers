//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBReadingHistoryItem.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>
#import <NewsCore/FCMutableReadingHistoryItem-Protocol.h>

@class CKRecord, NSDate, NSString;

@interface NTPBReadingHistoryItem (FCReadingHistory) <FCMutableReadingHistoryItem, FCKeyValueStoreCoding>
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)readingHistoryItemWithCKRecord:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;
@property(readonly, nonatomic) CKRecord *asCKRecord;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long articleLikingStatus;
- (void)setHasArticleBeenConsumed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasArticleBeenConsumed;
- (void)setHasArticleBeenMarkedOffensive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasArticleBeenMarkedOffensive;
- (void)setHasArticleBeenSeen:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasArticleBeenSeen;
- (void)setHasArticleBeenRead:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasArticleBeenRead;
- (void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
- (void)setFirstSeenAt:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *firstSeenAt;
- (void)setLastVisitedAt:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *lastVisitedAt;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) unsigned long long flags;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long maxVersionRead;
@property(readonly, nonatomic) long long maxVersionSeen;
@property(readonly, copy, nonatomic) NSString *sourceChannelTagID;
@property(readonly) Class superclass;
@end

