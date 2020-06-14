//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVVCAudioBuffer : NSObject
{
    void *_impl;
}

@property(readonly) _Bool remoteVoiceActivityAvailable;
@property(readonly) unsigned char remoteVoiceActivityVAD;
@property(readonly) unsigned char remoteVoiceActivityRMS;
@property(readonly) struct AudioStreamBasicDescription *streamDescription;
@property(readonly) unsigned long long timeStamp;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;
@property(readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly) int packetDescriptionCount;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) void *data;
@property int bytesDataSize;
@property(readonly) int bytesCapacity;
@property(readonly) int channels;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;
- (void)dealloc;
- (void)finalize;

@end

