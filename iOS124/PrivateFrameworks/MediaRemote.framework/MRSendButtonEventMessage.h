//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRSendButtonEventMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) struct _MRHIDButtonEvent buttonEvent;
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent)arg1;

@end

