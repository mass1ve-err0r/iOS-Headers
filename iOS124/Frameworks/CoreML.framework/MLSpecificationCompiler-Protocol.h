//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MLCompilerOptions, MLCompilerResult, MLVersionInfo;

@protocol MLSpecificationCompiler
+ (MLVersionInfo *)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(MLCompilerOptions *)arg2 error:(id *)arg3;
+ (MLCompilerResult *)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(MLCompilerOptions *)arg3 error:(id *)arg4;
@end

