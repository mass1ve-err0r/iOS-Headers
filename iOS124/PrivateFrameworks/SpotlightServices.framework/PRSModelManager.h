//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface PRSModelManager : NSObject
{
    _Bool _disablePolicy;
    NSNumber *_modelVersion;
    NSNumber *_shadowVersion;
    NSMutableDictionary *_shadowModels;
    NSMutableDictionary *_models;
    unsigned long long _activeCount;
}

+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id *)arg5;
+ (id)directivesFromFilePath:(id)arg1;
+ (_Bool)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id *)arg3 directivesPath:(id *)arg4;
+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id *)arg2 modelName:(id *)arg3;
+ (id)errorDomain;
+ (id)sharedModelManager;
@property(nonatomic) unsigned long long activeCount; // @synthesize activeCount=_activeCount;
@property(retain, nonatomic) NSMutableDictionary *models; // @synthesize models=_models;
@property(retain, nonatomic) NSMutableDictionary *shadowModels; // @synthesize shadowModels=_shadowModels;
@property(retain, nonatomic) NSNumber *shadowVersion; // @synthesize shadowVersion=_shadowVersion;
@property(retain, nonatomic) NSNumber *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(nonatomic) _Bool disablePolicy; // @synthesize disablePolicy=_disablePolicy;
- (void).cxx_destruct;
- (double)testL2WithData:(id)arg1 experimental:(_Bool)arg2;
- (float *)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5 shouldCancel:(_Bool *)arg6;
- (float *)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 forShadow:(_Bool)arg7 shouldCancel:(_Bool *)arg8;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(_Bool)arg2 disablePendingUpdates:(_Bool)arg3;
- (id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4;
- (void)loadCannedModels;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id *)arg2;
- (void)triggerUpdate;
- (void)deactivate;
- (void)activate;
- (id)getL2ModelVersion;
- (void)dealloc;
- (id)init;

@end

