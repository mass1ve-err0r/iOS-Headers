//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSPlayInfoRequestContext, SSPlayInfoResponse;

@interface GetPlayInfoOperation : ISOperation
{
    NSString *_clientIdentifierHeader;
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
    NSString *_userAgent;
}

- (void)_setResponseForOutput:(id)arg1;
- (void)_setPlayInfoResponse:(id)arg1;
- (void)_failWithError:(id)arg1;
- (id)_copyRequestBody:(id *)arg1;
- (void)run;
@property(copy) NSString *userAgent;
@property(copy) NSString *clientIdentifierHeader;
@property(readonly) SSPlayInfoResponse *playInfoResponse;
@property(readonly) SSPlayInfoRequestContext *playInfoContext;
- (void)dealloc;
- (id)initWithPlayInfoRequestContext:(id)arg1;

@end

