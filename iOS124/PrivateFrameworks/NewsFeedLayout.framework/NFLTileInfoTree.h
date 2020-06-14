//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NFLFeedTileInfo;

@interface NFLTileInfoTree : NSObject
{
    long long _minimumRowSpan;
    long long _maximumRowSpan;
    NSMutableArray *_allRankedLayouts;
    id <NFLFeedTileInfo> _tileInfo;
    struct __CFDictionary *_values;
}

@property(nonatomic) struct __CFDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) id <NFLFeedTileInfo> tileInfo; // @synthesize tileInfo=_tileInfo;
@property(retain, nonatomic) NSMutableArray *allRankedLayouts; // @synthesize allRankedLayouts=_allRankedLayouts;
@property(nonatomic) long long maximumRowSpan; // @synthesize maximumRowSpan=_maximumRowSpan;
@property(nonatomic) long long minimumRowSpan; // @synthesize minimumRowSpan=_minimumRowSpan;
- (void).cxx_destruct;
- (id)rankedLayoutWithRowSpan:(long long)arg1 columnSpan:(long long)arg2 cellType:(long long)arg3;
- (void)insertRankedLayout:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithTileInfo:(id)arg1;

@end

