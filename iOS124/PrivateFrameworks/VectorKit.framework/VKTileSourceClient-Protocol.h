//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, VKTile, VKTileKeyList, VKTileSource;

@protocol VKTileSourceClient <NSObject>
- (void)dirtyTilesFromTileSource:(VKTileSource *)arg1 withState:(unsigned long long)arg2;
- (void)dirtyTilesFromTileSource:(VKTileSource *)arg1;
- (void)tileSource:(VKTileSource *)arg1 dirtyTilesWithinRect:(const Box_3d7e3c2c *)arg2 level:(long long)arg3;
- (void)didStopLoadingTilesWithError:(NSError *)arg1;
- (void)willStartLoadingTiles;
- (_Bool)tileSource:(VKTileSource *)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (long long)tileSource:(VKTileSource *)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)invalidateTilesFromTileSource:(VKTileSource *)arg1;
- (void)tileSource:(VKTileSource *)arg1 invalidateTilesWithStatePredicate:(_Bool (^)(unsigned long long))arg2;
- (void)tileSource:(VKTileSource *)arg1 invalidateKeys:(VKTileKeyList *)arg2;
- (void)tileSource:(VKTileSource *)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(NSError *)arg3;
- (void)tileSource:(VKTileSource *)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(VKTileSource *)arg1 didFetchTile:(VKTile *)arg2 forKey:(const struct VKTileKey *)arg3;

@optional
- (void)expireTilesForTileSource:(VKTileSource *)arg1;
- (void)dirtyTile:(const struct VKTileKey *)arg1 source:(VKTileSource *)arg2;
@end

