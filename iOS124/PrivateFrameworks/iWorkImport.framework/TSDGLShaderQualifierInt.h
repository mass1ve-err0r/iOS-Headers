//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDGLShaderQualifier.h>

__attribute__((visibility("hidden")))
@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier
{
    int _GLintValue;
    int _proposedGLintValue;
}

@property(nonatomic) int proposedGLintValue; // @synthesize proposedGLintValue=_proposedGLintValue;
@property(readonly, nonatomic) int GLintValue; // @synthesize GLintValue=_GLintValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

