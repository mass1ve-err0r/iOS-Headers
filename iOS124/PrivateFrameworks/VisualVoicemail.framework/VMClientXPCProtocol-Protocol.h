//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMAccountManagerXPCClient-Protocol.h>
#import <VisualVoicemail/VMGreetingManagerXPCClient-Protocol.h>

@class NSOrderedSet, VMVoicemailCapabilities;

@protocol VMClientXPCProtocol <VMAccountManagerXPCClient, VMGreetingManagerXPCClient>
- (void)setTranscribing:(_Bool)arg1;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSyncInProgress:(_Bool)arg1;
- (void)setCapabilities:(VMVoicemailCapabilities *)arg1;
- (void)setSubscribed:(_Bool)arg1;
- (void)setOnline:(_Bool)arg1;
- (void)voicemailsUpdated:(NSOrderedSet *)arg1;
@end

