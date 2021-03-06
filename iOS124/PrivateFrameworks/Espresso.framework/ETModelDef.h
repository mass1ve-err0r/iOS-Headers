//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ETModelDef : NSObject
{
    shared_ptr_d082c67d _network;
}

@property shared_ptr_d082c67d network; // @synthesize network=_network;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)randomizeWeightsForLayer:(id)arg1 withSeed:(float)arg2;
- (void)updateLayer:(id)arg1 withBiases:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (void)updateLayer:(id)arg1 withWeights:(shared_ptr_6c49034a)arg2 length:(unsigned long long)arg3;
- (shared_ptr_0954c506)biasesForLayer:(id)arg1;
- (shared_ptr_e18d3254)weightsForLayer:(id)arg1;
- (struct layer *)innerProductLayerForName:(id)arg1;
- (shared_ptr_210dbb06)topNamesForLayerIndex:(int)arg1;
- (id)initWithNetwork:(id)arg1;

@end

