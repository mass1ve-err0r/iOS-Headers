//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFDAMailAccountConsumer.h>

#import <Message/DAMessageSendConsumer-Protocol.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer>
{
    MFError *_error;
    long long _status;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
}

@property(readonly, nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) unsigned long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
- (void)dealloc;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;

@end

