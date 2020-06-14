//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUAudioPlayer, HMDeviceSetupOperationHandler, NSDate, NSString, RPCompanionLinkClient, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, SFSiriClient, SFSiriDeviceSetupGreetingDetails;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Service : NSObject
{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    RPCompanionLinkClient *_companionLinkClient;
    NSObject<OS_dispatch_source> *_finishApplyTimer;
    NSObject<OS_dispatch_source> *_finishTimeoutTimer;
    _Bool _finished;
    _Bool _finished2;
    _Bool _finishedEventSent;
    _Bool _finishSessionEnded;
    _Bool _invalidateCalled;
    _Bool _iTunesCloudCompleted;
    int _iTunesCloudCompleteToken;
    double _iTunesCloudWaitSeconds;
    _Bool _mediaSystemReady;
    double _mediaSystemWaitSeconds;
    unsigned long long _peerFeatureFlags;
    SFClient *_sfClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFSiriClient *_siriClient;
    _Bool _siriDidDeviceSetup;
    SFSiriDeviceSetupGreetingDetails *_siriGreetingDetails;
    _Bool _siriHeardWhatCanYouDo;
    _Bool _wifiSetupEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    CUAudioPlayer *_audioPlayer;
    _Bool _prefCDPEnabled;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_temperatureUnit;
    _Bool _siriDisabled;
    NSString *_siriListenLanguage;
    long long _siriVoiceGender;
    NSString *_siriVoiceLanguage;
    NSDate *_timeObj;
    int _timeAuto;
    long long _timeCycle;
    NSString *_timeZone;
    int _timeZoneAuto;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_setSiriLanguageInfo;
- (void)_speakLocalizedKey:(id)arg1 event:(unsigned int)arg2;
- (void)_siriGreetingDialogCPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingDialogCStart;
- (void)_siriGreetingDialogBPhrase:(id)arg1 localizedText:(id)arg2 error:(id)arg3;
- (void)_siriGreetingDialogBStart;
- (void)_siriGreetingDialogA;
- (void)_siriGreetingIntroPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingIntroStart;
- (void)_siriGreetingStart:(CDUnknownBlockType)arg1;
- (void)_playReadyToSetupSound;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (_Bool)_handleFinishDone2Ready;
- (void)_handleFinishDone2:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishDone:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishApply:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleBasicConfigResponse:(id)arg1;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

