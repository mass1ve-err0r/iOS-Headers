//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSpIdProcessor : NSObject
{
    NSString *_sysConfigFilepath;
}

@property(readonly, nonatomic) NSString *sysConfigFilepath; // @synthesize sysConfigFilepath=_sysConfigFilepath;
- (void).cxx_destruct;
- (void)logUtteranceUnderDirectory:(id)arg1 withScores:(id)arg2 withWinner:(id)arg3;
- (void)rejectUtterance;
- (void)updateModelWithBestScoreUser:(id)arg1;
- (void)endProcessing;
- (void)processAudioData:(id)arg1;
@property(readonly, nonatomic) float satScoreThreshold;
@property(readonly, nonatomic) unsigned long long spIdType;
- (id)initWithCSSpIdType:(unsigned long long)arg1 delegate:(id)arg2;

@end

