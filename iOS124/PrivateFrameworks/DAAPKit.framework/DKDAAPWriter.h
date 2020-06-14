//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSOutputStream;

@interface DKDAAPWriter : NSObject
{
    unsigned long long _state;
    NSError *_error;
    NSOutputStream *_outputStream;
    NSMutableArray *_containerStack;
}

@property(readonly, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_writeDataToOutputStream:(id)arg1;
- (void)_performWriteWithBuffer:(CDUnknownBlockType)arg1;
- (void)writeContainerData:(id)arg1;
- (void)writeBytes:(char *)arg1 ofLength:(unsigned int)arg2 withCode:(unsigned int)arg3;
- (void)writeCString:(const char *)arg1 withCode:(unsigned int)arg2;
- (void)writeString:(id)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt64:(long long)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt32:(int)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt16:(short)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt16:(unsigned short)arg1 withCode:(unsigned int)arg2;
- (void)writeSInt8:(BOOL)arg1 withCode:(unsigned int)arg2;
- (void)writeUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;
- (void)writeData:(id)arg1 withCode:(unsigned int)arg2;
- (void)endContainerWithCode:(unsigned int)arg1;
- (void)startContainerWithCode:(unsigned int)arg1;
- (void)close;
- (id)initWithStream:(id)arg1;

@end

