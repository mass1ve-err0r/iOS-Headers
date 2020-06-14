//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, VSAudioData, VSSpeechSynthesisCore;

@protocol VSSpeechSynthesisCoreDelegate <NSObject>

@optional
- (void)synthesisCore:(VSSpeechSynthesisCore *)arg1 didReceiveWordTimingInfo:(NSArray *)arg2;
- (void)synthesisCore:(VSSpeechSynthesisCore *)arg1 didReceiveAudio:(VSAudioData *)arg2;
@end

