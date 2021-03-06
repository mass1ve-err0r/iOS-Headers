/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver> {
    SHConfiguration * _configuration;
    double  _currentRequiredLength;
    SHMutableSignature * _mutableSignature;
    <SHRecognitionSessionDelegate> * _recognitionDelegate;
    <SHSessionDriverDelegate> * _sessionDelegate;
    NSDate * _sessionStartDate;
    bool  _waiting;
}

@property (nonatomic, retain) SHConfiguration *configuration;
@property (nonatomic) double currentRequiredLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SHSignature *matchingSignature;
@property (nonatomic, retain) SHMutableSignature *mutableSignature;
@property (nonatomic) <SHRecognitionSessionDelegate> *recognitionDelegate;
@property (nonatomic) <SHSessionDriverDelegate> *sessionDelegate;
@property (nonatomic, retain) NSDate *sessionStartDate;
@property (readonly) Class superclass;
@property (nonatomic) bool waiting;

- (void).cxx_destruct;
- (id)configuration;
- (double)currentRequiredLength;
- (void)flow:(id)arg1 time:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)matcher:(id)arg1 didFailForSignature:(id)arg2 apiResponse:(id)arg3 withError:(id)arg4;
- (void)matcher:(id)arg1 didFindMatch:(id)arg2 forSignature:(id)arg3 apiResponse:(id)arg4;
- (void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 apiResponse:(id)arg3;
- (id)matchingSignature;
- (id)mutableSignature;
- (id)recognitionDelegate;
- (void)reset;
- (id)sessionDelegate;
- (id)sessionStartDate;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentRequiredLength:(double)arg1;
- (void)setMutableSignature:(id)arg1;
- (void)setRecognitionDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)setSessionStartDate:(id)arg1;
- (void)setWaiting:(bool)arg1;
- (void)startResetTimerForIntermission:(double)arg1;
- (bool)waiting;

@end
