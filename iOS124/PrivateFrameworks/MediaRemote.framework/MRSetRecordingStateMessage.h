//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetRecordingStateMessage : MRProtocolMessage
{
}

@property(readonly, nonatomic) unsigned int state;
- (unsigned long long)type;
- (id)initWithRecordingState:(unsigned int)arg1;

@end

