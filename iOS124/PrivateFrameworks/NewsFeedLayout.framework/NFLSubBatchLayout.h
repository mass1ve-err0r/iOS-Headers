//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedComponentLayout-Protocol.h>

@class NFLFeedSettings, NSArray, NSDictionary, NSString;

@interface NFLSubBatchLayout : NSObject <NFLFeedComponentLayout>
{
    _Bool _valid;
    NFLFeedSettings *_feedSettings;
    NSArray *_tileInfosUsed;
}

+ (id)subBatchFromHeadlines:(id)arg1 feedSettings:(id)arg2;
@property(copy, nonatomic) NSArray *tileInfosUsed; // @synthesize tileInfosUsed=_tileInfosUsed;
@property(retain, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (id)singleComponentLayouts;
@property(readonly, copy, nonatomic) NSDictionary *layoutDataByTileInfo;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)layoutInfosWithFeedSettings:(id)arg1;
@property(readonly, nonatomic) unsigned long long columnSpan;
@property(readonly, nonatomic) unsigned long long rowSpan;
@property(readonly, nonatomic) double rank;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

