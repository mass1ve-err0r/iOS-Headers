//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NSCopying-Protocol.h>

@class NFLFeedCollectionViewLayoutAttributes;
@protocol NFLFeedTileInfo;

@interface NFLFeedTileLayoutInfo : NSObject <NSCopying>
{
    NSObject<NFLFeedTileInfo> *_tileInfo;
    NFLFeedCollectionViewLayoutAttributes *_layoutAttributes;
}

+ (id)nfl_layoutInfoWithTileInfo:(id)arg1 forLayoutAttributes:(id)arg2 atRowOrigin:(long long)arg3 columnOrigin:(long long)arg4 subBatchRowOffset:(long long)arg5 feedSettings:(id)arg6;
@property(copy, nonatomic) NFLFeedCollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo; // @synthesize tileInfo=_tileInfo;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileInfo:(id)arg1 layoutAttributes:(id)arg2;
- (id)init;

@end

