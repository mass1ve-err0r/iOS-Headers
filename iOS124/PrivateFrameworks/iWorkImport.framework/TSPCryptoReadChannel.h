//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSArray, NSString, SFUCryptoKey;
@protocol OS_dispatch_data, TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
    SFUCryptoKey *_decryptionKey;
    NSArray *_blockInfos;
    NSObject<OS_dispatch_data> *_holdData;
    char *_iv;
    unsigned long long _ivRead;
    struct _CCCryptor *_cryptor;
    unsigned long long _initialBytesIgnored;
    unsigned long long _remainingBlockSize;
    unsigned long long _nextBlockIndex;
}

- (void).cxx_destruct;
- (void)_resetCryptor;
- (void)_readBlocksWithHandler:(CDUnknownBlockType)arg1;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 blockInfos:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

