//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRBufferMap-Protocol.h>

@class NSString, TXRDefaultBuffer;

__attribute__((visibility("hidden")))
@interface TXRDefaultBufferMap : NSObject <TXRBufferMap>
{
    void *_bytes;
    TXRDefaultBuffer *_buffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) void *bytes;
- (id)initForBuffer:(id)arg1 withBytes:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

