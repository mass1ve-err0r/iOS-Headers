//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLSampler-Protocol.h>

@class NSString;

@interface PMLGaussianSampler : NSObject <PMLSampler>
{
    CDStruct_9981aeec _rng;
    float _magnitude;
}

- (float)sample;
- (id)initWithMagnitude:(float)arg1;
- (id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

