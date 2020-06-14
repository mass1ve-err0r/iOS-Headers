//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLInternalSettings : NSObject
{
    _Bool _restrictNeuralNetworksToUseCPUOnly;
    _Bool _restrictNeuralNetworksToUseNonEnergyEfficientMode;
    _Bool _experimentalMode;
    _Bool _isNeuralNetworkGPUPathForbidden;
    _Bool _isNeuralNetworkEnergyEfficientPathForbidden;
}

+ (id)globalSettings;
@property(readonly, nonatomic) _Bool isNeuralNetworkEnergyEfficientPathForbidden; // @synthesize isNeuralNetworkEnergyEfficientPathForbidden=_isNeuralNetworkEnergyEfficientPathForbidden;
@property(readonly, nonatomic) _Bool isNeuralNetworkGPUPathForbidden; // @synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden;
@property _Bool experimentalMode; // @synthesize experimentalMode=_experimentalMode;
@property _Bool restrictNeuralNetworksToUseNonEnergyEfficientMode; // @synthesize restrictNeuralNetworksToUseNonEnergyEfficientMode=_restrictNeuralNetworksToUseNonEnergyEfficientMode;
@property _Bool restrictNeuralNetworksToUseCPUOnly; // @synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly;
- (id)init;

@end

