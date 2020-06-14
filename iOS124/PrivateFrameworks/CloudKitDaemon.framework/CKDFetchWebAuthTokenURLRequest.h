//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest
{
    NSString *_APIToken;
    CDUnknownBlockType _tokenFetchedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tokenFetchedBlock; // @synthesize tokenFetchedBlock=_tokenFetchedBlock;
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end

