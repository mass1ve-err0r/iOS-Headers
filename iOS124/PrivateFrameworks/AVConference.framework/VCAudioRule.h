//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioRule : NSObject
{
    int _payload;
    _Bool _isSecondary;
    _Bool _sbr;
    unsigned int _samplesPerBlock;
}

@property(readonly, nonatomic) unsigned int samplesPerBlock; // @synthesize samplesPerBlock=_samplesPerBlock;
@property(readonly, nonatomic) _Bool sbr; // @synthesize sbr=_sbr;
@property(readonly, nonatomic) _Bool isSecondary; // @synthesize isSecondary=_isSecondary;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3 samplesPerBlock:(unsigned int)arg4;

@end

