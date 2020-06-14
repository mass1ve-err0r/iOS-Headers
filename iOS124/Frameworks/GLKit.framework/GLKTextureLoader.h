//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject
{
    _Bool _supportsASTC_LDR;
    _Bool _supportsETC2;
    EAGLContext *_glContext;
    NSLock *_nsLock;
}

+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5 lock:(id)arg6 glContext:(id)arg7;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)_textureWithTextureTXR:(id)arg1 error:(id *)arg2;
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;
@property _Bool supportsETC2; // @synthesize supportsETC2=_supportsETC2;
@property _Bool supportsASTC_LDR; // @synthesize supportsASTC_LDR=_supportsASTC_LDR;
@property(retain) NSLock *nsLock; // @synthesize nsLock=_nsLock;
@property(retain) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithSharegroup:(id)arg1;

@end

