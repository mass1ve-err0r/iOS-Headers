//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKLabelTileSource : VKTileSetBackedTileSource
{
    shared_ptr_e1d4bd06 _labelManager;
    _Bool _localizeLabels;
    unsigned char _labelScaleFactor;
}

@property(nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) _Bool localizeLabels; // @synthesize localizeLabels=_localizeLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (struct TaskQueue *)tileDecodeQueue;
- (unsigned char)_labelTileType;
- (_Bool)shouldObeyHybridUnavailableRegions;
- (long long)defaultMaximumZoomLevel;
- (unsigned int)maximumDownloadZoomLevel;
- (_Bool)maximumZoomLevelBoundsCamera;
- (_Bool)minimumZoomLevelBoundsCamera;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5 labelManager:(const shared_ptr_e1d4bd06 *)arg6;

@end

