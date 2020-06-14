//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreFollowRecommendationsRequest, MPStoreModelArtistBuilder, NSOperationQueue;

@interface MPStoreFollowRecommendationsOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreFollowRecommendationsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

+ (id)activeDSID;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreFollowRecommendationsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)_resultsDictionaryFromURLValue:(id)arg1;
- (id)_followRecommendationsFromPlatformValue:(id)arg1;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2;
- (id)_reccomendedArtistsURLFromBag:(id)arg1 accountDSID:(id)arg2;
- (void)execute;

@end

