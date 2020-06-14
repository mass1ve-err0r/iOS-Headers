//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSUStreamReadChannel-Protocol.h>

@class NSString, SFUCryptoKey;
@protocol OS_dispatch_data, OS_dispatch_queue, TSUStreamReadChannel;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_readChannelQueue;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long long _ivRead;
    struct _CCCryptor *_cryptor;
    char *_buffer;
    unsigned long long _initialBytesIgnored;
}

- (void).cxx_destruct;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

