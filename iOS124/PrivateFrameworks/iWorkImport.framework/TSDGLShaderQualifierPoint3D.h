//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGLShaderQualifier.h>

__attribute__((visibility("hidden")))
@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier
{
    CDStruct_03942939 _GLPoint3DValue;
    CDStruct_03942939 _proposedGLPoint3DValue;
}

@property(nonatomic) CDStruct_03942939 proposedGLPoint3DValue; // @synthesize proposedGLPoint3DValue=_proposedGLPoint3DValue;
@property(readonly, nonatomic) CDStruct_03942939 GLPoint3DValue; // @synthesize GLPoint3DValue=_GLPoint3DValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

