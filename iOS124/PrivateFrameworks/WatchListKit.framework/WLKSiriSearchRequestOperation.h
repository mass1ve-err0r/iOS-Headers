//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation
{
    NSDictionary *_query;
    WLKSiriSearchResponse *_response;
}

@property(readonly, nonatomic) WLKSiriSearchResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;

@end

