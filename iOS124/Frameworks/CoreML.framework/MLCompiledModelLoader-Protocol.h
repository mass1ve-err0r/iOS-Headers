//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/NSObject-Protocol.h>

@class MLModelConfiguration, MLVersionInfo;

@protocol MLCompiledModelLoader <NSObject>
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(MLVersionInfo *)arg2 compilerVersionInfo:(MLVersionInfo *)arg3 configuration:(MLModelConfiguration *)arg4 error:(id *)arg5;
@end

