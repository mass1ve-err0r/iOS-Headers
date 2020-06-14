//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamMultiwayConfig.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig
{
    long long _resolution;
    NSMutableSet *_payloads;
    unsigned int _framerate;
    unsigned long long _keyFrameInterval;
    NSMutableArray *_subStreamConfigs;
}

@property(readonly, nonatomic) NSArray *subStreamConfigs; // @synthesize subStreamConfigs=_subStreamConfigs;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(readonly, nonatomic) NSSet *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
- (id)streamIds;
- (void)addSubStreamConfig:(id)arg1;
- (void)addPayload:(int)arg1;
- (void)dealloc;
- (id)init;

@end

