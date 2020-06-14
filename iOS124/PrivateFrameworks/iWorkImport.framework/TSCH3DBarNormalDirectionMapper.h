//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DNormalDirectionMapper.h>

__attribute__((visibility("hidden")))
@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper
{
    long long mWallOffset;
    long long mCrossSectionCount;
    long long mSpineCount;
    long long mBeginLimit;
    long long mEndLimit;
}

- (void)mapFromVertexArray:(const tvec3_17f03ce0 *)arg1 normalArray:(const tvec3_17f03ce0 *)arg2 normalMatrix:(const tmat3x3_b39cd897 *)arg3 numVertices:(long long)arg4 destination:(vector_aab22ae2 *)arg5;
- (id)initWithWallOffset:(long long)arg1 crossSectionCount:(long long)arg2 spineCount:(long long)arg3 beginLimit:(long long)arg4 endLimit:(long long)arg5;

@end

