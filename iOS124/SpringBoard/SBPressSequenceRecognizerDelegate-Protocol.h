//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBPressSequenceRecognizer;

@protocol SBPressSequenceRecognizerDelegate <NSObject>
- (void)pressSequenceRecognizerDidCompleteSequence:(SBPressSequenceRecognizer *)arg1;

@optional
- (void)pressSequenceRecognizerDidFail:(SBPressSequenceRecognizer *)arg1;
- (void)pressSequenceRecognizer:(SBPressSequenceRecognizer *)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
@end

