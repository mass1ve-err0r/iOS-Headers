//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLAppleWordTaggerParameters, NSString;

@interface MLAppleWordTagger : MLModel <MLModelSpecificationLoader>
{
    void *wordTaggingModel;
    MLAppleWordTaggerParameters *_parameters;
}

+ (_Bool)saveAppleWordTaggingModelToURL:(id)arg1 wordTaggerParameters:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property(readonly) MLAppleWordTaggerParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

