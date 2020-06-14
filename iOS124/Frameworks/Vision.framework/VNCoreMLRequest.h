//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest
{
    VNCoreMLModel *_model;
}

+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
@property(readonly, nonatomic) VNCoreMLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (id)newDefaultRequestInstance;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
- (id)initWithModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
