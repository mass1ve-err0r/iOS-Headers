//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic
{
    TITypologyTimer *_timer;
    TITypologyTimer *_adjustedTimer;
}

@property(retain, nonatomic) TITypologyTimer *adjustedTimer; // @synthesize adjustedTimer=_adjustedTimer;
@property(retain, nonatomic) TITypologyTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)visitRecordKeyboardInput:(id)arg1;
@property(readonly, nonatomic) double adjustedElapsedTime;
@property(readonly, nonatomic) double elapsedTime;
- (id)aggregateReport;
- (id)structuredReport;
- (id)init;

@end

