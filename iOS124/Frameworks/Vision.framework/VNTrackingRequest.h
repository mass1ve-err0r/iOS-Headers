//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest
{
    VNDetectedObjectObservation *_inputObservation;
    unsigned long long _trackingLevel;
    _Bool _lastFrame;
}

+ (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
+ (unsigned long long)_trackingLevelEnumFromTrackingLevelOption:(id)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
@property(nonatomic, getter=isLastFrame) _Bool lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) unsigned long long trackingLevel; // @synthesize trackingLevel=_trackingLevel;
- (void).cxx_destruct;
- (id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)trackerType;
@property(retain, nonatomic) VNDetectedObjectObservation *inputObservation; // @synthesize inputObservation=_inputObservation;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultRequestInstance;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newTrackerOptionsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)sequencedRequestPreviousObservationsKey;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)_trackingLevelOptionFromTrackingLevelEnum;

@end

