//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding>
{
    long long _shuffleType;
    long long _repeatType;
    NSDictionary *_startTimes;
    NSDictionary *_endTimes;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *endTimes; // @synthesize endTimes=_endTimes;
@property(readonly, nonatomic) NSDictionary *startTimes; // @synthesize startTimes=_startTimes;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
- (void).cxx_destruct;
- (void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2;
- (void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_init;

@end

