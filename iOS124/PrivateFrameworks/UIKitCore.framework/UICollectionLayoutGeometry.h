//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, _UICollectionViewGeometricIndexer;

@interface UICollectionLayoutGeometry : NSObject <NSCopying>
{
    _Bool _isPrepared;
    NSArray *_groups;
    long long _preparedFrameCount;
    NSMutableArray *_groupBookmarks;
    _UICollectionViewGeometricIndexer *_groupBookmarksGeometricIndexer;
    struct CGSize _preparedContentSize;
}

+ (id)geometryWithGroups:(id)arg1;
+ (id)geometryWithGroupConfigurations:(id)arg1;
@property(retain, nonatomic) _UICollectionViewGeometricIndexer *groupBookmarksGeometricIndexer; // @synthesize groupBookmarksGeometricIndexer=_groupBookmarksGeometricIndexer;
@property(retain, nonatomic) NSMutableArray *groupBookmarks; // @synthesize groupBookmarks=_groupBookmarks;
@property(nonatomic) long long preparedFrameCount; // @synthesize preparedFrameCount=_preparedFrameCount;
@property(nonatomic) struct CGSize preparedContentSize; // @synthesize preparedContentSize=_preparedContentSize;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (struct CGRect)frameForItemAtIndex:(long long)arg1 applyingOffset:(struct CGPoint)arg2;
- (id)framesIntersectingRect:(struct CGRect)arg1 applyingOffset:(struct CGPoint)arg2;
- (void)_prepareWithContainerDimensions:(struct CGSize)arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3 consumeAllFrames:(_Bool)arg4;
- (void)prepareWithContainerDimensions:(struct CGSize)arg1 layoutAxis:(int)arg2 sizeProvider:(id)arg3;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithGroups:(id)arg1;

@end

