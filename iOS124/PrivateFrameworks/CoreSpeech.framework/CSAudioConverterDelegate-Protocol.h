//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioConverter, NSArray;

@protocol CSAudioConverterDelegate <NSObject>
- (void)audioConverterDidConvertPackets:(CSAudioConverter *)arg1 packets:(NSArray *)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4;
@end

