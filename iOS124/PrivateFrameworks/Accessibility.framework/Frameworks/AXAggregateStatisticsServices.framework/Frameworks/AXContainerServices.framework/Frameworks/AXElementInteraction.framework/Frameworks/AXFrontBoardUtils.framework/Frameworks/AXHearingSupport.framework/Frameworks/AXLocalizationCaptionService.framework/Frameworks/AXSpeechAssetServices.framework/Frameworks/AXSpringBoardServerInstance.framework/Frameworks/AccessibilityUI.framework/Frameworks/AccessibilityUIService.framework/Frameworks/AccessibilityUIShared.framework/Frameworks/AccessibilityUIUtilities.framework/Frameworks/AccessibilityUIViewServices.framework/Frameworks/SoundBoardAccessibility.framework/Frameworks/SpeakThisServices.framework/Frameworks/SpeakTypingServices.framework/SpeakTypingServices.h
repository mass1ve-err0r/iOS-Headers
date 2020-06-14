//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeakTypingServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate>
{
    AXUIClient *_speakTypingClient;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AXUIClient *speakTypingClient; // @synthesize speakTypingClient=_speakTypingClient;
- (void).cxx_destruct;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)initializeServerConnection;
- (id)_clientIdentifier;
- (_Bool)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg1 forCurrentInputMode:(id)arg2;
- (_Bool)notifySpeakServicesToFeedbackWord:(id)arg1 forCurrentInputMode:(id)arg2;
- (_Bool)notifySpeakServicesToFeedbackCharacter:(id)arg1 forCurrentInputMode:(id)arg2;
- (_Bool)notifySpeakServicesForSpeakAutoCorrections:(id)arg1 forCurrentInputMode:(id)arg2;
- (_Bool)notifySpeakServicesForSpeechOutput:(id)arg1 volume:(double)arg2 speakingRate:(double)arg3;
- (_Bool)notifySpeakServicesForAttributedSpeechOutput:(id)arg1;
- (_Bool)notifySpeakServicesToStopSpeaking;
- (void)setLetterFeedbackEnabled:(_Bool)arg1;
- (void)setPhoneticFeedbackEnabled:(_Bool)arg1;
- (void)setWordFeedbackEnabled:(_Bool)arg1;
- (id)lastSpokenString;
- (id)lastUsedVoiceIdentifier;
- (void)setVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)clearLastSpokenString;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

