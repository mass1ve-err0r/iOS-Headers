//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSAudioZeroFilter : NSObject
{
    struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short>>> _audioZeroFilterImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)metrics;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)arg1;
- (unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id *)arg3;
- (id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(unsigned short)arg2 numHostTicksPerAudioSample:(double)arg3;

@end

