//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError, VCSessionParticipant;

@protocol VCSessionParticipantStreamDelegate <NSObject>
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;
@end

