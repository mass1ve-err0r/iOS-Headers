//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLModeling-Protocol.h>

@class MLModelConfiguration, MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLModel : NSObject <MLModeling>
{
    MLModelInterface *_interface;
    MLModelMetadata *_metadata;
    MLModelDescription *_modelDescription;
    MLModelConfiguration *_configuration;
}

+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)modelWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (_Bool)serializeInterfaceAndMetadata:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 error:(id *)arg3;
+ (id)predictionsFromSubbatchingBatch:(id)arg1 maxSubbatchLength:(long long)arg2 predictionBlock:(CDUnknownBlockType)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)predictionsFromLoopingOverBatch:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compileModelAtURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(readonly) MLModelMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) MLModelInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5 configuration:(id)arg6;
- (id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2;
- (id)initWithDescription:(id)arg1;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)objectBoundingBoxOutputDescription;
- (id)initInterfaceAndMetadataWithCompiledArchive:(struct _MLModelInputArchiver *)arg1 error:(id *)arg2;
- (id)visionFeaturePrintInfo;
- (id)debugQuickLookObject;
- (id)vectorizeInput:(id)arg1 error:(id *)arg2;

@end

