//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DLabelsMeshRenderer.h>

@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer
{
    TSCH3DTextureAtlas *mAtlas;
    TSUNoCopyDictionary *mExternalAttributeVariables;
}

- (void)renderWithMeshRenderLabelInfo:(id)arg1;
- (void)flushCache;
- (void)submitResourcesWithProcessor:(id)arg1;
- (void)p_submitExternalAttributesForIndex:(unsigned long long)arg1 processor:(id)arg2;
- (id)p_resourceForExternalLabelAttribute:(id)arg1 index:(unsigned long long)arg2 createIfAbsent:(_Bool)arg3;
- (unsigned long long)p_indexForExternalAttribute:(id)arg1;
- (id)p_texcoordResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(_Bool)arg2;
- (id)p_vertexResourceAtIndex:(unsigned long long)arg1 createIfAbsent:(_Bool)arg2;
- (unsigned long long)p_resourceCount;
- (id)p_resourceAtIndex:(unsigned long long)arg1 childIndex:(unsigned long long)arg2 dimension:(unsigned long long)arg3 createIfAbsent:(_Bool)arg4;
- (void)beginResources:(id)arg1 samples:(float)arg2;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)dealloc;
- (id)init;

@end

