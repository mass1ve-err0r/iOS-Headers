//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DGLVersion.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLES2Version : TSCH3DGLVersion
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)version;
+ (id)_singletonAlloc;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (void)addCompatibilityFunctionsForShaderProgram:(id)arg1;
- (id)preprocessorDefinitions;
- (_Bool)deprecatesLuminanceAlpha;
- (_Bool)supportsClipDistances;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

