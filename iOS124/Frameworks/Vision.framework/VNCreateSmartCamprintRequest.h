//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest
{
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) _Bool returnAllResults;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

