//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRSetVolumeMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) NSString *outputDeviceUID;
- (id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (id)initWithVolume:(float)arg1;

@end

