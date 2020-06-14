//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class NSData;
@protocol MTLBuffer;

@interface MPSCNNNeuron : MPSCNNKernel
{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    _Bool _noCopy;
    unsigned long long _count;
    id <MTLBuffer> _aBuf;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) float c; // @synthesize c=_c;
@property(readonly, nonatomic) float b; // @synthesize b=_b;
@property(readonly, nonatomic) float a; // @synthesize a=_a;
@property(readonly, nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)initializeWithNeuronType:(int)arg1 neuronParameterA:(const float *)arg2 count:(unsigned long long)arg3;
- (void)initializeWithNeuronType:(int)arg1 neuronParameterA:(float)arg2 neuronParameterB:(float)arg3 neuronParameterC:(float)arg4;
- (id)initWithDevice:(id)arg1;
- (id)privateInitWithDevice:(id)arg1 a:(const float *)arg2 count:(unsigned long long)arg3 type:(int)arg4;
- (id)privateInitWithDevice:(id)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 type:(int)arg5;
- (id)initWithDevice:(id)arg1 neuronDescriptor:(id)arg2;

@end

