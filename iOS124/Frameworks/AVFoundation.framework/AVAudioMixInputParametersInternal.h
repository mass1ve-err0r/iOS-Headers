//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioMixEffectParameters, AVMutableScheduledAudioParameters, NSString;

__attribute__((visibility("hidden")))
@interface AVAudioMixInputParametersInternal : NSObject
{
    int trackID;
    AVMutableScheduledAudioParameters *scheduledAudioParameters;
    NSString *audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap *tap;
    AVAudioMixEffectParameters *effectParameters;
}

@end

