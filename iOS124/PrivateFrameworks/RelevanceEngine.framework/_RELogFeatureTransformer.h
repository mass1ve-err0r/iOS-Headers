//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _RELogFeatureTransformer : REFeatureTransformer
{
    double _base;
    unsigned long long _type;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)_transform:(id)arg1;
- (unsigned long long)_outputType;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (id)initWithBase:(id)arg1;

@end

