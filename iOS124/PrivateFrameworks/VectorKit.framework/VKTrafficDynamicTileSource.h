//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

@class VKTileCache;

__attribute__((visibility("hidden")))
@interface VKTrafficDynamicTileSource : VKTileSetBackedTileSource
{
    VKTileCache *_recentTrafficDynamicTiles;
}

- (_Bool)allowPreliminaryTiles;
- (id)stateDescriptionForRenderKey:(const struct VKTileKey *)arg1;
- (void)expireTiles;
- (void)forceExpireTile:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 isPrefetch:(_Bool)arg2;
- (id)sourceKeysForRenderKey:(const struct VKTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (_Bool)minimumZoomLevelBoundsCamera;
- (_Bool)maximumZoomLevelBoundsCamera;
- (unsigned char)mapLayerForZoomLevelRange;
- (long long)defaultMaximumZoomLevel;
- (long long)defaultMinimumZoomLevel;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)clearCaches;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end

