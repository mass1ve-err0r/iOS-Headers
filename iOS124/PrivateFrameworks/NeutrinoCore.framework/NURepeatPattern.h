//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@interface NURepeatPattern : NUPattern
{
    NUPattern *_pattern;
    long long _minCount;
    long long _maxCount;
}

@property(readonly) long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly) long long minCount; // @synthesize minCount=_minCount;
@property(readonly) NUPattern *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToRepeatPattern:(id)arg1;
- (_Bool)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (_Bool)isFixedOrder;
- (id)tokens;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;
- (id)initWithPattern:(id)arg1 count:(long long)arg2;
- (id)init;

@end

