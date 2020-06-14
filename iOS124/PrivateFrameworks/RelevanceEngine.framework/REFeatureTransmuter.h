//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableOrderedSet, REFeatureMap, REFeatureMapGenerator, REFeatureSet;

@interface REFeatureTransmuter : NSObject
{
    REFeatureSet *_inputSet;
    REFeatureSet *_outputSet;
    NSArray *_orderedFeatures;
    REFeatureMapGenerator *_orderedFeatureMapGenerator;
    REFeatureMap *_scratchValues;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    NSMutableOrderedSet *_featureValuesCache;
    NSLock *_featureValuesCacheLock;
}

- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (id)transformFeatureMaps:(id)arg1;
- (id)_buildGraph;
- (_Bool)_supportedFeature:(id)arg1;
- (id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3;

@end

