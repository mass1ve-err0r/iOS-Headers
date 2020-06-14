//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSString;

@protocol VCMediaStreamSyncSourceDelegate <NSObject>
- (void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned int)arg2;
- (void)updateSourcePlayoutSampleRTPTimestamp:(unsigned int)arg1 systemTime:(double)arg2 uuid:(NSString *)arg3;
- (void)updateSourceState:(int)arg1;
@end

