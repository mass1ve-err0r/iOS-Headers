//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureProvider-Protocol.h>

@class NSSet;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface MLLazyUnionFeatureProvider : NSObject <MLFeatureProvider>
{
    id <MLFeatureProvider> _first;
    id <MLFeatureProvider> _second;
}

@property(retain, nonatomic) id <MLFeatureProvider> second; // @synthesize second=_second;
@property(retain, nonatomic) id <MLFeatureProvider> first; // @synthesize first=_first;
- (void).cxx_destruct;
- (id)unionFeatureProvider;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2;

@end

