//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TITypologyTimer : NSObject
{
    _Bool _foundFirstInput;
    double _elapsedTime;
    double _mostRecentTimestamp;
    double _maxTimeIntervalBetweenInputs;
}

@property(nonatomic) _Bool foundFirstInput; // @synthesize foundFirstInput=_foundFirstInput;
@property(nonatomic) double maxTimeIntervalBetweenInputs; // @synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs;
@property(nonatomic) double mostRecentTimestamp; // @synthesize mostRecentTimestamp=_mostRecentTimestamp;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)addInputEventWithTimestamp:(double)arg1;

@end

