//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAudioUnitEQFilterParameters : NSObject
{
    void *_impl;
}

@property(nonatomic) _Bool bypass;
@property(nonatomic) float gain;
@property(nonatomic) float bandwidth;
@property(nonatomic) float frequency;
@property(nonatomic) long long filterType;
- (void)dealloc;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl *)arg1;
- (id)init;

@end

