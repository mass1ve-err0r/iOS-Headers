//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface TXRArrayElement : NSObject <NSCopying>
{
    NSMutableArray *_faces;
}

@property(readonly) NSArray *faces; // @synthesize faces=_faces;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 atFace:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(_Bool)arg3 dataSourceProvider:(id)arg4;

@end

