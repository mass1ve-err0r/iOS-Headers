//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLVertexDescriptor, NSArray, NSMutableArray, NSString;

@interface MTKMesh : NSObject
{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    unsigned long long _vertexCount;
    NSString *_name;
}

+ (id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id *)arg3 error:(id *)arg4;
+ (void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id *)arg5;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) NSArray *submeshes; // @synthesize submeshes=_submeshes;
@property(readonly, nonatomic) MDLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(readonly, nonatomic) NSArray *vertexBuffers; // @synthesize vertexBuffers=_vertexBuffers;
- (void).cxx_destruct;
- (id)initWithMesh:(id)arg1 device:(id)arg2 error:(id *)arg3;

@end

