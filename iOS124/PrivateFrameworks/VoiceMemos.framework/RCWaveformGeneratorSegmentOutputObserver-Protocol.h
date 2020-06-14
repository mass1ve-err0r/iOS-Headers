//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class NSError, RCWaveformGenerator, RCWaveformSegment;

@protocol RCWaveformGeneratorSegmentOutputObserver <NSObject>
- (void)waveformGenerator:(RCWaveformGenerator *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformGeneratorDidFinishLoading:(RCWaveformGenerator *)arg1 error:(NSError *)arg2;
- (void)waveformGeneratorWillBeginLoading:(RCWaveformGenerator *)arg1;
@end

