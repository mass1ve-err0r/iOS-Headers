//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, _UIVisualEffectLayerConfig;

@interface _UIVisualEffectConfig : NSObject
{
    NSMutableArray *_layerConfigs;
    _UIVisualEffectLayerConfig *_contentConfig;
}

+ (id)configWithLayerConfigs:(id)arg1;
+ (id)configWithContentConfig:(id)arg1;
@property(readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig; // @synthesize contentConfig=_contentConfig;
@property(readonly, nonatomic) NSArray *layerConfigs; // @synthesize layerConfigs=_layerConfigs;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateLayerConfigs:(CDUnknownBlockType)arg1;
- (void)addLayerConfig:(id)arg1;

@end

