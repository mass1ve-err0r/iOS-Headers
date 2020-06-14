//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface _UICharacterStreamingManager : NSObject
{
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    _Bool _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    _Bool _committingFinalResults;
    _Bool _discardNextHypothesis;
    NSString *_previousHypothesis;
    NSString *_lastHypothesis;
    NSString *_targetHypothesis;
    NSMutableArray *_pendingEdits;
    double _streamingCharacterInsertionRate;
    double _minDurationBetweenHypotheses;
}

@property(nonatomic) _Bool discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(nonatomic) double minDurationBetweenHypotheses; // @synthesize minDurationBetweenHypotheses=_minDurationBetweenHypotheses;
@property(nonatomic) double streamingCharacterInsertionRate; // @synthesize streamingCharacterInsertionRate=_streamingCharacterInsertionRate;
@property(retain, nonatomic) NSMutableArray *pendingEdits; // @synthesize pendingEdits=_pendingEdits;
@property(copy, nonatomic) NSString *targetHypothesis; // @synthesize targetHypothesis=_targetHypothesis;
@property(copy, nonatomic) NSString *lastHypothesis; // @synthesize lastHypothesis=_lastHypothesis;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
- (void).cxx_destruct;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)setWords:(id)arg1;
- (void)commitFinalResults;
- (id)initWithTextView:(id)arg1;

@end

