//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NSMutableCopying-Protocol.h>
#import <NeutrinoCore/NUBuffer-Protocol.h>

@class NSString, NUBufferStorage, NUPixelFormat;
@protocol NUBuffer;

@interface NUPixelBuffer : NSObject <NUBuffer, NSCopying, NSMutableCopying>
{
    NUBufferStorage *_storage;
    id <NUBuffer> _buffer;
}

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)privateInit;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
- (void)dealloc;
@property(readonly, nonatomic) const void *bytes;
@property(readonly, nonatomic) long long rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

