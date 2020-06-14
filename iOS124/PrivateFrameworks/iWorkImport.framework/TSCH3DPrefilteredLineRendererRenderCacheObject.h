//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DSceneRenderCacheObject.h>

@class TSCH3DStrokePatternTexture;

__attribute__((visibility("hidden")))
@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject
{
    TSCH3DStrokePatternTexture *mStrokeTexture;
    _Bool mDidRenderOnce;
}

@property(nonatomic) _Bool didRenderOnce; // @synthesize didRenderOnce=mDidRenderOnce;
- (void)renderWithLineRenderer:(id)arg1 setting:(id)arg2 fromVertex:(const struct PrefilteredLineVertexProperties *)arg3 toVertex:(const struct PrefilteredLineVertexProperties *)arg4;
- (void)submitResourcesWithLineRenderer:(id)arg1 setting:(id)arg2;
- (id)p_diffuseTexcoords;
- (id)p_normals;
- (id)p_originalGeometry;
- (id)p_box;
- (id)p_texcoords;
- (id)p_geometry;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)dealloc;
- (id)init;

@end

