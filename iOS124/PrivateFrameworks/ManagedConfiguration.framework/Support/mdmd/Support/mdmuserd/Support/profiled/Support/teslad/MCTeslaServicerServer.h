//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCTeslaServiceInterface-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSError, NSMutableData, NSString, NSTimer, NSURLSession, NSXPCConnection;

@interface MCTeslaServicerServer : NSObject <MCTeslaServiceInterface, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _isDaemonBusy;
    _Bool _certificateRetrievalFailed;
    _Bool _provisionalEnrollmentFailedWithBusyServerError;
    _Bool _profileConfigurationRetrievalFailedWithBusyServerError;
    _Bool _unenrollFailedWithBusyServerError;
    NSXPCConnection *_remoteProcessConnection;
    CDUnknownBlockType _completionBlock;
    NSString *_userAgentString;
    long long _requestType;
    long long _certificateRetrievalRequestCount;
    long long _provisionalEnrollmentRequestCount;
    long long _profileConfigurationRequestCount;
    long long _unenrollRequestCount;
    NSTimer *_timeoutTimer;
    NSString *_responseContentType;
    NSURLSession *_urlSession;
    double _retryAfterInterval;
    NSError *_fatalError;
    NSError *_error;
    NSString *_nonce;
    NSMutableData *_provisionalEnrollmentResponse;
    NSMutableData *_profileConfigurationResponse;
    NSMutableData *_unenrollResponse;
}

@property(retain, nonatomic) NSMutableData *unenrollResponse; // @synthesize unenrollResponse=_unenrollResponse;
@property(retain, nonatomic) NSMutableData *profileConfigurationResponse; // @synthesize profileConfigurationResponse=_profileConfigurationResponse;
@property(retain, nonatomic) NSMutableData *provisionalEnrollmentResponse; // @synthesize provisionalEnrollmentResponse=_provisionalEnrollmentResponse;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSError *fatalError; // @synthesize fatalError=_fatalError;
@property(nonatomic) double retryAfterInterval; // @synthesize retryAfterInterval=_retryAfterInterval;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSString *responseContentType; // @synthesize responseContentType=_responseContentType;
@property(nonatomic) _Bool unenrollFailedWithBusyServerError; // @synthesize unenrollFailedWithBusyServerError=_unenrollFailedWithBusyServerError;
@property(nonatomic) _Bool profileConfigurationRetrievalFailedWithBusyServerError; // @synthesize profileConfigurationRetrievalFailedWithBusyServerError=_profileConfigurationRetrievalFailedWithBusyServerError;
@property(nonatomic) _Bool provisionalEnrollmentFailedWithBusyServerError; // @synthesize provisionalEnrollmentFailedWithBusyServerError=_provisionalEnrollmentFailedWithBusyServerError;
@property(nonatomic) _Bool certificateRetrievalFailed; // @synthesize certificateRetrievalFailed=_certificateRetrievalFailed;
@property(nonatomic) _Bool isDaemonBusy; // @synthesize isDaemonBusy=_isDaemonBusy;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long unenrollRequestCount; // @synthesize unenrollRequestCount=_unenrollRequestCount;
@property(nonatomic) long long profileConfigurationRequestCount; // @synthesize profileConfigurationRequestCount=_profileConfigurationRequestCount;
@property(nonatomic) long long provisionalEnrollmentRequestCount; // @synthesize provisionalEnrollmentRequestCount=_provisionalEnrollmentRequestCount;
@property(nonatomic) long long certificateRetrievalRequestCount; // @synthesize certificateRetrievalRequestCount=_certificateRetrievalRequestCount;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSXPCConnection *remoteProcessConnection; // @synthesize remoteProcessConnection=_remoteProcessConnection;
- (void).cxx_destruct;
- (void)timeoutTimerDidFire:(id)arg1;
- (void)startRetryTimerWithInterval:(double)arg1;
- (void)dataFetch:(id)arg1 didFailWithError:(id)arg2;
- (id)_cloudConfigErrorInResponse:(id)arg1;
- (id)_errorStringForResponse:(id)arg1;
- (id)_cloudConfigErrorResponses;
- (void)_setLockdownCloudConfigAvailableKeyIfNeededWithError:(id)arg1;
- (void)retryUnenrollRequestIfAllowedAfterDelayOrFailWithError:(id)arg1;
- (void)retryProfileConfigurationRequestIfAllowedAfterDelayOrFailWithError:(id)arg1;
- (void)retryProvisionalEnrollmentRequestIfAllowedAfterDelayOrFailWithError:(id)arg1;
- (void)retryCertificateRetrievalIfAllowedAfterDelayOrFailWithError:(id)arg1;
- (void)retryRequestIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;
- (void)dataFetchCompleted:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)parseURLResponse:(id)arg1;
- (void)_callCompletionBlockWithWasSuccessful:(_Bool)arg1 responseDictionary:(id)arg2 error:(id)arg3;
- (void)sendUnenrollmentSucceededInfoToRemote;
- (void)sendProvisionalEnrollmentInfoToRemote;
- (void)sendProfileConfigurationInfoToRemote;
- (void)sendFailureNoticeToRemote;
- (void)establishRequestWithPrivateKey:(id)arg1 clientCertificates:(id)arg2;
- (void)retrieveClientCertificate;
- (void)startURLRequest:(id)arg1;
- (void)unenrollWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_startRequestWithRequestType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)validateEnrollmentResponse:(id)arg1 error:(id *)arg2;
- (_Bool)convertCloudConfigDictionary:(id)arg1 toManagedConfiguration:(id *)arg2;
- (id)descriptionForRequest:(long long)arg1;
- (id)nonceExpiredError;
- (id)deviceNotEnrolledError;
- (id)deviceAlreadyEnrolledError;
- (id)profileNotActiveError;
- (id)invalidSignatureError;
- (id)serverTrustError;
- (id)daemonBusyError;
- (id)teslaServiceBusyError;
- (id)teslaServiceDownError;
- (id)invalidDeviceError;
- (id)maxRetriesExceededError;
- (id)badFormatError;
- (id)internalError;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

