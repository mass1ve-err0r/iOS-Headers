//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNAudioSession-Protocol.h>

@class MNTraceRouteSimulator, NSString;

__attribute__((visibility("hidden")))
@interface MNSimulatorAudioSession : NSObject <MNAudioSession>
{
    id _delegate;
    unsigned long long _voiceGuidanceLevel;
    MNTraceRouteSimulator *_simulator;
}

@property(retain, nonatomic) MNTraceRouteSimulator *simulator; // @synthesize simulator=_simulator;
@property(nonatomic) unsigned long long voiceGuidanceLevel; // @synthesize voiceGuidanceLevel=_voiceGuidanceLevel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearAllAnnouncements;
- (void)stop;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareToAnnounce;
- (void)endSession;
- (void)beginSession;
- (id)initWithSimulator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

