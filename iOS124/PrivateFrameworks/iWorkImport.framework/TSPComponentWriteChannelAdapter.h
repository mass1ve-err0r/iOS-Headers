//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSError, NSString, TSUFileIOChannel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_channel;
    CDUnknownBlockType _handler;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;
- (id)initWithChannel:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

