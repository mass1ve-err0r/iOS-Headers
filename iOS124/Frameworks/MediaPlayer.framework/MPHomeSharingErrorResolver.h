//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVErrorResolver.h>

#import <MediaPlayer/SSAuthorizationRequestDelegate-Protocol.h>

@class MPHomeSharingML3DataProvider, NSData, NSError, NSMutableArray, NSString, NSURL, SSAuthorizationRequest;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate>
{
    NSURL *_keybagURL;
    unsigned long long _accountID;
    NSData *_accountTokenData;
    unsigned long long _downloaderAccountID;
    NSData *_downloaderAccountTokenData;
    unsigned long long _familyAccountID;
    NSError *_error;
    NSMutableArray *_requests;
    SSAuthorizationRequest *_activeRequest;
    _Bool _atLeastOneAuthorizationRequestSuccessful;
    MPHomeSharingML3DataProvider *_dataProvider;
}

@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)_processNextAuthorizationRequest;
- (void)_performMachineAuthorization;
- (_Bool)_errorIsFairPlayError:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resolveError:(id)arg1;
- (void)dealloc;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 downloaderAccountID:(unsigned long long)arg4 downloaderAccountTokenData:(id)arg5 familyAccountID:(unsigned long long)arg6;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

