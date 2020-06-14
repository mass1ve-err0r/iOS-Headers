//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSConfig : NSObject
{
}

+ (float)remoteVADDuration;
+ (float)daysBeforeRemovingLogFiles;
+ (int)csAudioProcessingQueuePriority;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned long long)channelForOutputReference;
+ (unsigned int)audioConverterBitrate;
+ (double)inputRecordingBufferDuration;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)inputRecordingSampleRate;

@end

