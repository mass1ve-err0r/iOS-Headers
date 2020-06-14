//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, VCSession;

@protocol VCSessionDelegate <NSObject>
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didDetectError:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeProminence:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;
@end

