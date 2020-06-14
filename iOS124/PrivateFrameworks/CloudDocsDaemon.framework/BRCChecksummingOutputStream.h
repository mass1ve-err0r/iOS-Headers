//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BRCChecksummingOutputStream : NSOutputStream
{
    struct CC_SHA1state_st _ctx;
    unsigned char _sig[21];
    _Bool _isOpen;
}

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)streamStatus;
- (void)close;
- (void)open;
- (_Bool)hasSpaceAvailable;
- (id)initWithTag:(unsigned char)arg1;
@property(readonly, nonatomic) NSData *signature;

@end

