//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/_CATRemoteConnectionSendContext-Protocol.h>

@class NSData, NSInputStream, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    unsigned long long mBytesRead;
    NSInputStream *_stream;
    unsigned long long _dataLength;
    unsigned long long _bufferSize;
    id _userInfo;
    unsigned long long _bytesWritten;
}

@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, copy, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)bufferedDataWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long clientBytesWritten;
@property(readonly, nonatomic) _Bool hasBytesRemaining;
- (void)dealloc;
- (id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

